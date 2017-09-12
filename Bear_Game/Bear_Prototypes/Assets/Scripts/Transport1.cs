using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Transport1 : MonoBehaviour {

	public Transform transportArea;
	
	//public GameObject art;

	void Start (){
		ZapPoint1.Reappear += Transfer;
	}


	void Transfer (){

		transform.position = transportArea.position;

	}

}
