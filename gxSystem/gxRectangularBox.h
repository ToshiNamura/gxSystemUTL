#pragma once

#ifndef INC_GX_RECTANGULAR_BOX
#define INC_GX_RECTANGULAR_BOX

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>
#include <gxIPosition.h>
#include <gxISize.h>

namespace gx {

	class GX_SYSTEM_UTL_API RectangularBox : public IPosition, public ISize {
	public:
		RectangularBox();
		void SetPosition(Coord coord);
		void SetSize(Size size);
		void TurnOnDoubleLine();
		void TurnOffDoubleLine();
		friend class Interface;
	private:
		inline void CorrectPosition();
		inline void CorrectSize();
	protected:
		Boolean _DoubleLine;
		StraightAngle _Up_Left_Angle;
		StraightAngle _Up_Right_Angle;
		StraightAngle _Down_Right_Angle;
		StraightAngle _Down_Left_Angle;
		StraightLine _Vertical_Left;
		StraightLine _Vertical_Right;
		StraightLine _Horizontal_Up;
		StraightLine _Horizontal_Down;
	};

}

#endif // !INC_GX_RECTANGULAR_BOX
