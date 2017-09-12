using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Transport : MonoBehaviour {

	public Transform transportArea;
	
	//public GameObject art;

	void Start (){
		ZapPoint.Reappear += Transfer;
	}


	void Transfer (){

		transform.position = transportArea.position;

	}

}
