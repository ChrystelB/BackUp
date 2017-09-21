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

// Transport
struct  Transport_t695834281  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Transport::player
	Transform_t3275118058 * ___player_2;
	// UnityEngine.Transform Transport::SpawnPoint
	Transform_t3275118058 * ___SpawnPoint_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Transport_t695834281, ___player_2)); }
	inline Transform_t3275118058 * get_player_2() const { return ___player_2; }
	inline Transform_t3275118058 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3275118058 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_SpawnPoint_3() { return static_cast<int32_t>(offsetof(Transport_t695834281, ___SpawnPoint_3)); }
	inline Transform_t3275118058 * get_SpawnPoint_3() const { return ___SpawnPoint_3; }
	inline Transform_t3275118058 ** get_address_of_SpawnPoint_3() { return &___SpawnPoint_3; }
	inline void set_SpawnPoint_3(Transform_t3275118058 * value)
	{
		___SpawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___SpawnPoint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
