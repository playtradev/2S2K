using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.EventSystems;

public class SkinManager : MonoBehaviour {

	public static SkinManager Instance;
	public List<Material> ListOfSkin = new List<Material>();
	public List<ScreenTouches> TouchOnScreen = new List<ScreenTouches>();
	public Vector2 StartMousePosition = new Vector2(-1,-1);


	// Use this for initialization
	void Start () {
		Instance = this;
	}
	
	public Material GetMaterial(int iD)
	{
		return ListOfSkin[iD];
	}

	public List<Material> GetMaterials(List<int> iDs)
    {

		List<Material> res = new List<Material>();
        
		foreach (int id in iDs)
		{
			res.Add(ListOfSkin[id]);
		}
		return res;
    }

	private void Update()
	{
		if(Input.touches.Length > 0)
		{
			List<ScreenTouches> ListST = new List<ScreenTouches>();
			List<Touch> touches = Input.touches.ToList();
			foreach (Touch touch in touches.Where(r=> r.phase == TouchPhase.Ended).ToList())
			{
				Debug.Log(" touch ID in update   " + touch.fingerId);

				ListST.Add(TouchOnScreen.Where(r => r.TouchId == touch.fingerId).First());

				Vector2 StartPos = ListST.Last().StartPos;
				if(StartPos.x - touch.position.x < 100)
				{
					Debug.Log("previous");
					UISkinManager.Instance.SetColorToChar(GetNExtSkin(false));
				}
				else if (StartPos.x - touch.position.x > 100)
                {
                    Debug.Log("next");
					UISkinManager.Instance.SetColorToChar(GetNExtSkin(true));
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
			if (TouchOnScreen[0].StartPos.x - Input.mousePosition.x < 100)
            {
				Debug.Log("previous  " + TouchOnScreen[0].CustomizationType);
				UISkinManager.Instance.SetColorToChar(GetNExtSkin(false));
            }
			else if (TouchOnScreen[0].StartPos.x - Input.mousePosition.x > 100)
            {
				Debug.Log("next   " + TouchOnScreen[0].CustomizationType);
				UISkinManager.Instance.SetColorToChar(GetNExtSkin(true));
            }

			TouchOnScreen.RemoveAt(0);
        }
	}

    public int GetNExtSkin(bool NextPrev)
	{
		if(NextPrev)
		{
			if(Launcher.Instance.SkinId == ListOfSkin.Count - 1)
			{
				return 0;
			}
			else
			{
				Launcher.Instance.SkinId++;
				return Launcher.Instance.SkinId;
			}
		}
		else
		{
			if (Launcher.Instance.SkinId == 0)
            {
				return ListOfSkin.Count - 1;
            }
            else
            {
				Launcher.Instance.SkinId--;
				return Launcher.Instance.SkinId;
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