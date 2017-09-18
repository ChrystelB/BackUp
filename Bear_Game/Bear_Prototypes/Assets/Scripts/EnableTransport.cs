using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableTransport : MonoBehaviour {

	private Collider thisCollider;

	void Start (){
		thisCollider = GetComponent<Collider>();
	}

	void OnTriggerEnter (Collider other){
		if(other.tag == "Player" && Transport.canTransport == false){
			print("I'm not enabled");
		}
	}

	void OnTriggerExit () {
		Transport.canTransport = true;
		print("I'm enabled");
	}
}
