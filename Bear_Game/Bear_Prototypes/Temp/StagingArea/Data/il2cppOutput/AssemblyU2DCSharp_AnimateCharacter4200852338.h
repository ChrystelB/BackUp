#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimateCharacter
struct  AnimateCharacter_t4200852338  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator AnimateCharacter::anims
	Animator_t69676727 * ___anims_2;

public:
	inline static int32_t get_offset_of_anims_2() { return static_cast<int32_t>(offsetof(AnimateCharacter_t4200852338, ___anims_2)); }
	inline Animator_t69676727 * get_anims_2() const { return ___anims_2; }
	inline Animator_t69676727 ** get_address_of_anims_2() { return &___anims_2; }
	inline void set_anims_2(Animator_t69676727 * value)
	{
		___anims_2 = value;
		Il2CppCodeGenWriteBarrier(&___anims_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
