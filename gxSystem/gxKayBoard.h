#pragma once

#ifndef INC_GX_KAY_BOARD
#define INC_GX_KAY_BOARD

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>
#include <string>
#include <conio.h>
namespace gx {
	namespace KAYBOARD {
		struct gxButton {
			const Byte Code_0;
			const Byte Code_1;
			const Byte Code_2;
			const Byte Code_3;
		};
		namespace BUTTON {
			extern GX_SYSTEM_UTL_API const Byte SPACE;
			extern GX_SYSTEM_UTL_API const Byte BACKSPACE;
			extern GX_SYSTEM_UTL_API const Byte TAB;
			extern GX_SYSTEM_UTL_API const Byte ENTER;
			extern GX_SYSTEM_UTL_API const Byte CAPSLOCK;
			extern GX_SYSTEM_UTL_API const Byte ESC;
			extern GX_SYSTEM_UTL_API const Byte ZERO;
			extern GX_SYSTEM_UTL_API const Byte ONE;
			extern GX_SYSTEM_UTL_API const Byte TWO;
			extern GX_SYSTEM_UTL_API const Byte THREE;
			extern GX_SYSTEM_UTL_API const Byte FOUR;
			extern GX_SYSTEM_UTL_API const Byte FIVE;
			extern GX_SYSTEM_UTL_API const Byte SIX;
			extern GX_SYSTEM_UTL_API const Byte SEVEN;
			extern GX_SYSTEM_UTL_API const Byte EIGHT;
			extern GX_SYSTEM_UTL_API const Byte NINE;
			extern GX_SYSTEM_UTL_API const Byte TILDA;
			extern GX_SYSTEM_UTL_API const Byte MINUS;
			extern GX_SYSTEM_UTL_API const Byte EQUAL_SING;
			extern GX_SYSTEM_UTL_API const gxButton SQUARE_BRACKET_OPEN;
			extern GX_SYSTEM_UTL_API const gxButton SQUARE_BRACKET_CLOSED;
			extern GX_SYSTEM_UTL_API const gxButton COLON;
			extern GX_SYSTEM_UTL_API const gxButton QUOTATION_MARKS;
			extern GX_SYSTEM_UTL_API const Byte LEFT_SLASH;
			extern GX_SYSTEM_UTL_API const gxButton COMMA;
			extern GX_SYSTEM_UTL_API const gxButton POINT;
			extern GX_SYSTEM_UTL_API const gxButton RIGHT_SLASH;
			extern GX_SYSTEM_UTL_API const gxButton A;
			extern GX_SYSTEM_UTL_API const gxButton B;
			extern GX_SYSTEM_UTL_API const gxButton C;
			extern GX_SYSTEM_UTL_API const gxButton D;
			extern GX_SYSTEM_UTL_API const gxButton E;
			extern GX_SYSTEM_UTL_API const gxButton F;
			extern GX_SYSTEM_UTL_API const gxButton G;
			extern GX_SYSTEM_UTL_API const gxButton H;
			extern GX_SYSTEM_UTL_API const gxButton I;
			extern GX_SYSTEM_UTL_API const gxButton J;
			extern GX_SYSTEM_UTL_API const gxButton K;
			extern GX_SYSTEM_UTL_API const gxButton L;
			extern GX_SYSTEM_UTL_API const gxButton M;
			extern GX_SYSTEM_UTL_API const gxButton N;
			extern GX_SYSTEM_UTL_API const gxButton O;
			extern GX_SYSTEM_UTL_API const gxButton P;
			extern GX_SYSTEM_UTL_API const gxButton Q;
			extern GX_SYSTEM_UTL_API const gxButton R;
			extern GX_SYSTEM_UTL_API const gxButton S;
			extern GX_SYSTEM_UTL_API const gxButton T;
			extern GX_SYSTEM_UTL_API const gxButton U;
			extern GX_SYSTEM_UTL_API const gxButton V;
			extern GX_SYSTEM_UTL_API const gxButton W;
			extern GX_SYSTEM_UTL_API const gxButton X;
			extern GX_SYSTEM_UTL_API const gxButton Y;
			extern GX_SYSTEM_UTL_API const gxButton Z;
		}

