using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrabObjects : MonoBehaviour {

	public GameObject Trigger;

	public GameObject TriggerCarry;

	public void OnTriggerEnter(Collider other)
	{
		if(other.name == "Player")
		{
		Trigger.SetActive(false);
		TriggerCarry.SetActive(true);
		print ("PickUp");
		}
		
	}
}
