// gxStraightAngle.h
#pragma once

#ifndef INC_GX_STRAINGHT_ANGLE
#define INC_GX_STRAINGHT_ANGLE

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

	class GX_SYSTEM_UTL_API StraightAngle : public IPosition {
	public:
		StraightAngle();
		/// <param name="direction">
		/// | 1 - Left Upped corner.
		/// | 2 - Right Upped corner.
		/// | 3 - Right Lower corner.
		/// | 4 - Left Lower corner.
		/// </param>
		StraightAngle(Coord position, Boolean doubleLine = false, int direction = 1);
		/// <returns>
		/// | 1 - Left Upped corner.
		/// | 2 - Right Upped corner.
		/// | 3 - Right Lower corner.
		/// | 4 - Left Lower corner.
		/// </returns>
		int GetDirection() const;
		/// <param name="direction">
		/// | 1 - Left Upped corner.
		/// | 2 - Right Upped corner.
		/// | 3 - Right Lower corner.
		/// | 4 - Left Lower corner.
		/// </param>
		void SetDirection(int direction);
		void TurnOnDoubleLine();
		void TurnOffDoubleLine();
		Byte GetType() const;
		void SetType(Byte type);
		~StraightAngle();
	private:
		inline void CorrectType();
	protected:
		Boolean _DoubleLine;
		int _Direction;
		Byte _Type;
	};

}

#endif // !INC_GX_STRAINGHT_ANGLE
