// gxStraightLine.cpp
#include "pch.h"

namespace gx {

	inline void gx::StraightLine::CorrectType() {
		if (_Direction) {
			if (_DoubleLine) {
				_Type = ASCII_TEXTURE::Texsture_HorizontalLine_Double;
			}
			else {
				_Type = ASCII_TEXTURE::Texsture_HorizontalLine;
			}
		}
		else {
			if (_DoubleLine) {
				_Type = ASCII_TEXTURE::Texsture_VerticalLine_Double;
			}
			else {
				_Type = ASCII_TEXTURE::Texsture_VerticalLine;
			}
		}
		for (size_t i = 0; i < _Length; i++) {
			_Data[i] = _Type;
		}
	}

	StraightLine::StraightLine() {
		_Position.X = _Position.Y = _Length = 0;
		_Direction = true;
		_DoubleLine = false;
		_InzData = false;
		_Type = ' ';
		_Data = nullptr;
	}

	StraightLine::StraightLine(int length, Boolean direction, Boolean doubleLine) {
		_Position.X = _Position.Y = 0;
		_InzData = false;
		InzData(length, direction, doubleLine);
	}

	StraightLine::StraightLine(Coord position, int length, Boolean direction, Boolean doubleLine) {
		_Position.X = position.X;
		_Position.Y = position.Y;
		_InzData = false;
		InzData(length, direction, doubleLine);
	}

	void gx::StraightLine::InzData(int length, Boolean direction, Boolean doubleLine) {
		ClsData();
		if (!(length <= 0)) {
			_Length = length;
			_Direction = direction;
			_DoubleLine = doubleLine;
			_Data = new Byte[length + 1];
			CorrectType();
			_Data[length] = '\0';
			_InzData = true;
		}
	}

	void gx::StraightLine::ClsData() {
		if (_InzData) {
			delete[] _Data;
			_Data = nullptr;
			_InzData = false;
		}
	}

	Boolean StraightLine::IsInzData() const { return _InzData; }
	Boolean StraightLine::IsDoubleLine() const { return _DoubleLine; }

	void StraightLine::TurnOnDoubleLine() {
		if (_InzData) {
			if (!_DoubleLine) {
				_DoubleLine = true;
				CorrectType();
			}
		}
	}

	void StraightLine::TurnOffDoubleLine() {
		if (_InzData) {
			if (_DoubleLine) {
				_DoubleLine = false;
				CorrectType();
			}
		}
	}

	Byte StraightLine::operator[](int index) const { return _Data[index]; }
	Byte& StraightLine::operator[](int index) { return _Data[index]; }

	Boolean StraightLine::GetDirection() const { return _Direction; }
	size_t StraightLine::GetLength() const { return _Length; }
	Byte StraightLine::GetType() const { return _Type; }

	void StraightLine::SetLength(size_t length) {
		InzData(length, _Direction, _DoubleLine);
	}

	void StraightLine::SetDirection(Boolean direction) {
		if (_InzData) {
			if (_Direction != direction) {
				_Direction = direction;
				CorrectType();
			}
		}
	}

	void StraightLine::SetType(Byte type) {
		_Type = type;
		for (size_t i = 0; i < _Length; i++) {
			_Data[i] = _Type;
		}
	}

	StraightLine::~StraightLine() {
		if (_InzData) {
			delete[] _Data;
			_Data = nullptr;
		}
	}

}