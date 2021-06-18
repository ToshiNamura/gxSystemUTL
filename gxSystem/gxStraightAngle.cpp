// gxStraightAngle.cpp
#include "pch.h"

namespace gx {

	inline void StraightAngle::CorrectType() {
		if (_Direction == 1) {
			if (_DoubleLine) {
				_Type = ASCII_TEXTURE::Texsture_UL_Corner_Double;
			}
			else {
				_Type = ASCII_TEXTURE::Texsture_UL_Corner;
			}
		}
		else if (_Direction == 2) {
			if (_DoubleLine) {
				_Type = ASCII_TEXTURE::Texsture_UR_Corner_Double;
			}
			else {
				_Type = ASCII_TEXTURE::Texsture_UR_Corner;
			}
		}
		else if (_Direction == 3) {
			if (_DoubleLine) {
				_Type = ASCII_TEXTURE::Texsture_LR_Corner_Double;
			}
			else {
				_Type = ASCII_TEXTURE::Texsture_LR_Corner;
			}
		}
		else if (_Direction == 4) {
			if (_DoubleLine) {
				_Type = ASCII_TEXTURE::Texsture_LL_Corner_Double;
			}
			else {
				_Type = ASCII_TEXTURE::Texsture_LL_Corner;
			}
		}
	}

	StraightAngle::StraightAngle() {
		_Position.X = _Position.Y = 0;
		_DoubleLine = false;
		_Direction = 1;
		CorrectType();
	}

	StraightAngle::StraightAngle(Coord position, Boolean doubleLine, int direction) {
		_Position.X = position.X;
		_Position.Y = position.Y;
		_DoubleLine = doubleLine;
		SetDirection(direction);
		CorrectType();
	}

	int StraightAngle::GetDirection() const { return _Direction; }
	Byte StraightAngle::GetType() const { return _Type; }
	void StraightAngle::SetType(Byte type) { _Type = type; }

	void StraightAngle::SetDirection(int direction) {
		if (direction >= 1 && direction <= 4) {
			_Direction = direction;
		}
		else {
			_Direction = 1;
		}
		CorrectType();
	}

	void StraightAngle::TurnOnDoubleLine() {
		if (!_DoubleLine) {
			_DoubleLine = true;
			CorrectType();
		}
	}

	void StraightAngle::TurnOffDoubleLine() {
		if (_DoubleLine) {
			_DoubleLine = false;
			CorrectType();
		}
	}

	StraightAngle::~StraightAngle() {

	}

}
