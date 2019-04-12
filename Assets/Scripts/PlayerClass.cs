using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using UnityEngine;

public class PlayerClass
{
	public Player CurrentPlayer;
	public List<Material> Skin;
	public int SkinID;
	public int Pos;
	public int HP;
	public int Bullets;



	public PlayerClass()
	{
	}

	public PlayerClass(Player cp, List<Material> skin, int pos, int skinID, int hp, int bullets)
	{
		CurrentPlayer = cp;
		Skin = skin;
		Pos = pos;
		SkinID = skinID;
		HP = hp;
		Bullets = bullets;
	}
}
