#pragma once

// checks if windows platform
// also if in engine dll export else import to sandbox
#ifdef ENG_PLATFORM_WINDOWS
	#ifdef ENG_BUILD_DLL
		#define ENG_API __declspec(dllexport)
	#else
		#define ENG_API __declspec(dllimport)
	#endif
#else
	#error Loquat Only supports Windows!
#endif
