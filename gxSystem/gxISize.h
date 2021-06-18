#pragma once

#ifndef INC_GX_ISIZE
#define INC_GX_ISIZE

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>

namespace gx {

	class GX_SYSTEM_UTL_API ISize {
	public:
		Size GetSize() const;
		virtual void SetSize(Size size) = 0;
	protected:
		Size _Size;
	};

}

#endif // !INC_GX_ISIZE