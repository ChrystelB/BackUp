using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class ZapPoint : MonoBehaviour {

	public static Action Reappear;

	void OnTriggerEnter()
	{
		Reappear();
		print("Triggered");
	}
}