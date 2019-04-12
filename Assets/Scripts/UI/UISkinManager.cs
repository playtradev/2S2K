using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UISkinManager : MonoBehaviour {

	public static UISkinManager Instance;

	public List<Image> ListSkins = new List<Image>();



	// Use this for initialization
	void Start () {
		Instance = this;

		/*for (int i = 0; i < ListSkins.Count; i++)
		{
			ListSkins[i].material = SkinManager.Instance.GetMaterial(i);
		}*/

	}

	public void SetColorToChar(int iD)
	{
		List<int> mats = new List<int>();
		mats.Add(iD);
		GameObject.FindWithTag("Character").GetComponentInChildren<SkinnedMeshRenderer>().materials = SkinManager.Instance.GetMaterials(mats).ToArray();
		Launcher.Instance.SkinId = iD;
	}



}
