#include "pch.h"
#include "gxKayBoard.h"

namespace gx {
	namespace KAYBOARD {
		namespace BUTTON {
			const Byte SPACE = Byte(32);
			const Byte BACKSPACE = Byte(8);
			const Byte TAB = Byte(9);
			const Byte ENTER = Byte(13);
			const Byte ESC = Byte(27);
			const Byte ZERO = Byte(48);
			const Byte ONE = Byte(49);
			const Byte TWO = Byte(50);
			const Byte THREE = Byte(51);
			const Byte FOUR = Byte(52);
			const Byte FIVE = Byte(53);
			const Byte SIX = Byte(54);
			const Byte SEVEN = Byte(55);
			const Byte EIGHT = Byte(56);
			const Byte NINE = Byte(57);
			const Byte TILDA = Byte(96);
			const Byte MINUS = Byte(45);
			const Byte EQUAL_SING = Byte(61);
			const gxButton SQUARE_BRACKET_OPEN = { Byte(91),Byte(123),Byte(229),Byte(149) };
			const gxButton SQUARE_BRACKET_CLOSED = { Byte(93),Byte(125),Byte(234),Byte(154) };
			const gxButton COLON = { Byte(59),Byte(58),Byte(166),Byte(134) };
			const gxButton QUOTATION_MARKS = { Byte(39),Byte(34),Byte(237),Byte(157) };
			const Byte LEFT_SLASH = Byte(92);
			const gxButton COMMA = { Byte(44),Byte(60),Byte(161),Byte(129) };
			const gxButton POINT = { Byte(46),Byte(62),Byte(238),Byte(158) };
			const gxButton RIGHT_SLASH = { Byte(47),Byte(63) };
			const gxButton A = { Byte(97),Byte(65),Byte(228),Byte(148) };
			const gxButton B = { Byte(98),Byte(66),Byte(168),Byte(136) };
			const gxButton C = { Byte(99),Byte(67),Byte(225),Byte(145) };
			const gxButton D = { Byte(100),Byte(68),Byte(162),Byte(130) };
			const gxButton E = { Byte(101),Byte(69),Byte(227),Byte(147) };
			const gxButton F = { Byte(102),Byte(70),Byte(160),Byte(128) };
			const gxButton G = { Byte(103),Byte(71),Byte(175),Byte(143) };
			const gxButton H = { Byte(104),Byte(72),Byte(224),Byte(144) };
			const gxButton I = { Byte(105),Byte(73),Byte(232),Byte(152) };
			const gxButton J = { Byte(106),Byte(74),Byte(174),Byte(142) };
			const gxButton K = { Byte(107),Byte(75),Byte(171),Byte(139) };
			const gxButton L = { Byte(108),Byte(76),Byte(164),Byte(132) };
			const gxButton M = { Byte(109),Byte(77),Byte(236),Byte(156) };
			const gxButton N = { Byte(110),Byte(78),Byte(226),Byte(146) };
			const gxButton O = { Byte(111),Byte(79),Byte(233),Byte(153) };
			const gxButton P = { Byte(112),Byte(80),Byte(167),Byte(135) };
			const gxButton Q = { Byte(113),Byte(81),Byte(169),Byte(137) };
			const gxButton R = { Byte(114),Byte(82),Byte(170),Byte(138) };
			const gxButton S = { Byte(115),Byte(83),Byte(235),Byte(155) };
			const gxButton T = { Byte(116),Byte(84),Byte(165),Byte(133) };
			const gxButton U = { Byte(117),Byte(85),Byte(163),Byte(131) };
			const gxButton V = { Byte(118),Byte(86),Byte(172),Byte(140) };
			const gxButton W = { Byte(119),Byte(87),Byte(230),Byte(150) };
			const gxButton X = { Byte(120),Byte(88),Byte(231),Byte(151) };
			const gxButton Y = { Byte(121),Byte(89),Byte(173),Byte(141) };
			const gxButton Z = { Byte(122),Byte(90),Byte(239),Byte(159) };
		}
		namespace SYMVOL {
			const Byte Exclamation_mark = Byte(33);
			const Byte Dog_sign = Byte(64);
			const Byte Grid_sign = Byte(35);
			const Byte Dollar_sign = Byte(36);
			const Byte Percentage_sign = Byte(37);
			const Byte UpperCorner_sign = Byte(94);
			const Byte Ampersand_sign = Byte(38);
			const Byte Asterisk_sign = Byte(42);
			const Byte Parenthesis_open = Byte(40);
			const Byte Parenthesis_close = Byte(41);
			const Byte Underlining = Byte(95);
			const Byte Plus = Byte(43);
			const Byte VerticalLine = Byte(124);
			const Byte SquareBracket_open = Byte(91);
			const Byte SquareBracket_close = Byte(93);
			const Byte CurlyBrace_open = Byte(123);
			const Byte CurlyBrace_close = Byte(125);
			const Byte Semicolon = Byte(59);
			const Byte Colon = Byte(58);
			const Byte Apostrophe = Byte(39);
			const Byte QuotationMarks = Byte(34);
			const Byte Comma = Byte(44);
			const Byte SignLess = Byte(60);
			const Byte Point = Byte(46);
			const Byte SignMore = Byte(62);
			const Byte RightSlash = Byte(47);
			const Byte QuestionMark = Byte(63);
			const Byte Latin_a = Byte(97);
			const Byte Latin_b = Byte(98);
			const Byte Latin_c = Byte(99);
			const Byte Latin_d = Byte(100);
			const Byte Latin_e = Byte(101);
			const Byte Latin_f = Byte(102);
			const Byte Latin_g = Byte(103);
			const Byte Latin_h = Byte(104);
			const Byte Latin_i = Byte(105);
			const Byte Latin_j = Byte(106);
			const Byte Latin_k = Byte(107);
			const Byte Latin_l = Byte(108);
			const Byte Latin_m = Byte(109);
			const Byte Latin_n = Byte(110);
			const Byte Latin_o = Byte(111);
			const Byte Latin_p = Byte(112);
			const Byte Latin_q = Byte(113);
			const Byte Latin_r = Byte(114);
			const Byte Latin_s = Byte(115);
			const Byte Latin_t = Byte(116);
			const Byte Latin_u = Byte(117);
			const Byte Latin_v = Byte(118);
			const Byte Latin_w = Byte(119);
			const Byte Latin_x = Byte(120);
			const Byte Latin_y = Byte(121);
			const Byte Latin_z = Byte(122);
			const Byte Cyrillic_a = Byte(160);
			const Byte Cyrillic_b = Byte(161);
			const Byte Cyrillic_v = Byte(162);
			const Byte Cyrillic_g = Byte(163);
			const Byte Cyrillic_d = Byte(164);
			const Byte Cyrillic_e = Byte(165);
			const Byte Cyrillic_zh = Byte(166);
			const Byte Cyrillic_z = Byte(167);
			const Byte Cyrillic_i = Byte(168);
			const Byte Cyrillic_yi = Byte(169);
			const Byte Cyrillic_k = Byte(170);
			const Byte Cyrillic_l = Byte(171);
			const Byte Cyrillic_m = Byte(172);
			const Byte Cyrillic_n = Byte(173);
			const Byte Cyrillic_o = Byte(174);
			const Byte Cyrillic_p = Byte(175);
			const Byte Cyrillic_r = Byte(224);
			const Byte Cyrillic_s = Byte(225);
			const Byte Cyrillic_t = Byte(226);
			const Byte Cyrillic_u = Byte(227);
			const Byte Cyrillic_f = Byte(228);
			const Byte Cyrillic_kh = Byte(229);
			const Byte Cyrillic_tc = Byte(230);
			const Byte Cyrillic_ch = Byte(231);
			const Byte Cyrillic_sh = Byte(232);
			const Byte Cyrillic_shch = Byte(233);
			const Byte Cyrillic_Solid_sign = Byte(234);
			const Byte Cyrillic_y = Byte(235);
			const Byte Cyrillic_Soft_sign = Byte(236);
			const Byte Cyrillic_ee = Byte(237);
			const Byte Cyrillic_yu = Byte(238);
			const Byte Cyrillic_ya = Byte(239);
			const Byte Latin_A = Byte(65);
			const Byte Latin_B = Byte(66);
			const Byte Latin_C = Byte(67);
			const Byte Latin_D = Byte(68);
			const Byte Latin_E = Byte(69);
			const Byte Latin_F = Byte(70);
			const Byte Latin_G = Byte(71);
			const Byte Latin_H = Byte(72);
			const Byte Latin_I = Byte(73);
			const Byte Latin_J = Byte(74);
			const Byte Latin_K = Byte(75);
			const Byte Latin_L = Byte(76);
			const Byte Latin_M = Byte(77);
			const Byte Latin_N = Byte(78);
			const Byte Latin_O = Byte(79);
			const Byte Latin_P = Byte(80);
			const Byte Latin_Q = Byte(81);
			const Byte Latin_R = Byte(82);
			const Byte Latin_S = Byte(83);
			const Byte Latin_T = Byte(84);
			const Byte Latin_U = Byte(85);
			const Byte Latin_V = Byte(86);
			const Byte Latin_W = Byte(87);
			const Byte Latin_X = Byte(88);
			const Byte Latin_Y = Byte(89);
			const Byte Latin_Z = Byte(90);
			const Byte Cyrillic_A = Byte(128);
			const Byte Cyrillic_B = Byte(129);
			const Byte Cyrillic_V = Byte(130);
			const Byte Cyrillic_G = Byte(131);
			const Byte Cyrillic_D = Byte(132);
			const Byte Cyrillic_E = Byte(133);
			const Byte Cyrillic_ZH = Byte(134);
			const Byte Cyrillic_Z = Byte(135);
			const Byte Cyrillic_I = Byte(136);
			const Byte Cyrillic_YI = Byte(137);
			const Byte Cyrillic_K = Byte(138);
			const Byte Cyrillic_L = Byte(139);
			const Byte Cyrillic_M = Byte(140);
			const Byte Cyrillic_N = Byte(141);
			const Byte Cyrillic_O = Byte(142);
			const Byte Cyrillic_P = Byte(143);
			const Byte Cyrillic_R = Byte(144);
			const Byte Cyrillic_S = Byte(145);
			const Byte Cyrillic_T = Byte(146);
			const Byte Cyrillic_U = Byte(147);
			const Byte Cyrillic_F = Byte(148);
			const Byte Cyrillic_KH = Byte(149);
			const Byte Cyrillic_TC = Byte(150);
			const Byte Cyrillic_CH = Byte(151);
			const Byte Cyrillic_SH = Byte(152);
			const Byte Cyrillic_SHCH = Byte(153);
			const Byte Cyrillic_SOLID_sign = Byte(154);
			const Byte Cyrillic_Y = Byte(155);
			const Byte Cyrillic_SOFT_sign = Byte(156);
			const Byte Cyrillic_EE = Byte(157);
			const Byte Cyrillic_YU = Byte(158);
			const Byte Cyrillic_YA = Byte(159);
		}
		KayBoard::KayBoard() {
			_Kay = Byte(0);
			_KayEvent = false;
#ifdef _STRING_
			_Button = new std::string("x000");
			_Symvol = new std::string("x000");
			_UsingNameSymvol = false;
			_UsingNameButton = false;
			_UsingCounterNameSymvol = 0;
			_UsingCounterNameButton = 0;
#endif // _STRING_
		}
		void KayBoard::UpDate() {
			if (_kbhit()) {
				_Kay = _getch();
				_KayEvent = true;
#ifdef _STRING_
				if (_UsingNameButton) {
					--_UsingCounterNameButton;
					SetNameButton();
					if (_UsingCounterNameButton < 0) {
						_UsingNameButton = false;
					}
				}
				if (_UsingNameSymvol) {
					--_UsingCounterNameSymvol;
					SetNameSymvol();
					if (_UsingCounterNameSymvol < 0) {
						_UsingNameSymvol = false;
					}
				}
#endif // _STRING_
			}
			else {
				_Kay = Byte(0);
				_KayEvent = false;
			}
		}
		Boolean KayBoard::KayIsPress() { return _KayEvent; }
		Boolean KayBoard::KayPress(Byte button) {
			if (_KayEvent &&
				_Kay == button) {
				return true;
			}
			return false;
		}
		Boolean KayBoard::KayPress(gxButton button) {
			if (_KayEvent &&
				(_Kay == button.Code_0 || _Kay == button.Code_1 || _Kay == button.Code_2 || _Kay == button.Code_3)) {
				return true;
			}
			return false;
		}
		int KayBoard::GetCodeKayPress() {
			static int Code = 0;
			if (_KayEvent) {
				Code = int(_Kay);
			}
			return Code;
		}
#ifdef _STRING_
		std::string KayBoard::GetNameButtonPress() {
			if (!_UsingNameButton) {
				_UsingNameButton = true;
			}
			if (_UsingCounterNameButton < 60) {
				_UsingCounterNameButton += 2;
			}
			return (*_Button);
		}
		std::string KayBoard::GetNameSymvolPress() {
			if (!_UsingNameSymvol) {
				_UsingNameSymvol = true;
			}
			if (_UsingCounterNameSymvol < 60) {
				_UsingCounterNameSymvol += 2;
			}
			return (*_Symvol);
		}
#endif // _STRING_
		KayBoard::~KayBoard() {
#ifdef _STRING_
			delete _Button;
			_Button = nullptr;
			delete _Symvol;
			_Symvol = nullptr;
#endif // _STRING_
		}
#ifdef _STRING_
		void KayBoard::SetNameButton() {
			switch (_Kay) {
			case BUTTON::SPACE: (*_Button) = "SPACE"; break;
			case BUTTON::BACKSPACE: (*_Button) = "BACKSPACE"; break;
			case BUTTON::TAB:(*_Button) = "TAB"; break;
			case BUTTON::ENTER: (*_Button) = "ENTER"; break;
			case BUTTON::ESC: (*_Button) = "ESC"; break;
			case BUTTON::ZERO: (*_Button) = "ZERO"; break;
			case BUTTON::ONE: (*_Button) = "ONE"; break;
			case BUTTON::TWO: (*_Button) = "TWO"; break;
			case BUTTON::THREE: (*_Button) = "THREE"; break;
			case BUTTON::FOUR: (*_Button) = "FOUR"; break;
			case BUTTON::FIVE: (*_Button) = "FIVE"; break;
			case BUTTON::SIX: (*_Button) = "SIX"; break;
			case BUTTON::SEVEN: (*_Button) = "SEVEN"; break;
			case BUTTON::EIGHT: (*_Button) = "EIGHT"; break;
			case BUTTON::NINE: (*_Button) = "NINE"; break;
			case BUTTON::TILDA: (*_Button) = "TILDA"; break;
			case BUTTON::MINUS: (*_Button) = "MINUS"; break;
			case BUTTON::EQUAL_SING: (*_Button) = "EQUAL_SING"; break;
			case BUTTON::LEFT_SLASH: (*_Button) = "LEFT_SLASH"; break;
				// + Shift
			case SYMVOL::Exclamation_mark: (*_Button) = "SHIFT+ONE"; break;
			case SYMVOL::Dog_sign: (*_Button) = "SHIFT+TWO"; break;
			case SYMVOL::Grid_sign: (*_Button) = "SHIFT+THREE"; break;
			case SYMVOL::Dollar_sign: (*_Button) = "SHIFT+FOUR"; break;
			case SYMVOL::Percentage_sign: (*_Button) = "SHIFT+FIVE"; break;
			case SYMVOL::UpperCorner_sign: (*_Button) = "SHIFT+SIX"; break;
			case SYMVOL::Ampersand_sign: (*_Button) = "SHIFT+SEVEN"; break;
			case SYMVOL::Asterisk_sign: (*_Button) = "SHIFT+EIGHT"; break;
			case SYMVOL::Parenthesis_open: (*_Button) = "SHIFT+NINE"; break;
			case SYMVOL::Parenthesis_close: (*_Button) = "SHIFT+ZERO"; break;
			case SYMVOL::Underlining: (*_Button) = "SHIFT+MINUS"; break;
			case SYMVOL::Plus: (*_Button) = "SHIFT+EQUAL_SING"; break;
			case SYMVOL::VerticalLine: (*_Button) = "SHIFT+LEFT_SLASH"; break;
				// SQUARE_BRACKET_OPEN
			case SYMVOL::SquareBracket_open: (*_Button) = "SQUARE_BRACKET_OPEN"; break;
			case SYMVOL::CurlyBrace_open: (*_Button) = "SQUARE_BRACKET_OPEN"; break;
			case SYMVOL::Cyrillic_kh: (*_Button) = "SQUARE_BRACKET_OPEN"; break;
			case SYMVOL::Cyrillic_KH: (*_Button) = "SQUARE_BRACKET_OPEN"; break;
				// SQUARE_BRACKET_CLOSED
			case SYMVOL::SquareBracket_close: (*_Button) = "SQUARE_BRACKET_CLOSED"; break;
			case SYMVOL::CurlyBrace_close: (*_Button) = "SQUARE_BRACKET_CLOSED"; break;
			case SYMVOL::Cyrillic_Solid_sign: (*_Button) = "SQUARE_BRACKET_CLOSED"; break;
			case SYMVOL::Cyrillic_SOLID_sign: (*_Button) = "SQUARE_BRACKET_CLOSED"; break;
				// COLON
			case SYMVOL::Colon: (*_Button) = "COLON"; break;
			case SYMVOL::Semicolon: (*_Button) = "COLON"; break;
			case SYMVOL::Cyrillic_zh: (*_Button) = "COLON"; break;
			case SYMVOL::Cyrillic_ZH: (*_Button) = "COLON"; break;
				// QUOTATION_MARKS
			case SYMVOL::Apostrophe: (*_Button) = "QUOTATION_MARKS"; break;
			case SYMVOL::QuotationMarks: (*_Button) = "QUOTATION_MARKS"; break;
			case SYMVOL::Cyrillic_ee: (*_Button) = "QUOTATION_MARKS"; break;
			case SYMVOL::Cyrillic_EE: (*_Button) = "QUOTATION_MARKS"; break;
				// COMMA
			case SYMVOL::Comma: (*_Button) = "COMMA"; break;
			case SYMVOL::SignLess: (*_Button) = "COMMA"; break;
			case SYMVOL::Cyrillic_b: (*_Button) = "COMMA"; break;
			case SYMVOL::Cyrillic_B: (*_Button) = "COMMA"; break;
				// POINT
			case SYMVOL::Point: (*_Button) = "POINT"; break;
			case SYMVOL::SignMore: (*_Button) = "POINT"; break;
			case SYMVOL::Cyrillic_yu: (*_Button) = "POINT"; break;
			case SYMVOL::Cyrillic_YU: (*_Button) = "POINT"; break;
				// RIGHT_SLASH
			case SYMVOL::RightSlash: (*_Button) = "RIGHT_SLASH"; break;
			case SYMVOL::QuestionMark: (*_Button) = "RIGHT_SLASH"; break;
				// A
			case SYMVOL::Latin_a: (*_Button) = "A"; break;
			case SYMVOL::Latin_A: (*_Button) = "A"; break;
			case SYMVOL::Cyrillic_f: (*_Button) = "A"; break;
			case SYMVOL::Cyrillic_F: (*_Button) = "A"; break;
				// B
			case SYMVOL::Latin_b: (*_Button) = "B"; break;
			case SYMVOL::Latin_B: (*_Button) = "B"; break;
			case SYMVOL::Cyrillic_i: (*_Button) = "B"; break;
			case SYMVOL::Cyrillic_I: (*_Button) = "B"; break;
				// C
			case SYMVOL::Latin_c: (*_Button) = "C"; break;
			case SYMVOL::Latin_C: (*_Button) = "C"; break;
			case SYMVOL::Cyrillic_s: (*_Button) = "C"; break;
			case SYMVOL::Cyrillic_S: (*_Button) = "C"; break;
				// D
			case SYMVOL::Latin_d: (*_Button) = "D"; break;
			case SYMVOL::Latin_D: (*_Button) = "D"; break;
			case SYMVOL::Cyrillic_v: (*_Button) = "D"; break;
			case SYMVOL::Cyrillic_V: (*_Button) = "D"; break;
				// E
			case SYMVOL::Latin_e: (*_Button) = "E"; break;
			case SYMVOL::Latin_E: (*_Button) = "E"; break;
			case SYMVOL::Cyrillic_u: (*_Button) = "E"; break;
			case SYMVOL::Cyrillic_U: (*_Button) = "E"; break;
				// F
			case SYMVOL::Latin_f: (*_Button) = "F"; break;
			case SYMVOL::Latin_F: (*_Button) = "F"; break;
			case SYMVOL::Cyrillic_a: (*_Button) = "F"; break;
			case SYMVOL::Cyrillic_A: (*_Button) = "F"; break;
				// G
			case SYMVOL::Latin_g: (*_Button) = "G"; break;
			case SYMVOL::Latin_G: (*_Button) = "G"; break;
			case SYMVOL::Cyrillic_p: (*_Button) = "G"; break;
			case SYMVOL::Cyrillic_P: (*_Button) = "G"; break;
				// H
			case SYMVOL::Latin_h: (*_Button) = "H"; break;
			case SYMVOL::Latin_H: (*_Button) = "H"; break;
			case SYMVOL::Cyrillic_r: (*_Button) = "H"; break;
			case SYMVOL::Cyrillic_R: (*_Button) = "H"; break;
				// I
			case SYMVOL::Latin_i: (*_Button) = "I"; break;
			case SYMVOL::Latin_I: (*_Button) = "I"; break;
			case SYMVOL::Cyrillic_sh: (*_Button) = "I"; break;
			case SYMVOL::Cyrillic_SH: (*_Button) = "I"; break;
				// J
			case SYMVOL::Latin_j: (*_Button) = "J"; break;
			case SYMVOL::Latin_J: (*_Button) = "J"; break;
			case SYMVOL::Cyrillic_o: (*_Button) = "J"; break;
			case SYMVOL::Cyrillic_O: (*_Button) = "J"; break;
				// K
			case SYMVOL::Latin_k: (*_Button) = "K"; break;
			case SYMVOL::Latin_K: (*_Button) = "K"; break;
			case SYMVOL::Cyrillic_l: (*_Button) = "K"; break;
			case SYMVOL::Cyrillic_L: (*_Button) = "K"; break;
				// L
			case SYMVOL::Latin_l: (*_Button) = "L"; break;
			case SYMVOL::Latin_L: (*_Button) = "L"; break;
			case SYMVOL::Cyrillic_d: (*_Button) = "L"; break;
			case SYMVOL::Cyrillic_D: (*_Button) = "L"; break;
				// M
			case SYMVOL::Latin_m: (*_Button) = "M"; break;
			case SYMVOL::Latin_M: (*_Button) = "M"; break;
			case SYMVOL::Cyrillic_Soft_sign: (*_Button) = "M"; break;
			case SYMVOL::Cyrillic_SOFT_sign: (*_Button) = "M"; break;
				// N
			case SYMVOL::Latin_n: (*_Button) = "N"; break;
			case SYMVOL::Latin_N: (*_Button) = "N"; break;
			case SYMVOL::Cyrillic_t: (*_Button) = "N"; break;
			case SYMVOL::Cyrillic_T: (*_Button) = "N"; break;
				// O
			case SYMVOL::Latin_o: (*_Button) = "O"; break;
			case SYMVOL::Latin_O: (*_Button) = "O"; break;
			case SYMVOL::Cyrillic_shch: (*_Button) = "O"; break;
			case SYMVOL::Cyrillic_SHCH: (*_Button) = "O"; break;
				// P
			case SYMVOL::Latin_p: (*_Button) = "P"; break;
			case SYMVOL::Latin_P: (*_Button) = "P"; break;
			case SYMVOL::Cyrillic_z: (*_Button) = "P"; break;
			case SYMVOL::Cyrillic_Z: (*_Button) = "P"; break;
				// Q
			case SYMVOL::Latin_q: (*_Button) = "Q"; break;
			case SYMVOL::Latin_Q: (*_Button) = "Q"; break;
			case SYMVOL::Cyrillic_yi: (*_Button) = "Q"; break;
			case SYMVOL::Cyrillic_YI: (*_Button) = "Q"; break;
				// R
			case SYMVOL::Latin_r: (*_Button) = "R"; break;
			case SYMVOL::Latin_R: (*_Button) = "R"; break;
			case SYMVOL::Cyrillic_k: (*_Button) = "R"; break;
			case SYMVOL::Cyrillic_K: (*_Button) = "R"; break;
				// S
			case SYMVOL::Latin_s: (*_Button) = "S"; break;
			case SYMVOL::Latin_S: (*_Button) = "S"; break;
			case SYMVOL::Cyrillic_y: (*_Button) = "S"; break;
			case SYMVOL::Cyrillic_Y: (*_Button) = "S"; break;
				// T
			case SYMVOL::Latin_t: (*_Button) = "T"; break;
			case SYMVOL::Latin_T: (*_Button) = "T"; break;
			case SYMVOL::Cyrillic_e: (*_Button) = "T"; break;
			case SYMVOL::Cyrillic_E: (*_Button) = "T"; break;
				// U
			case SYMVOL::Latin_u: (*_Button) = "U"; break;
			case SYMVOL::Latin_U: (*_Button) = "U"; break;
			case SYMVOL::Cyrillic_g: (*_Button) = "U"; break;
			case SYMVOL::Cyrillic_G: (*_Button) = "U"; break;
				// V
			case SYMVOL::Latin_v: (*_Button) = "V"; break;
			case SYMVOL::Latin_V: (*_Button) = "V"; break;
			case SYMVOL::Cyrillic_m: (*_Button) = "V"; break;
			case SYMVOL::Cyrillic_M: (*_Button) = "V"; break;
				// W
			case SYMVOL::Latin_w: (*_Button) = "W"; break;
			case SYMVOL::Latin_W: (*_Button) = "W"; break;
			case SYMVOL::Cyrillic_tc: (*_Button) = "W"; break;
			case SYMVOL::Cyrillic_TC: (*_Button) = "W"; break;
				// X
			case SYMVOL::Latin_x: (*_Button) = "X"; break;
			case SYMVOL::Latin_X: (*_Button) = "X"; break;
			case SYMVOL::Cyrillic_ch: (*_Button) = "X"; break;
			case SYMVOL::Cyrillic_CH: (*_Button) = "X"; break;
				// Y
			case SYMVOL::Latin_y: (*_Button) = "Y"; break;
			case SYMVOL::Latin_Y: (*_Button) = "Y"; break;
			case SYMVOL::Cyrillic_n: (*_Button) = "Y"; break;
			case SYMVOL::Cyrillic_N: (*_Button) = "Y"; break;
				// Z
			case SYMVOL::Latin_z: (*_Button) = "Z"; break;
			case SYMVOL::Latin_Z: (*_Button) = "Z"; break;
			case SYMVOL::Cyrillic_ya: (*_Button) = "Z"; break;
			case SYMVOL::Cyrillic_YA: (*_Button) = "Z"; break;
			default:
				(*_Button) = "x???";
				break;
			}
		}
		void KayBoard::SetNameSymvol() {
			switch (_Kay) {
			case BUTTON::SPACE: (*_Symvol) = "SPACE"; break;
			case BUTTON::BACKSPACE: (*_Symvol) = "BACKSPACE"; break;
			case BUTTON::TAB: (*_Symvol) = "TAB"; break;
			case BUTTON::ENTER: (*_Symvol) = "ENTER"; break;
			case BUTTON::ESC: (*_Symvol) = "ESC"; break;
			case BUTTON::ZERO: (*_Symvol) = "ZERO"; break;
			case BUTTON::ONE: (*_Symvol) = "ONE"; break;
			case BUTTON::TWO: (*_Symvol) = "TWO"; break;
			case BUTTON::THREE: (*_Symvol) = "THREE"; break;
			case BUTTON::FOUR: (*_Symvol) = "FOUR"; break;
			case BUTTON::FIVE: (*_Symvol) = "FIVE"; break;
			case BUTTON::SIX: (*_Symvol) = "SIX"; break;
			case BUTTON::SEVEN: (*_Symvol) = "SEVEN"; break;
			case BUTTON::EIGHT: (*_Symvol) = "EIGHT"; break;
			case BUTTON::NINE: (*_Symvol) = "NINE"; break;
			case BUTTON::TILDA: (*_Symvol) = "TILDA"; break;
			case BUTTON::MINUS: (*_Symvol) = "MINUS"; break;
			case BUTTON::EQUAL_SING: (*_Symvol) = "EQUAL_SING"; break;
			case BUTTON::LEFT_SLASH: (*_Symvol) = "LEFT_SLASH"; break;
			case SYMVOL::Exclamation_mark: (*_Symvol) = "Exclamation_mark"; break;
			case SYMVOL::Dog_sign: (*_Symvol) = "Dog_sign"; break;
			case SYMVOL::Grid_sign: (*_Symvol) = "Grid_sign"; break;
			case SYMVOL::Dollar_sign: (*_Symvol) = "Dollar_sign"; break;
			case SYMVOL::Percentage_sign: (*_Symvol) = "Percentage_sign"; break;
			case SYMVOL::UpperCorner_sign: (*_Symvol) = "UpperCorner_sign"; break;
			case SYMVOL::Ampersand_sign: (*_Symvol) = "Ampersand_sign"; break;
			case SYMVOL::Asterisk_sign: (*_Symvol) = "Asterisk_sign"; break;
			case SYMVOL::Parenthesis_open: (*_Symvol) = "Parenthesis_open"; break;
			case SYMVOL::Parenthesis_close: (*_Symvol) = "Parenthesis_closeO"; break;
			case SYMVOL::Underlining: (*_Symvol) = "Underlining"; break;
			case SYMVOL::Plus: (*_Symvol) = "Plus"; break;
			case SYMVOL::VerticalLine: (*_Symvol) = "VerticalLine"; break;
			case SYMVOL::SquareBracket_open: (*_Symvol) = "SquareBracket_open"; break;
			case SYMVOL::CurlyBrace_open: (*_Symvol) = "CurlyBrace_open"; break;
			case SYMVOL::Cyrillic_kh: (*_Symvol) = "Cyrillic_kh"; break;
			case SYMVOL::Cyrillic_KH: (*_Symvol) = "Cyrillic_KH"; break;
			case SYMVOL::SquareBracket_close: (*_Symvol) = "SquareBracket_close"; break;
			case SYMVOL::CurlyBrace_close: (*_Symvol) = "CurlyBrace_close"; break;
			case SYMVOL::Cyrillic_Solid_sign: (*_Symvol) = "Cyrillic_Solid_sign"; break;
			case SYMVOL::Cyrillic_SOLID_sign: (*_Symvol) = "Cyrillic_SOLID_sign"; break;
			case SYMVOL::Colon: (*_Symvol) = "Colon"; break;
			case SYMVOL::Semicolon: (*_Symvol) = "Semicolon"; break;
			case SYMVOL::Cyrillic_zh: (*_Symvol) = "Cyrillic_zh"; break;
			case SYMVOL::Cyrillic_ZH: (*_Symvol) = "Cyrillic_ZH"; break;
			case SYMVOL::Apostrophe: (*_Symvol) = "Apostrophe"; break;
			case SYMVOL::QuotationMarks: (*_Symvol) = "QuotationMarks"; break;
			case SYMVOL::Cyrillic_ee: (*_Symvol) = "Cyrillic_ee"; break;
			case SYMVOL::Cyrillic_EE: (*_Symvol) = "Cyrillic_EE"; break;
			case SYMVOL::Comma: (*_Symvol) = "Comma"; break;
			case SYMVOL::SignLess: (*_Symvol) = "SignLess"; break;
			case SYMVOL::Cyrillic_b: (*_Symvol) = "Cyrillic_b"; break;
			case SYMVOL::Cyrillic_B: (*_Symvol) = "Cyrillic_B"; break;
			case SYMVOL::Point: (*_Symvol) = "Point"; break;
			case SYMVOL::SignMore: (*_Symvol) = "SignMore"; break;
			case SYMVOL::Cyrillic_yu: (*_Symvol) = "Cyrillic_yu"; break;
			case SYMVOL::Cyrillic_YU: (*_Symvol) = "Cyrillic_YU"; break;
			case SYMVOL::RightSlash: (*_Symvol) = "RightSlash"; break;
			case SYMVOL::QuestionMark: (*_Symvol) = "QuestionMark"; break;
			case SYMVOL::Latin_a: (*_Symvol) = "Latin_a"; break;
			case SYMVOL::Latin_A: (*_Symvol) = "Latin_A"; break;
			case SYMVOL::Cyrillic_f: (*_Symvol) = "Cyrillic_f"; break;
			case SYMVOL::Cyrillic_F: (*_Symvol) = "Cyrillic_F"; break;
			case SYMVOL::Latin_b: (*_Symvol) = "Latin_b"; break;
			case SYMVOL::Latin_B: (*_Symvol) = "Latin_B"; break;
			case SYMVOL::Cyrillic_i: (*_Symvol) = "Cyrillic_i"; break;
			case SYMVOL::Cyrillic_I: (*_Symvol) = "Cyrillic_I"; break;
			case SYMVOL::Latin_c: (*_Symvol) = "Latin_c"; break;
			case SYMVOL::Latin_C: (*_Symvol) = "Latin_C"; break;
			case SYMVOL::Cyrillic_s: (*_Symvol) = "Cyrillic_s"; break;
			case SYMVOL::Cyrillic_S: (*_Symvol) = "Cyrillic_S"; break;
			case SYMVOL::Latin_d: (*_Symvol) = "Latin_d"; break;
			case SYMVOL::Latin_D: (*_Symvol) = "Latin_D"; break;
			case SYMVOL::Cyrillic_v: (*_Symvol) = "Cyrillic_v"; break;
			case SYMVOL::Cyrillic_V: (*_Symvol) = "Cyrillic_V"; break;
			case SYMVOL::Latin_e: (*_Symvol) = "Latin_e"; break;
			case SYMVOL::Latin_E: (*_Symvol) = "Latin_E"; break;
			case SYMVOL::Cyrillic_u: (*_Symvol) = "Cyrillic_u"; break;
			case SYMVOL::Cyrillic_U: (*_Symvol) = "Cyrillic_U"; break;
			case SYMVOL::Latin_f: (*_Symvol) = "Latin_f"; break;
			case SYMVOL::Latin_F: (*_Symvol) = "Latin_F"; break;
			case SYMVOL::Cyrillic_a: (*_Symvol) = "Cyrillic_a"; break;
			case SYMVOL::Cyrillic_A: (*_Symvol) = "Cyrillic_A"; break;
			case SYMVOL::Latin_g: (*_Symvol) = "Latin_g"; break;
			case SYMVOL::Latin_G: (*_Symvol) = "Latin_G"; break;
			case SYMVOL::Cyrillic_p: (*_Symvol) = "Cyrillic_p"; break;
			case SYMVOL::Cyrillic_P: (*_Symvol) = "Cyrillic_P"; break;
			case SYMVOL::Latin_h: (*_Symvol) = "Latin_h"; break;
			case SYMVOL::Latin_H: (*_Symvol) = "Latin_H"; break;
			case SYMVOL::Cyrillic_r: (*_Symvol) = "Cyrillic_r"; break;
			case SYMVOL::Cyrillic_R: (*_Symvol) = "Cyrillic_R"; break;
			case SYMVOL::Latin_i: (*_Symvol) = "Latin_i"; break;
			case SYMVOL::Latin_I: (*_Symvol) = "Latin_I"; break;
			case SYMVOL::Cyrillic_sh: (*_Symvol) = "Cyrillic_sh"; break;
			case SYMVOL::Cyrillic_SH: (*_Symvol) = "Cyrillic_SH"; break;
			case SYMVOL::Latin_j: (*_Symvol) = "Latin_j"; break;
			case SYMVOL::Latin_J: (*_Symvol) = "Latin_J"; break;
			case SYMVOL::Cyrillic_o: (*_Symvol) = "Cyrillic_o"; break;
			case SYMVOL::Cyrillic_O: (*_Symvol) = "Cyrillic_O"; break;
			case SYMVOL::Latin_k: (*_Symvol) = "Latin_k"; break;
			case SYMVOL::Latin_K: (*_Symvol) = "Latin_K"; break;
			case SYMVOL::Cyrillic_l: (*_Symvol) = "Cyrillic_l"; break;
			case SYMVOL::Cyrillic_L: (*_Symvol) = "Cyrillic_L"; break;
			case SYMVOL::Latin_l: (*_Symvol) = "Latin_l"; break;
			case SYMVOL::Latin_L: (*_Symvol) = "Latin_L"; break;
			case SYMVOL::Cyrillic_d: (*_Symvol) = "Cyrillic_d"; break;
			case SYMVOL::Cyrillic_D: (*_Symvol) = "Cyrillic_D"; break;
			case SYMVOL::Latin_m: (*_Symvol) = "Latin_m"; break;
			case SYMVOL::Latin_M: (*_Symvol) = "Latin_M"; break;
			case SYMVOL::Cyrillic_Soft_sign: (*_Symvol) = "Cyrillic_Soft_sign"; break;
			case SYMVOL::Cyrillic_SOFT_sign: (*_Symvol) = "Cyrillic_SOFT_sign"; break;
			case SYMVOL::Latin_n: (*_Symvol) = "Latin_n"; break;
			case SYMVOL::Latin_N: (*_Symvol) = "Latin_N"; break;
			case SYMVOL::Cyrillic_t: (*_Symvol) = "Cyrillic_t"; break;
			case SYMVOL::Cyrillic_T: (*_Symvol) = "Cyrillic_T"; break;
			case SYMVOL::Latin_o: (*_Symvol) = "Latin_o"; break;
			case SYMVOL::Latin_O: (*_Symvol) = "Latin_O"; break;
			case SYMVOL::Cyrillic_shch: (*_Symvol) = "Cyrillic_shch"; break;
			case SYMVOL::Cyrillic_SHCH: (*_Symvol) = "Cyrillic_SHCH"; break;
			case SYMVOL::Latin_p: (*_Symvol) = "Latin_p"; break;
			case SYMVOL::Latin_P: (*_Symvol) = "Latin_P"; break;
			case SYMVOL::Cyrillic_z: (*_Symvol) = "Cyrillic_z"; break;
			case SYMVOL::Cyrillic_Z: (*_Symvol) = "Cyrillic_Z"; break;
			case SYMVOL::Latin_q: (*_Symvol) = "Latin_q"; break;
			case SYMVOL::Latin_Q: (*_Symvol) = "Latin_Q"; break;
			case SYMVOL::Cyrillic_yi: (*_Symvol) = "Cyrillic_yi"; break;
			case SYMVOL::Cyrillic_YI: (*_Symvol) = "Cyrillic_YI"; break;
			case SYMVOL::Latin_r: (*_Symvol) = "Latin_r"; break;
			case SYMVOL::Latin_R: (*_Symvol) = "Latin_R"; break;
			case SYMVOL::Cyrillic_k: (*_Symvol) = "Cyrillic_k"; break;
			case SYMVOL::Cyrillic_K: (*_Symvol) = "Cyrillic_K"; break;
			case SYMVOL::Latin_s: (*_Symvol) = "Latin_s"; break;
			case SYMVOL::Latin_S: (*_Symvol) = "Latin_S"; break;
			case SYMVOL::Cyrillic_y: (*_Symvol) = "Cyrillic_y"; break;
			case SYMVOL::Cyrillic_Y: (*_Symvol) = "Cyrillic_Y"; break;
			case SYMVOL::Latin_t: (*_Symvol) = "Latin_t"; break;
			case SYMVOL::Latin_T: (*_Symvol) = "Latin_T"; break;
			case SYMVOL::Cyrillic_e: (*_Symvol) = "Cyrillic_e"; break;
			case SYMVOL::Cyrillic_E: (*_Symvol) = "Cyrillic_E"; break;
			case SYMVOL::Latin_u: (*_Symvol) = "Latin_u"; break;
			case SYMVOL::Latin_U: (*_Symvol) = "Latin_U"; break;
			case SYMVOL::Cyrillic_g: (*_Symvol) = "Cyrillic_g"; break;
			case SYMVOL::Cyrillic_G: (*_Symvol) = "Cyrillic_G"; break;
			case SYMVOL::Latin_v: (*_Symvol) = "Latin_v"; break;
			case SYMVOL::Latin_V: (*_Symvol) = "Latin_V"; break;
			case SYMVOL::Cyrillic_m: (*_Symvol) = "Cyrillic_m"; break;
			case SYMVOL::Cyrillic_M: (*_Symvol) = "Cyrillic_M"; break;
			case SYMVOL::Latin_w: (*_Symvol) = "Latin_w"; break;
			case SYMVOL::Latin_W: (*_Symvol) = "Latin_W"; break;
			case SYMVOL::Cyrillic_tc: (*_Symvol) = "Cyrillic_tc"; break;
			case SYMVOL::Cyrillic_TC: (*_Symvol) = "Cyrillic_TC"; break;
			case SYMVOL::Latin_x: (*_Symvol) = "Latin_x"; break;
			case SYMVOL::Latin_X: (*_Symvol) = "Latin_X"; break;
			case SYMVOL::Cyrillic_ch: (*_Symvol) = "Cyrillic_ch"; break;
			case SYMVOL::Cyrillic_CH: (*_Symvol) = "Cyrillic_CH"; break;
			case SYMVOL::Latin_y: (*_Symvol) = "Latin_y"; break;
			case SYMVOL::Latin_Y: (*_Symvol) = "Latin_Y"; break;
			case SYMVOL::Cyrillic_n: (*_Symvol) = "Cyrillic_n"; break;
			case SYMVOL::Cyrillic_N: (*_Symvol) = "Cyrillic_N"; break;
			case SYMVOL::Latin_z: (*_Symvol) = "Latin_z"; break;
			case SYMVOL::Latin_Z: (*_Symvol) = "Latin_Z"; break;
			case SYMVOL::Cyrillic_ya: (*_Symvol) = "Cyrillic_ya"; break;
			case SYMVOL::Cyrillic_YA: (*_Symvol) = "Cyrillic_YA"; break;
			default:
				(*_Symvol) = "x???";
				break;
			}
		}
#endif // _STRING_
	}
}