﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveIt : MonoBehaviour {

	public Vector3 moveIt;

	void Start () {
		StartCoroutine(BalloonFloat());
	}
	
IEnumerator BalloonFloat(){

	while (moveIt.x < 0.3f){
		print("Floating away");
		moveIt.x += 0.1f;
		transform.Translate(moveIt);
		yield return new WaitForSeconds(0.01f);

	}
}
}