		namespace SYMVOL {
			extern GX_SYSTEM_UTL_API const Byte Exclamation_mark;
			extern GX_SYSTEM_UTL_API const Byte Dog_sign;
			extern GX_SYSTEM_UTL_API const Byte Grid_sign;
			extern GX_SYSTEM_UTL_API const Byte Dollar_sign;
			extern GX_SYSTEM_UTL_API const Byte Percentage_sign;
			extern GX_SYSTEM_UTL_API const Byte UpperCorner_sign;
			extern GX_SYSTEM_UTL_API const Byte Ampersand_sign;
			extern GX_SYSTEM_UTL_API const Byte Asterisk_sign;
			extern GX_SYSTEM_UTL_API const Byte Parenthesis_open;
			extern GX_SYSTEM_UTL_API const Byte Parenthesis_close;
			extern GX_SYSTEM_UTL_API const Byte Underlining;
			extern GX_SYSTEM_UTL_API const Byte Plus;
			extern GX_SYSTEM_UTL_API const Byte VerticalLine;
			extern GX_SYSTEM_UTL_API const Byte SquareBracket_open;
			extern GX_SYSTEM_UTL_API const Byte SquareBracket_close;
			extern GX_SYSTEM_UTL_API const Byte CurlyBrace_open;
			extern GX_SYSTEM_UTL_API const Byte CurlyBrace_close;
			extern GX_SYSTEM_UTL_API const Byte Semicolon;
			extern GX_SYSTEM_UTL_API const Byte Colon;
			extern GX_SYSTEM_UTL_API const Byte Apostrophe;
			extern GX_SYSTEM_UTL_API const Byte QuotationMarks;
			extern GX_SYSTEM_UTL_API const Byte Comma;
			extern GX_SYSTEM_UTL_API const Byte SignLess;
			extern GX_SYSTEM_UTL_API const Byte Point;
			extern GX_SYSTEM_UTL_API const Byte SignMore;
			extern GX_SYSTEM_UTL_API const Byte RightSlash;
			extern GX_SYSTEM_UTL_API const Byte QuestionMark;
			extern GX_SYSTEM_UTL_API const Byte Latin_a;
			extern GX_SYSTEM_UTL_API const Byte Latin_b;
			extern GX_SYSTEM_UTL_API const Byte Latin_c;
			extern GX_SYSTEM_UTL_API const Byte Latin_d;
			extern GX_SYSTEM_UTL_API const Byte Latin_e;
			extern GX_SYSTEM_UTL_API const Byte Latin_f;
			extern GX_SYSTEM_UTL_API const Byte Latin_g;
			extern GX_SYSTEM_UTL_API const Byte Latin_h;
			extern GX_SYSTEM_UTL_API const Byte Latin_i;
			extern GX_SYSTEM_UTL_API const Byte Latin_j;
			extern GX_SYSTEM_UTL_API const Byte Latin_k;
			extern GX_SYSTEM_UTL_API const Byte Latin_l;
			extern GX_SYSTEM_UTL_API const Byte Latin_m;
			extern GX_SYSTEM_UTL_API const Byte Latin_n;
			extern GX_SYSTEM_UTL_API const Byte Latin_o;
			extern GX_SYSTEM_UTL_API const Byte Latin_p;
			extern GX_SYSTEM_UTL_API const Byte Latin_q;
			extern GX_SYSTEM_UTL_API const Byte Latin_r;
			extern GX_SYSTEM_UTL_API const Byte Latin_s;
			extern GX_SYSTEM_UTL_API const Byte Latin_t;
			extern GX_SYSTEM_UTL_API const Byte Latin_u;
			extern GX_SYSTEM_UTL_API const Byte Latin_v;
			extern GX_SYSTEM_UTL_API const Byte Latin_w;
			extern GX_SYSTEM_UTL_API const Byte Latin_x;
			extern GX_SYSTEM_UTL_API const Byte Latin_y;
			extern GX_SYSTEM_UTL_API const Byte Latin_z;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_a;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_b;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_v;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_g;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_d;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_e;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_yo;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_zh;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_z;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_i;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_yi;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_k;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_l;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_m;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_n;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_o;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_p;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_r;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_s;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_t;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_u;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_f;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_kh;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_tc;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_ch;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_sh;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_shch;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_Solid_sign;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_y;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_Soft_sign;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_ee;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_yu;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_ya;
			extern GX_SYSTEM_UTL_API const Byte Latin_A;
			extern GX_SYSTEM_UTL_API const Byte Latin_B;
			extern GX_SYSTEM_UTL_API const Byte Latin_C;
			extern GX_SYSTEM_UTL_API const Byte Latin_D;
			extern GX_SYSTEM_UTL_API const Byte Latin_E;
			extern GX_SYSTEM_UTL_API const Byte Latin_F;
			extern GX_SYSTEM_UTL_API const Byte Latin_G;
			extern GX_SYSTEM_UTL_API const Byte Latin_H;
			extern GX_SYSTEM_UTL_API const Byte Latin_I;
			extern GX_SYSTEM_UTL_API const Byte Latin_J;
			extern GX_SYSTEM_UTL_API const Byte Latin_K;
			extern GX_SYSTEM_UTL_API const Byte Latin_L;
			extern GX_SYSTEM_UTL_API const Byte Latin_M;
			extern GX_SYSTEM_UTL_API const Byte Latin_N;
			extern GX_SYSTEM_UTL_API const Byte Latin_O;
			extern GX_SYSTEM_UTL_API const Byte Latin_P;
			extern GX_SYSTEM_UTL_API const Byte Latin_Q;
			extern GX_SYSTEM_UTL_API const Byte Latin_R;
			extern GX_SYSTEM_UTL_API const Byte Latin_S;
			extern GX_SYSTEM_UTL_API const Byte Latin_T;
			extern GX_SYSTEM_UTL_API const Byte Latin_U;
			extern GX_SYSTEM_UTL_API const Byte Latin_V;
			extern GX_SYSTEM_UTL_API const Byte Latin_W;
			extern GX_SYSTEM_UTL_API const Byte Latin_X;
			extern GX_SYSTEM_UTL_API const Byte Latin_Y;
			extern GX_SYSTEM_UTL_API const Byte Latin_Z;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_A;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_B;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_V;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_G;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_D;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_E;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_YO;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_ZH;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_Z;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_I;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_YI;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_K;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_L;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_M;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_N;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_O;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_P;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_R;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_S;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_T;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_U;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_F;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_KH;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_TC;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_CH;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_SH;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_SHCH;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_SOLID_sign;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_Y;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_SOFT_sign;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_EE;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_YU;
			extern GX_SYSTEM_UTL_API const Byte Cyrillic_YA;
		}

		class GX_SYSTEM_UTL_API KayBoard {
		public:
			KayBoard();
			void UpDate();
			Boolean KayIsPress();
			Boolean KayPress(Byte button);
			Boolean KayPress(gxButton button);
			int GetCodeKayPress();
			std::string GetNameButtonPress();
			std::string GetNameSymvolPress();
			~KayBoard();
		private:
			void SetNameButton();
			void SetNameSymvol();
			std::string* _Symvol;
			std::string* _Button;
		protected:
			Byte _Kay;
			Boolean _KayEvent;
			Boolean _UsingNameSymvol;
			Boolean _UsingNameButton;
			int _UsingCounterNameSymvol;
			int _UsingCounterNameButton;
		};

	}
}

#endif // !INC_GX_KAY_BOARD
