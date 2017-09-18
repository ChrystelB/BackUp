using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Transport : MonoBehaviour {

	//public Transform transportArea;
	public Transform goHere;
	private GameObject player;
	public static bool canTransport = true;
	
	//public GameObject art;

	void Start (){
//		ZapPoint.Reappear += Transfer;
		player = GameObject.FindGameObjectWithTag("Player");
	}


	/*void Transfer (){

		transform.position = transportArea.position;

	}*/

	void OnTriggerEnter (Collider other) {
		if (other.tag == "Player" && canTransport == true){
			player.transform.position = goHere.transform.position;
			canTransport = false;
			print("Enter");
		}
	}

	void OnTriggerExit () {
		canTransport = true;
		print("Exit");
	}
}
