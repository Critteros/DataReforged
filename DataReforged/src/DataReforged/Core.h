#pragma once

#ifdef DR_PLATFORM_WINDOWS
#	ifdef DR_BUILD_DLL
#		define DR_API __declspec(dllexport)
#		define DR_EXTERN
#	else 
#		define DR_API __declspec(dllimport)
#		define DR_EXTERN extern
#	endif
#else
#error DataReforged supports currently only Windows!
#endif
