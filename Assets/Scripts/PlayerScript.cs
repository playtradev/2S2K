using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;



public class PlayerScript : MonoBehaviourPunCallbacks
{
	public Player CurrentPlayer;
	private bool Setup = false;
	public int Bullets;
	public int BaseBullets;
	public PhotonView PV;
	public List<Material> Skin = new List<Material>();

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () 
	{
		if(!Setup && Skin.Count > 0)
		{
			Setup = true;
			GetComponentInChildren<SkinnedMeshRenderer>().materials = Skin.ToArray();
			BaseBullets = Bullets;
		}

		if(GameManagerScript.Instance.GMStatus == GameManagerStatusType.EndMatch && Bullets != BaseBullets)
		{
			Bullets = BaseBullets;
		}
	}

	private void OnMouseOver()
	{
		if (Input.GetMouseButtonUp(0) && Bullets > 0 &&
		    GameManagerScript.Instance.GMStatus == GameManagerStatusType.Match &&
		    GameManagerScript.Instance.amIPlaying && GameManagerScript.Instance.amIPlaying)
		{
			Bullets--;
			GameManagerScript.Instance.IShootTo(CurrentPlayer.ActorNumber);
			Debug.Log(CurrentPlayer.ActorNumber);
        }
	}
}
