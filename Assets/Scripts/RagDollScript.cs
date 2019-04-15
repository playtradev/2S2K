using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RagDollScript : MonoBehaviour {

	public Rigidbody La1;
	public Rigidbody La2;
	public Rigidbody La3;
	public Rigidbody La4;
    public Rigidbody La5;
    public Rigidbody La6;
	public Rigidbody La7;
    public Rigidbody La8;
    public Rigidbody La9;



	public Rigidbody RHand;
    public Rigidbody RElbow;
    public Rigidbody RArm;




	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	     if(Input.GetKeyDown(KeyCode.Q))
        {
            La2.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.W))
        {
            La3.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.E))
        {
            La4.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.R))
        {
            La5.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.T))
        {
            La6.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.Y))
        {
			La7.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.U))
        {
			La8.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if(Input.GetKeyDown(KeyCode.I))
        {
			La9.AddForce(Vector3.forward, ForceMode.Impulse);
        }
		else if (Input.GetKeyDown(KeyCode.P))
        {
            La1.AddForce(Vector3.forward, ForceMode.Impulse);
        }
	}
}
