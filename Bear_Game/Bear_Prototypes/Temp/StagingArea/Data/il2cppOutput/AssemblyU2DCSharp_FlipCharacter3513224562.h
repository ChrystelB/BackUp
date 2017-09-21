#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlipCharacter
struct  FlipCharacter_t3513224562  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Quaternion FlipCharacter::myRotate
	Quaternion_t4030073918  ___myRotate_2;
	// UnityEngine.Vector3 FlipCharacter::rotValue
	Vector3_t2243707580  ___rotValue_3;

public:
	inline static int32_t get_offset_of_myRotate_2() { return static_cast<int32_t>(offsetof(FlipCharacter_t3513224562, ___myRotate_2)); }
	inline Quaternion_t4030073918  get_myRotate_2() const { return ___myRotate_2; }
	inline Quaternion_t4030073918 * get_address_of_myRotate_2() { return &___myRotate_2; }
	inline void set_myRotate_2(Quaternion_t4030073918  value)
	{
		___myRotate_2 = value;
	}

	inline static int32_t get_offset_of_rotValue_3() { return static_cast<int32_t>(offsetof(FlipCharacter_t3513224562, ___rotValue_3)); }
	inline Vector3_t2243707580  get_rotValue_3() const { return ___rotValue_3; }
	inline Vector3_t2243707580 * get_address_of_rotValue_3() { return &___rotValue_3; }
	inline void set_rotValue_3(Vector3_t2243707580  value)
	{
		___rotValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
