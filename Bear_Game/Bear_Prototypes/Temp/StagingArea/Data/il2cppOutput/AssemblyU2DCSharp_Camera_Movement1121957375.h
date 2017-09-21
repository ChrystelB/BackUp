#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Camera_Movement
struct  Camera_Movement_t1121957375  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera Camera_Movement::camera
	Camera_t189460977 * ___camera_2;
	// UnityEngine.Transform Camera_Movement::target1
	Transform_t3275118058 * ___target1_3;
	// UnityEngine.Transform Camera_Movement::target2
	Transform_t3275118058 * ___target2_4;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(Camera_Movement_t1121957375, ___camera_2)); }
	inline Camera_t189460977 * get_camera_2() const { return ___camera_2; }
	inline Camera_t189460977 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_t189460977 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera_2, value);
	}

	inline static int32_t get_offset_of_target1_3() { return static_cast<int32_t>(offsetof(Camera_Movement_t1121957375, ___target1_3)); }
	inline Transform_t3275118058 * get_target1_3() const { return ___target1_3; }
	inline Transform_t3275118058 ** get_address_of_target1_3() { return &___target1_3; }
	inline void set_target1_3(Transform_t3275118058 * value)
	{
		___target1_3 = value;
		Il2CppCodeGenWriteBarrier(&___target1_3, value);
	}

	inline static int32_t get_offset_of_target2_4() { return static_cast<int32_t>(offsetof(Camera_Movement_t1121957375, ___target2_4)); }
	inline Transform_t3275118058 * get_target2_4() const { return ___target2_4; }
	inline Transform_t3275118058 ** get_address_of_target2_4() { return &___target2_4; }
	inline void set_target2_4(Transform_t3275118058 * value)
	{
		___target2_4 = value;
		Il2CppCodeGenWriteBarrier(&___target2_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
