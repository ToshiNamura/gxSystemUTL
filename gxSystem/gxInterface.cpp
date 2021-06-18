// gxInterface.cpp
#include "pch.h"

namespace gx {

	const int Interface::MAX_FPS_LIMIT = 999;
	const int Interface::STANDART_FPS_LIMIT = 40;
	const int Interface::MIN_SIZE_FOUT = 10;
	const int Interface::MAX_SIZE_FOUT = 16;
	const int Interface::STANDART_SIZE_FOUT = 12;

	inline void Interface::SetConfigConsole(int FontSize) {
		static Boolean _BooleanConsoleConfigIsSet = false;
		if (!_BooleanConsoleConfigIsSet) {
			// Set Font Size
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			CONSOLE_FONT_INFOEX fontInfo;
			fontInfo.cbSize = sizeof(fontInfo);
			GetCurrentConsoleFontEx(hConsole, TRUE, &fontInfo);
			wcscpy_s(fontInfo.FaceName, L"Lucida Console");
			if (FontSize >= MIN_SIZE_FOUT && FontSize <= MAX_SIZE_FOUT) {
				fontInfo.dwFontSize.X = FontSize;
				fontInfo.dwFontSize.Y = FontSize;
			}
			else {
				fontInfo.dwFontSize.X = STANDART_SIZE_FOUT;
				fontInfo.dwFontSize.Y = STANDART_SIZE_FOUT;
			}
			SetCurrentConsoleFontEx(hConsole, TRUE, &fontInfo);
			// Prohibition of allocation
			HANDLE hConsole_1 = GetStdHandle(STD_INPUT_HANDLE);
			DWORD prevConsoleMode = 0;
			GetConsoleMode(hConsole_1, &prevConsoleMode);
			SetConsoleMode(hConsole_1, prevConsoleMode & ~ENABLE_QUICK_EDIT_MODE);
			// initialization COORD
			_CoordNull.X = _CoordNull.Y = 0;
			// Resizing the console to full screen
			COORD coord_2;
			SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, &coord_2);
			// Cls Cursor
			CONSOLE_CURSOR_INFO curs = { 0 };
			curs.dwSize = sizeof(curs);
			curs.bVisible = FALSE;
			SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curs);
			// Limit on changing the size of the console
			HWND h = GetConsoleWindow();
			LONG style = GetWindowLongPtr(h, GWL_STYLE);
			style = style & ~WS_THICKFRAME;
			style = style & ~WS_MAXIMIZEBOX;
			SetWindowLongPtr(h, GWL_STYLE, style);
			// Returning the console size
			CONSOLE_SCREEN_BUFFER_INFOEX info = { 0 };
			info.cbSize = sizeof(info);
			GetConsoleScreenBufferInfoEx(GetStdHandle(STD_OUTPUT_HANDLE), &info);
			_ConsoleSize.height = (int)(info.srWindow.Bottom - info.srWindow.Top);
			_ConsoleSize.width = (int)(info.srWindow.Right - info.srWindow.Left);
			// Cls Scroling
			HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
			COORD NewSBSize;
			int Status;
			NewSBSize.X = _ConsoleSize.width + 1;
			NewSBSize.Y = _ConsoleSize.height + 1;
			Status = SetConsoleScreenBufferSize(hOut, NewSBSize);
			if (Status == 0) {
				Status = GetLastError();
				printf("SetConsoleScreenBufferSize() failed! Reason : %d\n", Status);
				exit(Status);
			}
			// Detected Set Object
			_BooleanConsoleConfigIsSet = true;
		}
		else {
			// initialization COORD
			_CoordNull.X = _CoordNull.Y = 0;
			// Returning the console size
			CONSOLE_SCREEN_BUFFER_INFOEX info = { 0 };
			info.cbSize = sizeof(info);
			GetConsoleScreenBufferInfoEx(GetStdHandle(STD_OUTPUT_HANDLE), &info);
			_ConsoleSize.height = (int)(info.srWindow.Bottom - info.srWindow.Top);
			_ConsoleSize.width = (int)(info.srWindow.Right - info.srWindow.Left);
		}
	}

	inline void Interface::SetBufferData() {
		_Buffer = new Byte * [_ConsoleSize.height];
		for (size_t i = 0; i < _ConsoleSize.height; i++) {
			_Buffer[i] = new Byte[_ConsoleSize.width + 2];
			for (size_t j = 0; j < _ConsoleSize.width + 1; j++) {
				_Buffer[i][j] = _BackgroundSymbol;
			}
			_Buffer[i][_ConsoleSize.width + 1] = '\0';
		}
	}

	inline void Interface::DrawString(const std::string& object, const Coord position) {
		if (_Position.Y <= position.Y && size_t(std::abs(_Position.Y - position.Y)) < _ConsoleSize.height) {
			if (position.X <= _Position.X) {
				size_t Start = _Position.X - position.X;
				size_t length = object.length() - Start;
				size_t lengthDraw = _ConsoleSize.width + 1;
				size_t j = 0;
				size_t i = Start;
				for (; j < length;) {
					if (j < lengthDraw) {
						_Buffer[std::abs(_Position.Y - position.Y)][j] = object[i];
					}
					else {
						break;
					}
					++j;
					++i;
				}
			}
			else if (_Position.X <= position.X && size_t(std::abs(_Position.X - position.X)) < _ConsoleSize.width + 1) {
				size_t lengthString = object.length();
				size_t lengthDraw = _ConsoleSize.width + 1;
				size_t j = 0;
				size_t i = size_t(std::abs(_Position.X - position.X));
				for (; i < lengthDraw;) {
					if (j < lengthString) {
						_Buffer[std::abs(_Position.Y - position.Y)][i] = object[j];
					}
					else {
						break;
					}
					++i;
					++j;
				}
			}
		}
	}

	inline void Interface::DrawStraightAngle(StraightAngle& angle) {
		static Coord position = { 0,0 };
		position.X = angle.GetPosition().X;
		position.Y = angle.GetPosition().Y;
		if ((_Position.Y <= position.Y && size_t(std::abs(_Position.Y - position.Y)) < _ConsoleSize.height) &&
			(_Position.X <= position.X && size_t(std::abs(_Position.X - position.X)) < _ConsoleSize.width + 1)) {
			_Buffer[std::abs(_Position.Y - position.Y)][std::abs(_Position.X - position.X)] = angle.GetType();
		}
	}

	inline void Interface::DrawStraightLine(StraightLine& line) {
		static Coord position = { 0,0 };
		position.X = line.GetPosition().X;
		position.Y = line.GetPosition().Y;
		if (line.GetDirection()) {
			if (_Position.Y <= position.Y && size_t(std::abs(_Position.Y - position.Y)) < _ConsoleSize.height) {
				if (position.X <= _Position.X) {
					size_t Start = _Position.X - position.X;
					size_t length = line.GetLength() - Start;
					size_t lengthDraw = _ConsoleSize.width + 1;
					size_t j = 0;
					size_t i = Start;
					for (; j < length;) {
						if (j < lengthDraw) {
							_Buffer[std::abs(_Position.Y - position.Y)][j] = line[i];
						}
						else {
							break;
						}
						++j;
						++i;
					}
				}
				else if (_Position.X <= position.X && size_t(std::abs(_Position.X - position.X)) < _ConsoleSize.width + 1) {
					size_t lengthLine = line.GetLength();
					size_t lengthDraw = _ConsoleSize.width + 1;
					size_t j = 0;
					size_t i = size_t(std::abs(_Position.X - position.X));
					for (; i < lengthDraw;) {
						if (j < lengthLine) {
							_Buffer[std::abs(_Position.Y - position.Y)][i] = line[j];
						}
						else {
							break;
						}
						++i;
						++j;
					}
				}
			}
		}
		else {
			if (_Position.X <= position.X && size_t(std::abs(_Position.X - position.X)) < _ConsoleSize.width + 1) {
				if (position.Y <= _Position.Y) {
					size_t Start = size_t(_Position.Y - position.Y);
					size_t length = line.GetLength() - Start;
					size_t lengthDraw = _ConsoleSize.height;
					size_t j = 0;
					size_t i = Start;
					for (; j < length;) {
						if (j < lengthDraw) {
							_Buffer[j][std::abs(_Position.X - position.X)] = line[i];
						}
						else {
							break;
						}
						++j;
						++i;
					}
				}
				else if (_Position.Y <= position.Y && size_t(std::abs(_Position.Y - position.Y)) < _ConsoleSize.height) {
					size_t lengthLine = line.GetLength();
					size_t lengthDraw = _ConsoleSize.height;
					size_t j = 0;
					size_t i = size_t(std::abs(_Position.Y - position.Y));
					for (; i < lengthDraw;) {
						if (j < lengthLine) {
							_Buffer[i][std::abs(_Position.X - position.X)] = line[j];
						}
						else {
							break;
						}
						++i;
						++j;
					}
				}
			}
		}
	}

	inline void Interface::DrawAsciiPixsel(AsciiPixsel& pixsel) {
		static Coord position = { 0,0 };
		position.X = pixsel.GetPosition().X;
		position.Y = pixsel.GetPosition().Y;
		if ((_Position.Y <= position.Y && size_t(std::abs(_Position.Y - position.Y)) < _ConsoleSize.height) &&
			(_Position.X <= position.X && size_t(std::abs(_Position.X - position.X)) < _ConsoleSize.width + 1)) {
			_Buffer[std::abs(_Position.Y - position.Y)][std::abs(_Position.X - position.X)] = pixsel;
		}
	}

	Interface::Interface(int FontSize) {
		// Set Config Console
		SetConfigConsole(FontSize);
		// inz Background Symbol
		_BackgroundSymbol = ' ';
		_Position.X = _Position.Y = AcceptableTime = DynamicTime = _FPS = 0;
		_FPSLimitIsActive = false;
		_FPSLimit = STANDART_FPS_LIMIT;
		_FrameEvent = true;
		// Set Buffer Data
		SetBufferData();
	}

	void Interface::Draw(const std::string& object, const Coord position) {
		if (!_FPSLimitIsActive) {
			DrawString(object, position);
		}
		else if (_FrameEvent) {
			DrawString(object, position);
		}
	}

	void Interface::Draw(StraightAngle& angle) {
		if (!_FPSLimitIsActive) {
			DrawStraightAngle(angle);
		}
		else if (_FrameEvent) {
			DrawStraightAngle(angle);
		}
	}

	void Interface::Draw(StraightLine& line) {
		if (!_FPSLimitIsActive) {
			DrawStraightLine(line);
		}
		else if (_FrameEvent) {
			DrawStraightLine(line);
		}
	}

	void Interface::Draw(RectangularBox& box) {
		if (!_FPSLimitIsActive) {
			DrawStraightAngle(box._Up_Left_Angle);
			DrawStraightAngle(box._Up_Right_Angle);
			DrawStraightAngle(box._Down_Right_Angle);
			DrawStraightAngle(box._Down_Left_Angle);
			DrawStraightLine(box._Horizontal_Up);
			DrawStraightLine(box._Horizontal_Down);
			DrawStraightLine(box._Vertical_Left);
			DrawStraightLine(box._Vertical_Right);
		}
		else if (_FrameEvent) {
			DrawStraightAngle(box._Up_Left_Angle);
			DrawStraightAngle(box._Up_Right_Angle);
			DrawStraightAngle(box._Down_Right_Angle);
			DrawStraightAngle(box._Down_Left_Angle);
			DrawStraightLine(box._Horizontal_Up);
			DrawStraightLine(box._Horizontal_Down);
			DrawStraightLine(box._Vertical_Left);
			DrawStraightLine(box._Vertical_Right);
		}
	}

	void Interface::Draw(AsciiPixsel& pixsel) {
		if (!_FPSLimitIsActive) {
			DrawAsciiPixsel(pixsel);
		}
		else if (_FrameEvent) {
			DrawAsciiPixsel(pixsel);
		}
	}

	void Interface::Draw(AsciiImage& image) {
		if (image._InzData) {
			if (!_FPSLimitIsActive) {
				static size_t length_1 = image.GetSize().height;
				static size_t length_2 = image.GetSize().width;
				for (size_t i = 0; i < length_1; i++) {
					for (size_t j = 0; j < length_2; j++) {
						DrawAsciiPixsel((*image._Data[i][j]));
					}
				}
			}
			else if (_FrameEvent) {
				static size_t length_1 = image.GetSize().height;
				static size_t length_2 = image.GetSize().width;
				for (size_t i = 0; i < length_1; i++) {
					for (size_t j = 0; j < length_2; j++) {
						DrawAsciiPixsel((*image._Data[i][j]));
					}
				}
			}
		}
	}

	void Interface::ClearBuffer() {
		if (!_FPSLimitIsActive) {
			for (size_t i = 0; i < _ConsoleSize.height; i++) {
				for (size_t j = 0; j < _ConsoleSize.width + 1; j++) {
					_Buffer[i][j] = _BackgroundSymbol;
				}
			}
		}
		else if (_FrameEvent) {
			for (size_t i = 0; i < _ConsoleSize.height; i++) {
				for (size_t j = 0; j < _ConsoleSize.width + 1; j++) {
					_Buffer[i][j] = _BackgroundSymbol;
				}
			}
		}
	}

	void Interface::Update() {
		static int _FrameDetected = 0;
		if (_FrameTimer.ReturningElapsedTime() >= 1000) {
			_FrameTimer.ReStart();
			DynamicTime = 0;
			_FPS = _FrameDetected;
			_FrameDetected = 0;
		}
		if (!_FPSLimitIsActive) {
			for (size_t i = 0; i < _ConsoleSize.height; i++) {
				printf(_Buffer[i]);
			}
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), _CoordNull);
			++_FrameDetected;
			_KAYBOARD.UpDate();
		}
		else {
			if (_FrameTimer.ReturningElapsedTime() >= DynamicTime) {
				_FrameEvent = true;
				DynamicTime += AcceptableTime;
			}
			else {
				_FrameEvent = false;
			}
			if (_FrameEvent) {
				for (size_t i = 0; i < _ConsoleSize.height; i++) {
					printf(_Buffer[i]);
				}
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), _CoordNull);
				++_FrameDetected;
				_KAYBOARD.UpDate();
			}
		}
	}

	void Interface::UnplugFPSLimit() {
		if (_FPSLimitIsActive) {
			_FPSLimitIsActive = false;
			_FPSLimit = STANDART_FPS_LIMIT;
			_FrameEvent = true;
		}
	}

	Byte Interface::GetElement(Coord coord) const {
		if ((coord.X >= 0 && size_t(coord.X) < _ConsoleSize.width + 1) && (coord.Y >= 0 && size_t(coord.Y) < _ConsoleSize.height)) {
			return _Buffer[coord.X][coord.Y];
		}
		return 0;
	}

	void Interface::SetElement(Coord coord, Byte data) {
		if ((coord.X >= 0 && size_t(coord.X) < _ConsoleSize.width + 1) && (coord.Y >= 0 && size_t(coord.Y) < _ConsoleSize.height)) {
			_Buffer[coord.X][coord.Y] = data;
		}
	}

	Byte Interface::GetBackgroundSymbol() const { return 0; }
	void Interface::SetBackgroundSymbol(Byte data) { _BackgroundSymbol = data; }
	int Interface::GetFPSLimit() const { return _FPSLimit; }
	Size Interface::GetConsoleSize() const {
		Size ReturningSize = { _ConsoleSize.width,_ConsoleSize.height - 1 };
		return ReturningSize;
	}
	KAYBOARD::KayBoard& Interface::GetKayBoard() { return _KAYBOARD; }

	Boolean Interface::IsFrameEvent() const { return _FrameEvent; }

	void Interface::SetFPSLimit(int Limit) {
		_FPSLimitIsActive = true;
		if (Limit < MAX_FPS_LIMIT) {
			_FPSLimit = Limit;
		}
		else {
			_FPSLimit = STANDART_FPS_LIMIT;
		}
		AcceptableTime = 1000 / _FPSLimit;
	}

	int Interface::GetFPS(){
		return _FPS;
	}

	Interface::~Interface() {
		for (size_t i = 0; i < _ConsoleSize.height; i++) {
			delete[] _Buffer[i];
			_Buffer[i] = nullptr;
		}
		delete[] _Buffer;
		_Buffer = nullptr;
	}

}