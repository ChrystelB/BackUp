#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.CharacterController
struct CharacterController_t4094781467;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveCharacter
struct  MoveCharacter_t3861584580  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.CharacterController MoveCharacter::cc
	CharacterController_t4094781467 * ___cc_2;
	// UnityEngine.Vector3 MoveCharacter::tempMove
	Vector3_t2243707580  ___tempMove_3;
	// System.Single MoveCharacter::speed
	float ___speed_4;
	// System.Single MoveCharacter::gravity
	float ___gravity_5;
	// System.Single MoveCharacter::jumpHeight
	float ___jumpHeight_6;
	// System.Int32 MoveCharacter::CurrentJump
	int32_t ___CurrentJump_7;
	// System.Int32 MoveCharacter::jumpamt
	int32_t ___jumpamt_8;

public:
	inline static int32_t get_offset_of_cc_2() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___cc_2)); }
	inline CharacterController_t4094781467 * get_cc_2() const { return ___cc_2; }
	inline CharacterController_t4094781467 ** get_address_of_cc_2() { return &___cc_2; }
	inline void set_cc_2(CharacterController_t4094781467 * value)
	{
		___cc_2 = value;
		Il2CppCodeGenWriteBarrier(&___cc_2, value);
	}

	inline static int32_t get_offset_of_tempMove_3() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___tempMove_3)); }
	inline Vector3_t2243707580  get_tempMove_3() const { return ___tempMove_3; }
	inline Vector3_t2243707580 * get_address_of_tempMove_3() { return &___tempMove_3; }
	inline void set_tempMove_3(Vector3_t2243707580  value)
	{
		___tempMove_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_gravity_5() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___gravity_5)); }
	inline float get_gravity_5() const { return ___gravity_5; }
	inline float* get_address_of_gravity_5() { return &___gravity_5; }
	inline void set_gravity_5(float value)
	{
		___gravity_5 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_6() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___jumpHeight_6)); }
	inline float get_jumpHeight_6() const { return ___jumpHeight_6; }
	inline float* get_address_of_jumpHeight_6() { return &___jumpHeight_6; }
	inline void set_jumpHeight_6(float value)
	{
		___jumpHeight_6 = value;
	}

	inline static int32_t get_offset_of_CurrentJump_7() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___CurrentJump_7)); }
	inline int32_t get_CurrentJump_7() const { return ___CurrentJump_7; }
	inline int32_t* get_address_of_CurrentJump_7() { return &___CurrentJump_7; }
	inline void set_CurrentJump_7(int32_t value)
	{
		___CurrentJump_7 = value;
	}

	inline static int32_t get_offset_of_jumpamt_8() { return static_cast<int32_t>(offsetof(MoveCharacter_t3861584580, ___jumpamt_8)); }
	inline int32_t get_jumpamt_8() const { return ___jumpamt_8; }
	inline int32_t* get_address_of_jumpamt_8() { return &___jumpamt_8; }
	inline void set_jumpamt_8(int32_t value)
	{
		___jumpamt_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
