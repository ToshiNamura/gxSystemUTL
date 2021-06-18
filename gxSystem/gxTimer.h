#pragma once

#ifndef INC_GX_TIMER
#define INC_GX_TIMER

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <ctime>

namespace gx {

	class GX_SYSTEM_UTL_API Timer {
	public:
		Timer();
		void clear();
		void Start();
		void End();
		void ReStart();
		clock_t GetTimeStart() const;
		clock_t GetTimeEnd() const;
		clock_t ReturningElapsedTime() const;
		static clock_t ConvertTimeInSec(int _Time);
		static clock_t ConvertTimeInMin(int _Time);
	protected:
		clock_t _TimeStartPoint;
		clock_t _TimeEndPoint;
	};

}

#endif // !INC_GX_TIMER
