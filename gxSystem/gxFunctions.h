#pragma once

#ifndef INC_GX_FUNCTIONS
#define INC_GX_FUNCTIONS

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>

namespace gx {
	GX_SYSTEM_UTL_API Boolean ArgumentReturning(Boolean _arg);
	GX_SYSTEM_UTL_API Byte ArgumentReturning(Byte _arg);
	GX_SYSTEM_UTL_API short ArgumentReturning(short _arg);
	GX_SYSTEM_UTL_API int ArgumentReturning(int _arg);
	GX_SYSTEM_UTL_API float ArgumentReturning(float _arg);
	GX_SYSTEM_UTL_API double ArgumentReturning(double _arg);
	GX_SYSTEM_UTL_API long ArgumentReturning(long _arg);
	GX_SYSTEM_UTL_API long long ArgumentReturning(long long _arg);
}

#endif // !INC_GX_FUNCTIONS