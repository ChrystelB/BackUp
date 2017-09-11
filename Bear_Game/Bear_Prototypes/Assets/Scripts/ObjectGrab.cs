using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class ObjectGrab : MonoBehaviour
{


public GameObject player;



void OnTriggerEnter(Collider other)
	{
		//Destroy(other.gameObject);
		print("PickUp");
	}
			
	public void SetParent(GameObject newParent)
	{
		
			
		transform.parent.parent = player.transform;

				
		Debug.Log("Player's Parent: " + player.transform.parent.name);

				
		if (newParent.transform.parent != null)
		{
					
			Debug.Log("Player's Grand parent: " + player.transform.parent.parent.name);
		}

	}
		
	
}