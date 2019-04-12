using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Pun;


public class GameUIManager : MonoBehaviourPun {
    
	public static GameUIManager Instance;
	public TextMeshProUGUI CountDown;
	public TextMeshProUGUI Rank;


	private void Start()
	{
		Instance = this;
	}


	public IEnumerator StartFirstMatch(double waitTime)
	{
		if(waitTime > 0)
		{
			double offsetTime = waitTime - PhotonNetwork.Time;
            Debug.Log(waitTime + "   " + PhotonNetwork.Time + "   " + offsetTime);
            CountDown.text = ((int)offsetTime).ToString();

            Debug.Log((float)offsetTime - (int)offsetTime);

            yield return new WaitForSecondsRealtime((float)offsetTime - (int)offsetTime);

            for (int i = (int)offsetTime; i > 0; i--)
            {
                CountDown.text = i.ToString();
                yield return new WaitForSecondsRealtime(1);

            }
            CountDown.gameObject.SetActive(false);
            GameManagerScript.Instance.StartMatch();
		}

	}

	public IEnumerator StartNextMatch(double waitTime)
    {
        if (waitTime > 0)
        {
            double offsetTime = waitTime - PhotonNetwork.Time;
            Debug.Log(waitTime + "   " + PhotonNetwork.Time + "   " + offsetTime);

			yield return new WaitForSecondsRealtime((float)offsetTime - 5);
			CountDown.gameObject.SetActive(true);
			Rank.gameObject.SetActive(false);
            CountDown.text = ((int)offsetTime).ToString();
            for (int i = 5; i > 0; i--)
            {
                CountDown.text = i.ToString();
                yield return new WaitForSecondsRealtime(1);

            }
            CountDown.gameObject.SetActive(false);
            GameManagerScript.Instance.StartMatch();
        }

    }

	public void WriteRank(string rank)
	{
		if(!string.IsNullOrEmpty(rank))
		{
			Rank.gameObject.SetActive(true);
			Rank.text = rank;
		}
		if(PhotonNetwork.IsMasterClient)
		{
			GameManagerScript.Instance.SetupNextMatch();
		}
	}

}
