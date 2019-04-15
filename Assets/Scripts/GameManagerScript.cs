using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System.Linq;
using System;

public class GameManagerScript : MonoBehaviourPun {

	public static GameManagerScript Instance;

	public int MatchNumber = 0;

	public GameManagerStatusType GMStatus = GameManagerStatusType.Intro;

	public bool amIPlaying = true;

	public Dictionary<int, GameObject> ListOfPayersAndChars = new Dictionary<int, GameObject>();
	public List<Transform> CharPositions = new List<Transform>();
	public List<Transform> CameraPositions = new List<Transform>();

	public GameObject Character;

	private bool areCharInstantiated = false;

	private void Awake()
	{
		Instance = this;
	}
	private void Update()
	{
		if(PlayersContainer.Instance != null && !areCharInstantiated)
		{
			areCharInstantiated = true;
			StartCoroutine(GameUIManager.Instance.StartFirstMatch(PlayersContainer.Instance.StartingTime));
			this.photonView.RPC("RPC_StartFirstMatchClient", RpcTarget.Others, PlayersContainer.Instance.StartingTime);
			foreach (PlayerClass item in PlayersContainer.Instance.PlayersList)
			{
				CharInstantiator(item);
			}

		}
	}
	public void CharInstantiator(PlayerClass pc)
	{
		GameObject go = PhotonNetwork.Instantiate(Character.name, CharPositions[pc.Pos].position, CharPositions[pc.Pos].rotation);
		PlayerScript ps = go.GetComponent<PlayerScript>();
		ps.CurrentPlayer = pc.CurrentPlayer;
		ps.Skin = pc.Skin;
		ListOfPayersAndChars.Add(pc.CurrentPlayer.ActorNumber, go);
		this.photonView.RPC("RPC_SetSkin", RpcTarget.All, go.GetComponent<PhotonView>().ViewID, pc.SkinID, pc.Pos, pc.CurrentPlayer.ActorNumber, pc.Bullets);
	}
    public void IShootTo(int actorNum)
	{
		this.photonView.RPC("RPC_Shoot", RpcTarget.MasterClient, actorNum, 1);
	}
	public void SetShoot(int actorNum, int damage)
	{
		Debug.Log("shoot");
		PlayerClass enemy = PlayersContainer.Instance.PlayersList.Where(r => r.CurrentPlayer.ActorNumber == actorNum).First();
		enemy.HP = enemy.HP - damage;
	}
    public void StartMatch()
	{
		MatchNumber++;
		Invoke("EndMatch", 2);
		GMStatus = GameManagerStatusType.Match;
	}
    public void EndMatch()
	{
		GMStatus = GameManagerStatusType.EndMatch;
		Invoke("CreateRank", 1);
	}
	public void CreateRank()
	{
		string res = "";
		foreach (PlayerClass item in PlayersContainer.Instance.PlayersList.OrderByDescending(r=> r.HP))
        {
			res += item.CurrentPlayer.NickName + "    " + item.HP + Environment.NewLine;
			if(item.HP <= 0)
			{
				this.photonView.RPC("RPC_YouDie", RpcTarget.All, item.CurrentPlayer.ActorNumber);
			}
        }
		Debug.Log(res);
		this.photonView.RPC("RPC_WriteRank", RpcTarget.All, res);
		this.photonView.RPC("RPC_SetupNextMatch", RpcTarget.All, res);

	}
    public void SetupNextMatch()
	{
		StartCoroutine(GameUIManager.Instance.StartNextMatch(PhotonNetwork.Time + 10));
		this.photonView.RPC("RPC_StartNextMatchClient", RpcTarget.Others, (float)(PhotonNetwork.Time + 10));
	}
	public void YouDie(int actorNum)
	{
		if(ListOfPayersAndChars.Count > 0) 
		{
			if(ListOfPayersAndChars[actorNum] != null)
			{
				PhotonNetwork.Destroy(ListOfPayersAndChars[actorNum]);
			}
		}
	}
}



public enum GameManagerStatusType
{
	Intro,
    Match,
    EndMatch,
    EndGame
}


