// gxTimer.cpp
#include "pch.h"

namespace gx {

	Timer::Timer() {
		_TimeStartPoint = _TimeEndPoint = 0;
	}

	void Timer::clear() {
		_TimeStartPoint = _TimeEndPoint = 0;
	}

	void Timer::Start() {
		_TimeStartPoint = clock();
	}

	void Timer::End() {
		_TimeEndPoint = clock();
	}

	void Timer::ReStart() {
		_TimeStartPoint = clock();
		_TimeEndPoint = 0;
	}

	clock_t Timer::GetTimeStart() const {
		return _TimeStartPoint;
	}

	clock_t Timer::GetTimeEnd() const {
		return _TimeEndPoint;
	}

	clock_t Timer::ReturningElapsedTime() const{
		return clock() - _TimeStartPoint;
	}

	clock_t Timer::ConvertTimeInSec(int _Time) {
		return _Time / 1000;
	}

	clock_t Timer::ConvertTimeInMin(int _Time) {
		return (_Time / 1000) / 60;
	}

}