#include "pch.h"

namespace gx {

	AsciiPixsel::AsciiPixsel() {
		SetPosition(NewCoord(0, 0));
		_Data = ASCII_TEXTURE::TexstureNULL;
	}

	AsciiPixsel::AsciiPixsel(Coord position) {
		SetPosition(position);
		_Data = ASCII_TEXTURE::TexstureNULL;
	}

	AsciiPixsel::AsciiPixsel(Coord position, Byte byte) {
		SetPosition(position);
		_Data = byte;
	}

	AsciiPixsel::AsciiPixsel(const AsciiPixsel& copy) {
		SetPosition(copy._Position);
		this->_Data = copy._Data;
	}

	AsciiPixsel::AsciiPixsel(const char& copy) {
		SetPosition(NewCoord(0, 0));
		_Data = copy;
	}

	bool AsciiPixsel::operator==(const AsciiPixsel& Right) {
		if (this->_Position.X == Right._Position.X &&
			this->_Position.Y == Right._Position.Y &&
			this->_Data == Right._Data) {
			return true;
		}
		return false;
	}

	bool AsciiPixsel::operator!=(const AsciiPixsel& Right) {
		if (this->_Position.X == Right._Position.X &&
			this->_Position.Y == Right._Position.Y &&
			this->_Data == Right._Data) {
			return false;
		}
		return true;
	}

	AsciiPixsel& AsciiPixsel::operator=(const AsciiPixsel& object) {
		this->_Position.X = object._Position.X;
		this->_Position.Y = object._Position.Y;
		this->_Data = object._Data;
		return *this;
	}

	AsciiPixsel& AsciiPixsel::operator=(const Byte& byte) {
		this->_Data = byte;
		return *this;
	}

	AsciiPixsel::operator Byte() const {
		return this->_Data;
	}

}