#include "pch.h"

namespace gx {

	RectangularBox::RectangularBox() {
		_Position.X = _Position.Y = 0;
		_Size.width = _Size.height = 2;
		_DoubleLine = false;
		_Up_Left_Angle.SetDirection(1);
		_Up_Right_Angle.SetDirection(2);
		_Down_Right_Angle.SetDirection(3);
		_Down_Left_Angle.SetDirection(4);
		CorrectSize();
		_Vertical_Left.SetDirection(false);
		_Vertical_Right.SetDirection(false);
	}

	void RectangularBox::SetPosition(Coord coord) {
		_Position.X = coord.X;
		_Position.Y = coord.Y;
		CorrectPosition();
	}

	void RectangularBox::SetSize(Size size) {
		if (size.width >= 2 && _Size.width != size.width) {
			_Size.width = size.width;
			CorrectSize();
		}
		if (size.height >= 2 && _Size.height != size.height) {
			_Size.height = size.height;
			CorrectSize();
		}
	}

	void RectangularBox::TurnOnDoubleLine() {
		if (!_DoubleLine) {
			_DoubleLine = true;
			_Up_Left_Angle.TurnOnDoubleLine();
			_Up_Right_Angle.TurnOnDoubleLine();
			_Down_Right_Angle.TurnOnDoubleLine();
			_Down_Left_Angle.TurnOnDoubleLine();
			_Vertical_Left.TurnOnDoubleLine();
			_Vertical_Right.TurnOnDoubleLine();
			_Horizontal_Up.TurnOnDoubleLine();
			_Horizontal_Down.TurnOnDoubleLine();
		}
	}

	void RectangularBox::TurnOffDoubleLine() {
		if (_DoubleLine) {
			_DoubleLine = false;
			_Up_Left_Angle.TurnOffDoubleLine();
			_Up_Right_Angle.TurnOffDoubleLine();
			_Down_Right_Angle.TurnOffDoubleLine();
			_Down_Left_Angle.TurnOffDoubleLine();
			_Vertical_Left.TurnOffDoubleLine();
			_Vertical_Right.TurnOffDoubleLine();
			_Horizontal_Up.TurnOffDoubleLine();
			_Horizontal_Down.TurnOffDoubleLine();
		}
	}

	inline void RectangularBox::CorrectPosition() {
		_Up_Left_Angle.SetPosition(NewCoord(_Position.X, _Position.Y));
		_Up_Right_Angle.SetPosition(NewCoord(_Position.X + _Size.width + 1, _Position.Y));
		_Down_Right_Angle.SetPosition(NewCoord(_Position.X + _Size.width + 1, _Position.Y + _Size.height + 1));
		_Down_Left_Angle.SetPosition(NewCoord(_Position.X, _Position.Y + _Size.height + 1));
		_Vertical_Left.SetPosition(NewCoord(_Position.X, _Position.Y + 1));
		_Vertical_Right.SetPosition(NewCoord(_Position.X + _Size.width + 1, _Position.Y + 1));
		_Horizontal_Up.SetPosition(NewCoord(_Position.X + 1, _Position.Y));
		_Horizontal_Down.SetPosition(NewCoord(_Position.X + 1, _Position.Y + _Size.height + 1));
	}

	inline void RectangularBox::CorrectSize() {
		_Vertical_Left.SetLength(_Size.height);
		_Vertical_Right.SetLength(_Size.height);
		_Horizontal_Up.SetLength(_Size.width);
		_Horizontal_Down.SetLength(_Size.width);
		CorrectPosition();
	}

}