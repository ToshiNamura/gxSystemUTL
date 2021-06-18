// gxIPosition.h
#pragma once

#ifndef INC_GX_IPOSITION
#define INC_GX_IPOSITION

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>

namespace gx {

	class GX_SYSTEM_UTL_API IPosition {
	public:
		Coord GetPosition() const;
		void SetPosition(Coord coord);
	protected:
		Coord _Position;
	};

}

#endif // !INC_GX_IPOSITION