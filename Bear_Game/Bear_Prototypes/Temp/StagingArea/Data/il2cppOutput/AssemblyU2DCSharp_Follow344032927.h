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

// Follow
struct  Follow_t344032927  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Follow::Player
	Transform_t3275118058 * ___Player_2;
	// System.Int32 Follow::MoveSpeed
	int32_t ___MoveSpeed_3;
	// System.Int32 Follow::MaxDist
	int32_t ___MaxDist_4;
	// System.Int32 Follow::MinDist
	int32_t ___MinDist_5;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___Player_2)); }
	inline Transform_t3275118058 * get_Player_2() const { return ___Player_2; }
	inline Transform_t3275118058 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(Transform_t3275118058 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_MoveSpeed_3() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___MoveSpeed_3)); }
	inline int32_t get_MoveSpeed_3() const { return ___MoveSpeed_3; }
	inline int32_t* get_address_of_MoveSpeed_3() { return &___MoveSpeed_3; }
	inline void set_MoveSpeed_3(int32_t value)
	{
		___MoveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_MaxDist_4() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___MaxDist_4)); }
	inline int32_t get_MaxDist_4() const { return ___MaxDist_4; }
	inline int32_t* get_address_of_MaxDist_4() { return &___MaxDist_4; }
	inline void set_MaxDist_4(int32_t value)
	{
		___MaxDist_4 = value;
	}

	inline static int32_t get_offset_of_MinDist_5() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___MinDist_5)); }
	inline int32_t get_MinDist_5() const { return ___MinDist_5; }
	inline int32_t* get_address_of_MinDist_5() { return &___MinDist_5; }
	inline void set_MinDist_5(int32_t value)
	{
		___MinDist_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
