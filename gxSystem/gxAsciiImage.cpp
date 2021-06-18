#include "pch.h"

namespace gx {

	AsciiImage::AsciiImage() {
		_Position.X = 0;
		_Position.Y = 0;
		_Size.width = 1;
		_Size.height = 1;
		_InzData = false;
		InzData();
	}

	AsciiImage::AsciiImage(Size size, Coord coord) {
		_Position.X = coord.X;
		_Position.Y = coord.Y;
		if (size.width >= 1) {
			_Size.width = size.width;
		}
		else {
			_Size.width = 1;
		}
		if (size.height >= 1) {
			_Size.height = size.height;
		}
		else {
			_Size.height = 1;
		}
		_InzData = false;
		InzData();
	}

	AsciiImage::AsciiImage(const AsciiImage& copy) {
		_InzData = true;
		_Position.X = copy._Position.X;
		_Position.Y = copy._Position.Y;
		_Size.width = copy._Size.width;
		_Size.height = copy._Size.height;
		// inz data
		InzData();
		// Set Texture
		for (size_t i = 0; i < _Size.height; i++) {
			for (size_t j = 0; j < _Size.width; j++) {
				(*_Data[i][j]) = (*copy._Data[i][j]);
			}
		}
	}

	Boolean AsciiImage::IsInzData() const { return _InzData; }

	void AsciiImage::SetPosition(Coord coord) {
		_Position.X = coord.X;
		_Position.Y = coord.Y;
		for (size_t i = 0; i < _Size.height; i++) {
			for (size_t j = 0; j < _Size.width; j++) {
				(*_Data[i][j]).SetPosition(NewCoord(_Position.X + j, _Position.Y + i));
			}
		}
	}

	void AsciiImage::SetSize(Size size) {
		if (size.width >= 1 && size.height >= 1) {
			// Inz Temp Data
			AsciiPixsel*** TempData;
			TempData = new AsciiPixsel * *[size.height];
			for (size_t i = 0; i < size.height; i++) {
				TempData[i] = new AsciiPixsel * [size.width];
				for (size_t j = 0; j < size.width; j++) {
					if (i < _Size.height && j < _Size.width) {
						TempData[i][j] = new AsciiPixsel(NewCoord(_Position.X + j, _Position.Y + i), ' ');
						(*TempData[i][j]) = (*_Data[i][j]);
					}
					else {
						TempData[i][j] = new AsciiPixsel(NewCoord(_Position.X + j, _Position.Y + i), ' ');
					}
				}
			}
			// New Data
			DelData();
			_Size.height = size.height;
			_Size.width = size.width;
			InzData();
			// Copy Data
			for (size_t i = 0; i < _Size.height; i++) {
				for (size_t j = 0; j < _Size.width; j++) {
					(*_Data[i][j]) = (*TempData[i][j]);
				}
			}
			// Del Temp Data
			for (size_t i = 0; i < _Size.height; i++) {
				for (size_t j = 0; j < _Size.width; j++) {
					delete[] TempData[i][j];
					TempData[i][j] = nullptr;
				}
				delete[] TempData[i];
				TempData[i] = nullptr;
			}
			delete[] TempData;
			TempData = nullptr;
		}
	}

	AsciiPixsel AsciiImage::GetElement(Coord coord) const {
		if ((coord.X >= 0 && size_t(coord.X) < _Size.width) && (coord.Y >= 0 && size_t(coord.Y) < _Size.height)) {
			return (*_Data[coord.Y][coord.X]);
		}
		return AsciiPixsel(NewCoord(0, 0), Byte(0));
	}

	Byte AsciiImage::GetTextureElement(Coord coord) const {
		if ((coord.X >= 0 && size_t(coord.X) < _Size.width) && (coord.Y >= 0 && size_t(coord.Y) < _Size.height)) {
			return Byte((*_Data[coord.Y][coord.X]));
		}
		return Byte(0);
	}

	void AsciiImage::SetTextureElement(Coord coord, AsciiPixsel Object) {
		if ((coord.X >= 0 && size_t(coord.X) < _Size.width) && (coord.Y >= 0 && size_t(coord.Y) < _Size.height)) {
			(*_Data[coord.Y][coord.X]) = Object;
		}
	}

	void AsciiImage::SetTextureElement(Coord coord, Byte byte) {
		if ((coord.X >= 0 && size_t(coord.X) < _Size.width) && (coord.Y >= 0 && size_t(coord.Y) < _Size.height)) {
			(*_Data[coord.Y][coord.X]) = byte;
		}
	}

	AsciiImage::~AsciiImage() {
		DelData();
	}

	void AsciiImage::InzData() {
		if (!_InzData) {
			_Data = new AsciiPixsel ** [_Size.height];
			for (size_t i = 0; i < _Size.height; i++) {
				_Data[i] = new AsciiPixsel * [_Size.width];
				for (size_t j = 0; j < _Size.width; j++) {
					_Data[i][j] = new AsciiPixsel(NewCoord(_Position.X + j, _Position.Y + i), ' ');
				}
			}
			_InzData = true;
		}
	}

	void AsciiImage::DelData() {
		if (_InzData) {
			for (size_t i = 0; i < _Size.height; i++) {
				for (size_t j = 0; j < _Size.width; j++) {
					delete[] _Data[i][j];
					_Data[i][j] = nullptr;
				}
				delete[] _Data[i];
				_Data[i] = nullptr;
			}
			delete[] _Data;
			_Data = nullptr;
			_InzData = false;
		}
	}

}