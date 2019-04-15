using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System.Linq;

public class PUNManagerScript : MonoBehaviourPun {

	public static PUNManagerScript Instance;
	public Camera MainCam;

	private void Awake()
	{
		Instance = this;
	}

	[PunRPC]
    public void RPC_SetSkin(int viewID, int skinId, int camPos, int actorNum, int bullets)
    {
		GameObject go = PhotonView.Find(viewID).gameObject;
        PlayerScript ps = go.GetComponent<PlayerScript>();
		List<int> mats = new List<int>();
		mats.Add(skinId);
		ps.Skin = SkinManager.Instance.GetSkinMaterials(mats);
		ps.Bullets = bullets;
		ps.CurrentPlayer = PhotonNetwork.PlayerList.Where(r=> r.ActorNumber == actorNum).First();
		if(PhotonNetwork.LocalPlayer.ActorNumber == actorNum)
		{
			MainCam.transform.position = GameManagerScript.Instance.CameraPositions[camPos].position;
			MainCam.transform.rotation = GameManagerScript.Instance.CameraPositions[camPos].rotation;
		}
    }


	[PunRPC]
	public void RPC_Shoot(int actorNum, int damage)
    {
		GameManagerScript.Instance.SetShoot(actorNum, damage);
    }

	[PunRPC]
	public void RPC_StartFirstMatchClient(float startingTime)
    {
		if(!PhotonNetwork.IsMasterClient)
		{
			StartCoroutine(GameUIManager.Instance.StartFirstMatch(startingTime));
		}
    }

	[PunRPC]
	public void RPC_StartNextMatchClient(float startingTime)
    {
        if (!PhotonNetwork.IsMasterClient)
        {
			StartCoroutine(GameUIManager.Instance.StartNextMatch(startingTime));
        }
    }

	[PunRPC]
    public void RPC_YouDie(int actorNum)
    {
		GameManagerScript.Instance.YouDie(actorNum);
    }

	[PunRPC]
	public void RPC_WriteRank(string rank)
    {
		Debug.Log("entered");

		GameUIManager.Instance.WriteRank(rank);
    }
    

	[PunRPC]
	public void RPC_SetupNextMatch()
    {
		if (PhotonNetwork.IsMasterClient)
        {
            GameManagerScript.Instance.SetupNextMatch();
        }
    }




}
