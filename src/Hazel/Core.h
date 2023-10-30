#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL //build this dll. Defined for hazel but not sandbox
		#define HAZEL_API __declspec(dllexport) //export should be active when we build hazel library
	#else
		#define HAZEL_API __declspec(dllimport) //import should be active when we build hazel library

	#endif
#else
	#error Hazel only support windows!
#endif
//define a macro that 

