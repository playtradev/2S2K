using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using UnityEngine;

public class PlayersContainer : MonoBehaviour {

	public List<PlayerClass> PlayersList = new List<PlayerClass>();
	public float StartingTime;


	public static PlayersContainer Instance;

	// Use this for initialization
	void Start () {
		Instance = this;
		DontDestroyOnLoad(this.gameObject);
	}
	

}




