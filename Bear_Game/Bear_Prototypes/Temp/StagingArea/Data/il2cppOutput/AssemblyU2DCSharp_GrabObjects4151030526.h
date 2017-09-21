#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrabObjects
struct  GrabObjects_t4151030526  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GrabObjects::Trigger
	GameObject_t1756533147 * ___Trigger_2;
	// UnityEngine.GameObject GrabObjects::TriggerCarry
	GameObject_t1756533147 * ___TriggerCarry_3;

public:
	inline static int32_t get_offset_of_Trigger_2() { return static_cast<int32_t>(offsetof(GrabObjects_t4151030526, ___Trigger_2)); }
	inline GameObject_t1756533147 * get_Trigger_2() const { return ___Trigger_2; }
	inline GameObject_t1756533147 ** get_address_of_Trigger_2() { return &___Trigger_2; }
	inline void set_Trigger_2(GameObject_t1756533147 * value)
	{
		___Trigger_2 = value;
		Il2CppCodeGenWriteBarrier(&___Trigger_2, value);
	}

	inline static int32_t get_offset_of_TriggerCarry_3() { return static_cast<int32_t>(offsetof(GrabObjects_t4151030526, ___TriggerCarry_3)); }
	inline GameObject_t1756533147 * get_TriggerCarry_3() const { return ___TriggerCarry_3; }
	inline GameObject_t1756533147 ** get_address_of_TriggerCarry_3() { return &___TriggerCarry_3; }
	inline void set_TriggerCarry_3(GameObject_t1756533147 * value)
	{
		___TriggerCarry_3 = value;
		Il2CppCodeGenWriteBarrier(&___TriggerCarry_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
