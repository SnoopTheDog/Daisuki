#pragma once

#ifdef DS_PLATFORM_WINDOWS
	#ifdef DS_BUILD_DLL
		#define DAISUKI_API __declspec(dllexport)
	#else
		#define DAISUKI_API __declspec(dllimport)
	#endif
#else
	#error Daisuki only likes Windows
#endif