﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Moving_Platform : MonoBehaviour {


		public Vector3 movement;
		public float rightLimit = 0.0f;
		public float leftLimit = 0.0f;
		public float speed = 2.0f;
		private int direction = 1;


		void Update () {
			if (transform.position.x > rightLimit) {
				direction = -1;
			}
			else if (transform.position.x < leftLimit) {
				direction = 1;
			}
			movement = Vector3.right * direction * speed * Time.deltaTime; 
			transform.Translate(movement); 
		}

}