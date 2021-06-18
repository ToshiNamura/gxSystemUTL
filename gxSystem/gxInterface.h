// gxInterface.h
#pragma once

#ifndef INC_GX_INTERFACE
#define INC_GX_INTERFACE

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxTimer.h>
#include <gxStruct.h>
#include <gxIPosition.h>
#include <gxKayBoard.h>
#include <gxStraightLine.h>
#include <gxStraightAngle.h>
#include <gxRectangularBox.h>
#include <gxAsciiPixsel.h>
#include <gxAsciiImage.h>
#include <string>

namespace gx {

	class GX_SYSTEM_UTL_API Interface : public IPosition {
	public:
		static const int MAX_FPS_LIMIT;
		static const int STANDART_FPS_LIMIT;
		static const int MIN_SIZE_FOUT;
		static const int MAX_SIZE_FOUT;
		static const int STANDART_SIZE_FOUT;
		/// <param name="FontSize">
		/// Size Font. [MAX 16][MIN 10]
		/// </param>
		Interface(int FontSize = 12);
		void Draw(const std::string& object, const Coord position);
		void Draw(StraightAngle& angle);
		void Draw(StraightLine& line);
		void Draw(RectangularBox& box);
		void Draw(AsciiPixsel& pixsel);
		void Draw(AsciiImage& image);
		void ClearBuffer();
		void Update();
		void UnplugFPSLimit();
		Byte GetElement(Coord coord) const;
		void SetElement(Coord coord, Byte data);
		Byte GetBackgroundSymbol() const;
		void SetBackgroundSymbol(Byte data);
		int GetFPSLimit() const;
		void SetFPSLimit(int Limit);
		int GetFPS();
		Size GetConsoleSize() const;
		KAYBOARD::KayBoard& GetKayBoard();
		Boolean IsFrameEvent() const;
		~Interface();
	private:
		inline void SetConfigConsole(int FontSize);
		inline void SetBufferData();
		inline void DrawString(const std::string& object, const Coord position);
		inline void DrawStraightAngle(StraightAngle& angle);
		inline void DrawStraightLine(StraightLine& line);
		inline void DrawAsciiPixsel(AsciiPixsel& pixsel);
	protected:
		KAYBOARD::KayBoard _KAYBOARD;
		Colors _txt;
		Colors _bg;
		COORD _CoordNull;
		Size _ConsoleSize;
		Byte _BackgroundSymbol;
		Byte** _Buffer;
		Boolean _FPSLimitIsActive;
		Boolean _FrameEvent;
		Timer _FrameTimer;
		int AcceptableTime;
		int DynamicTime;
		int _FPSLimit;
		int _FPS;
	};

}

#endif