#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Object_Fall
struct  Object_Fall_t3569147143  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody Object_Fall::wall
	Rigidbody_t4233889191 * ___wall_2;

public:
	inline static int32_t get_offset_of_wall_2() { return static_cast<int32_t>(offsetof(Object_Fall_t3569147143, ___wall_2)); }
	inline Rigidbody_t4233889191 * get_wall_2() const { return ___wall_2; }
	inline Rigidbody_t4233889191 ** get_address_of_wall_2() { return &___wall_2; }
	inline void set_wall_2(Rigidbody_t4233889191 * value)
	{
		___wall_2 = value;
		Il2CppCodeGenWriteBarrier(&___wall_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
