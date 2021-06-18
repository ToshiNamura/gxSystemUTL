// gxIPosition.cpp
#include "pch.h"

namespace gx {

	Coord IPosition::GetPosition() const { return _Position; }
	void IPosition::SetPosition(Coord coord) {
		_Position.X = coord.X;
		_Position.Y = coord.Y;
	}
}