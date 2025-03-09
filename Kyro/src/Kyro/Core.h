#pragma once

#ifdef KO_PLATFORM_WINDOWS
	#ifdef KO_BUILD_ENGINE
		#define KYRO_API __declspec(dllexport)
	#else
		#define KYRO_API __declspec(dllimport)
	#endif
#elif defined(KO_PLATFORM_LINUX)
	#ifdef KO_BUILD_ENGINE
		#define KYRO_API __attribute__((visibility("default")))
	#else
		#define KYRO_API
	#endif
#else
	#error Kyro only supports Windows and Linux!
#endif
