using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ObjectGrab : MonoBehaviour
{


	public GameObject player;



	void OnTriggerEnter(Collider other)
	{
		print("PickUp");
	}
			
	public void SetParent(GameObject newParent)
	{
				
		player.transform.parent = newParent.transform;

				
		Debug.Log("Player's Parent: " + player.transform.parent.name);

				
		if (newParent.transform.parent != null)
		{
					
			Debug.Log("Player's Grand parent: " + player.transform.parent.parent.name);
		}

	}
		
	
}