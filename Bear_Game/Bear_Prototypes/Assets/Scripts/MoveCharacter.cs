using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CharacterController))]

public class MoveCharacter : MonoBehaviour {

	CharacterController cc;
	Vector3 tempMove;
    public float speed = 5;
    public float gravity = 1;
    public float jumpHeight = 0.2f;
	int CurrentJump = 0;
	public int jumpamt = 2;

    void Start () {
		cc = GetComponent<CharacterController>();
		PlayButton.Play += OnPlay;
	}

	void OnPlay () {
		MoveInput.JumpAction = DoubleJump;
		MoveInput.KeyAction += Move;
		PlayButton.Play -= OnPlay;
	}
		
	private void DoubleJump ()
	{

		if (cc.isGrounded) 
		{
			CurrentJump = 0;
		}
		if (CurrentJump < jumpamt)
		{
			tempMove.y = jumpHeight;
			CurrentJump++;
		}
	}

	void Move (float _movement) {
		tempMove.y -= gravity*Time.deltaTime;
		tempMove.x = _movement*speed*Time.deltaTime;
		cc.Move(tempMove);
	}
}

