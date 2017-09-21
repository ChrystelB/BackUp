#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action`1<System.Single>
struct Action_1_t1878309314;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveInput
struct  MoveInput_t3121788385  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MoveInput::runTime
	float ___runTime_2;
	// System.Boolean MoveInput::canPlay
	bool ___canPlay_3;

public:
	inline static int32_t get_offset_of_runTime_2() { return static_cast<int32_t>(offsetof(MoveInput_t3121788385, ___runTime_2)); }
	inline float get_runTime_2() const { return ___runTime_2; }
	inline float* get_address_of_runTime_2() { return &___runTime_2; }
	inline void set_runTime_2(float value)
	{
		___runTime_2 = value;
	}

	inline static int32_t get_offset_of_canPlay_3() { return static_cast<int32_t>(offsetof(MoveInput_t3121788385, ___canPlay_3)); }
	inline bool get_canPlay_3() const { return ___canPlay_3; }
	inline bool* get_address_of_canPlay_3() { return &___canPlay_3; }
	inline void set_canPlay_3(bool value)
	{
		___canPlay_3 = value;
	}
};

struct MoveInput_t3121788385_StaticFields
{
public:
	// System.Action`1<System.Single> MoveInput::KeyAction
	Action_1_t1878309314 * ___KeyAction_4;
	// System.Action MoveInput::JumpAction
	Action_t3226471752 * ___JumpAction_5;

public:
	inline static int32_t get_offset_of_KeyAction_4() { return static_cast<int32_t>(offsetof(MoveInput_t3121788385_StaticFields, ___KeyAction_4)); }
	inline Action_1_t1878309314 * get_KeyAction_4() const { return ___KeyAction_4; }
	inline Action_1_t1878309314 ** get_address_of_KeyAction_4() { return &___KeyAction_4; }
	inline void set_KeyAction_4(Action_1_t1878309314 * value)
	{
		___KeyAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___KeyAction_4, value);
	}

	inline static int32_t get_offset_of_JumpAction_5() { return static_cast<int32_t>(offsetof(MoveInput_t3121788385_StaticFields, ___JumpAction_5)); }
	inline Action_t3226471752 * get_JumpAction_5() const { return ___JumpAction_5; }
	inline Action_t3226471752 ** get_address_of_JumpAction_5() { return &___JumpAction_5; }
	inline void set_JumpAction_5(Action_t3226471752 * value)
	{
		___JumpAction_5 = value;
		Il2CppCodeGenWriteBarrier(&___JumpAction_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
