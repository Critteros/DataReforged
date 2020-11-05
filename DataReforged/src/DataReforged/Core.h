#pragma once

#ifdef DR_PLATFORM_WINDOWS
#	ifdef DR_BUILD_DLL
#		define DR_API __declspec(dllexport)
#	else 
#		define DR_API __declspec(dllimport)
#	endif
#else
#error DataReforged supports currently only Windows!
#endif
