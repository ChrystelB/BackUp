using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class ObjectGrab : MonoBehaviour
{


public GameObject player;



void OnTriggerStay(Collider other)
	{
		//if (Input.GetButton ("PickUp")) {
			//Destroy(other.gameObject);
			print ("PickUp");
		}
	}
			
	void SetParent(GameObject newParent)
	{
		
		if(transform.parent.parent = player.transform);
		{
			Debug.Log ("Player's Parent: " + player.transform.parent.name);
		}


		if (newParent.transform.parent != null)
		{		
			Debug.Log("Player's Grand parent: " + player.transform.parent.parent.name);
		}

	}


	public class DeleteTrigger : MonoBehaviour {

	public Transform box;
	public bool tBox = false;

	void  OnTriggerEnter(Collider player) {
		if (!tBox)
		{
				tBox = true;
				box.transform.parent = player.transform;
		}
		else
		{
				Destroy(box.gameObject, 5);
		}
		}
	}	
	
}