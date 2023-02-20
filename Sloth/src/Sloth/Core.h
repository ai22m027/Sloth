#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define SLOTH_API __declspec(dllexport)
	#else
		#define SLOTH_API __declspec(dllimport)
	#endif
#else
	#error Sloth only supports Windows!
#endif