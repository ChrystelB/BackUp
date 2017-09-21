#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EatenByBear
struct  EatenByBear_t2764363614  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform EatenByBear::box
	Transform_t3275118058 * ___box_2;
	// System.Boolean EatenByBear::tBox
	bool ___tBox_3;

public:
	inline static int32_t get_offset_of_box_2() { return static_cast<int32_t>(offsetof(EatenByBear_t2764363614, ___box_2)); }
	inline Transform_t3275118058 * get_box_2() const { return ___box_2; }
	inline Transform_t3275118058 ** get_address_of_box_2() { return &___box_2; }
	inline void set_box_2(Transform_t3275118058 * value)
	{
		___box_2 = value;
		Il2CppCodeGenWriteBarrier(&___box_2, value);
	}

	inline static int32_t get_offset_of_tBox_3() { return static_cast<int32_t>(offsetof(EatenByBear_t2764363614, ___tBox_3)); }
	inline bool get_tBox_3() const { return ___tBox_3; }
	inline bool* get_address_of_tBox_3() { return &___tBox_3; }
	inline void set_tBox_3(bool value)
	{
		___tBox_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
