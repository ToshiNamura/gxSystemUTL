#pragma once

#ifndef INC_GX_ASCII_PIXSEL
#define INC_GX_ASCII_PIXSEL

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>
#include <gxIPosition.h>

namespace gx {

	class GX_SYSTEM_UTL_API AsciiPixsel : public IPosition {
	public:
		AsciiPixsel();
		AsciiPixsel(Coord position);
		AsciiPixsel(Coord position, Byte byte);
		AsciiPixsel(const AsciiPixsel& copy);
		AsciiPixsel(const char& copy);
		bool operator==(const AsciiPixsel& Right);
		bool operator!=(const AsciiPixsel& Right);
		AsciiPixsel& operator=(const AsciiPixsel& object);
		AsciiPixsel& operator=(const Byte& byte);
		operator Byte() const;
	protected:
		Byte _Data;
	};

}

#endif // !INC_GX_ASCII_PIXSEL
