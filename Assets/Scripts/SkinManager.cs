using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.EventSystems;

public class SkinManager : MonoBehaviour {

	public static SkinManager Instance;
	public List<Material> ListOfSkins = new List<Material>();
	public List<Transform> ListOfHats = new List<Transform>();
	public List<Transform> ListOfWeapons = new List<Transform>();
	public List<Sprite> ListOfHatsUI = new List<Sprite>();
	public List<Sprite> ListOfSkinsUI = new List<Sprite>();
	public List<Sprite> ListOfWeaponsUI = new List<Sprite>();
	public List<ScreenTouches> TouchOnScreen = new List<ScreenTouches>();
	public Vector2 StartMousePosition = new Vector2(-1,-1);


	// Use this for initialization
	void Awake () {
		Instance = this;
	}
	
	public Material GetMaterial(int iD)
	{
		return ListOfSkins[iD];
	}

	public List<Material> GetSkinMaterials(List<int> iDs)
    {

		List<Material> res = new List<Material>();
        
		foreach (int id in iDs)
		{
			res.Add(ListOfSkins[id]);
		}
		return res;
    }

	public Sprite GetSkinUI(int iD)
    {
		return ListOfSkinsUI[iD];
    }
	public Sprite GetHatUI(int iD)
    {
		return ListOfHatsUI[iD];
    }
	public Sprite GetWeaponUI(int iD)
    {
		return ListOfWeaponsUI[iD];
    }


	private void Update()
	{
		if(Input.touches.Length > 0)
		{
			List<ScreenTouches> ListST = new List<ScreenTouches>();
			List<Touch> touches = Input.touches.ToList();
			bool NextPrev = false;
			foreach (Touch touch in touches.Where(r=> r.phase == TouchPhase.Ended).ToList())
			{
				Debug.Log(" touch ID in update   " + touch.fingerId);
				ScreenTouches st = TouchOnScreen.Where(r => r.TouchId == touch.fingerId).First();
				ListST.Add(st);

				Vector2 StartPos = ListST.Last().StartPos;
				if(StartPos.x - touch.position.x < 100)
				{
					Debug.Log("previous");
					NextPrev = false;
				}
				else if (StartPos.x - touch.position.x > 100)
                {
                    Debug.Log("next");
					NextPrev = true;
                }

				switch (st.CustomizationType)
				{
					case CustomizationObjectType.Skin:
						UISkinManager.Instance.SetColorToSkin(GetNextSkinSelection(NextPrev));
						break;
					case CustomizationObjectType.Hat:
						UISkinManager.Instance.SetColorToHat(GetNextHatSelection(NextPrev));
                        break;
					case CustomizationObjectType.Weapon:
						UISkinManager.Instance.SetColorToWeapon(GetNextWeaponSelection(NextPrev));
                        break;
				}
			}
			Debug.Log(ListST.Count + "   elem in the list");
			foreach (ScreenTouches item in ListST)
			{

				Debug.Log(item.TouchId + "   ele in delete list id");
				TouchOnScreen.Remove(item);
			}

			Debug.Log("End touch");
		}
		else if (Input.GetMouseButtonUp(0))
        {
			bool NextPrev = false;
			if (TouchOnScreen[0].StartPos.x - Input.mousePosition.x < 100)
            {
				Debug.Log("previous  " + TouchOnScreen[0].CustomizationType);
				NextPrev = false;
            }
			else if (TouchOnScreen[0].StartPos.x - Input.mousePosition.x > 100)
            {
				Debug.Log("next   " + TouchOnScreen[0].CustomizationType);
				NextPrev = true;
            }
			switch (TouchOnScreen[0].CustomizationType)
            {
                case CustomizationObjectType.Skin:
					Launcher.Instance.SkinId = GetNextSkinSelection(NextPrev);
					UISkinManager.Instance.SetColorToSkin(Launcher.Instance.SkinId);
                    break;
                case CustomizationObjectType.Hat:
					Launcher.Instance.HatId = GetNextHatSelection(NextPrev);
					UISkinManager.Instance.SetColorToHat(Launcher.Instance.HatId);
                    break;
                case CustomizationObjectType.Weapon:
					Launcher.Instance.WeaponId = GetNextWeaponSelection(NextPrev);
					UISkinManager.Instance.SetColorToWeapon(Launcher.Instance.WeaponId);
                    break;
            }

			TouchOnScreen.RemoveAt(0);
        }
	}

	public int GetNextSkinSelection(bool NextPrev)
	{
		if(NextPrev)
		{
			if(Launcher.Instance.SkinId == ListOfSkins.Count - 1)
			{
				return 0;
			}
			else
			{
				return Launcher.Instance.SkinId + 1;
			}
		}
		else
		{
			if (Launcher.Instance.SkinId == 0)
            {
				return ListOfSkins.Count - 1;
            }
            else
            {
				return Launcher.Instance.SkinId - 1;
            }
		}
	}

	public int GetNextHatSelection(bool NextPrev)
    {
        if (NextPrev)
        {
			if (Launcher.Instance.HatId == ListOfHats.Count - 1)
            {
                return 0;
            }
            else
            {
				return Launcher.Instance.HatId + 1;
            }
        }
        else
        {
			if (Launcher.Instance.HatId == 0)
            {
				return ListOfHats.Count - 1;
            }
            else
            {
				return Launcher.Instance.HatId - 1;
            }
        }
    }

	public int GetNextWeaponSelection(bool NextPrev)
    {
        if (NextPrev)
        {
			if (Launcher.Instance.WeaponId == ListOfWeapons.Count - 1)
            {
                return 0;
            }
            else
            {
				return Launcher.Instance.WeaponId + 1;
            }
        }
        else
        {
			if (Launcher.Instance.WeaponId == 0)
            {
				return ListOfWeapons.Count - 1;
            }
            else
            {
				return Launcher.Instance.WeaponId - 1;
            }
        }
    }

	public void CustomizationStart(BaseEventData baseEventData)
	{
		PointerEventData Touch = baseEventData as PointerEventData;
		if(Input.touchSupported)
		{
			Debug.Log(" touch ID   " + Touch.pointerId);
			TouchOnScreen.Add(new ScreenTouches(Touch.pointerId, Touch.position, Touch.pointerCurrentRaycast.gameObject.name == "Hat" ? CustomizationObjectType.Hat :
                                            Touch.pointerCurrentRaycast.gameObject.name == "Skin" ? CustomizationObjectType.Skin : CustomizationObjectType.Weapon));
		}
		else
		{
			TouchOnScreen.Add(new ScreenTouches(Input.mousePosition, Touch.pointerCurrentRaycast.gameObject.name == "Hat" ? CustomizationObjectType.Hat :
			                                    Touch.pointerCurrentRaycast.gameObject.name == "Skin" ? CustomizationObjectType.Skin : CustomizationObjectType.Weapon));
		}


	}

}


public class ScreenTouches
{
	public int TouchId;
	public Vector2 StartPos;
	public CustomizationObjectType CustomizationType;

	public ScreenTouches()
	{
        
    }

	public ScreenTouches(Vector2 startPos, CustomizationObjectType customizationType)
    {
		StartPos = startPos;
		CustomizationType = customizationType;
    }

	public ScreenTouches(int touchId, Vector2 startPos, CustomizationObjectType customizationType)
    {
		TouchId = touchId;
		StartPos = startPos;
        CustomizationType = customizationType;
    }
}


public enum NextPreviousType
{
	Next = 1,
    Previous = -1
}



public enum CustomizationObjectType
{
	Hat,
    Skin,
    Weapon
}