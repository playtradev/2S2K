using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UISkinManager : MonoBehaviour {

	public static UISkinManager Instance;

	public Image HatLeft;
	public Image HatRight;

	public Image SkinLeft;
    public Image SkinRight;

	public Image WeaponLeft;
    public Image WeaponRight;




	// Use this for initialization
	void Awake () {
		Instance = this;
	}
    
	public void SetColorToSkin(int SkiniD)
	{
		List<int> mats = new List<int>();
		mats.Add(SkiniD);
		GameObject.FindWithTag("Character").GetComponentInChildren<SkinnedMeshRenderer>().materials = SkinManager.Instance.GetSkinMaterials(mats).ToArray();
		Launcher.Instance.SkinId = SkiniD;
		if(SkinLeft != null && SkinRight != null)
		{
			SkinLeft.sprite = SkinManager.Instance.GetSkinUI(SkinManager.Instance.GetNextSkinSelection(true));
			SkinRight.sprite = SkinManager.Instance.GetSkinUI(SkinManager.Instance.GetNextSkinSelection(false));
		}
	}

	public void SetColorToHat(int HatiD)
    {
		Launcher.Instance.HatId = HatiD;
		if(HatLeft != null && HatRight != null)
		{
			HatLeft.sprite = SkinManager.Instance.GetHatUI(SkinManager.Instance.GetNextHatSelection(true));
			HatRight.sprite = SkinManager.Instance.GetHatUI(SkinManager.Instance.GetNextHatSelection(false));
		}

    }

	public void SetColorToWeapon(int WeaponiD)
    {
		Launcher.Instance.WeaponId = WeaponiD;
		if (WeaponLeft != null && WeaponRight != null)
		{
			WeaponLeft.sprite = SkinManager.Instance.GetWeaponUI(SkinManager.Instance.GetNextWeaponSelection(true));
			WeaponRight.sprite = SkinManager.Instance.GetWeaponUI(SkinManager.Instance.GetNextWeaponSelection(false));
		}
    }



}
