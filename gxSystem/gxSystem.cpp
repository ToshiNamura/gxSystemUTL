// gxPoint.cpp
#include "pch.h"

namespace gx {

	Coord NewCoord(int x, int y) {
		Coord tempCoord = { x,y };
		return tempCoord;
	}
	Size NewSize(size_t width, size_t height) {
		Size tempSize = { width,height };
		return tempSize;
	}

	namespace ASCII_TEXTURE {
		const Byte TexstureNULL = '?';
		const Byte Texsture_SmallSpray = Byte(176);
		const Byte Texsture_MediumSpray = Byte(177);
		const Byte Texsture_LargeSpray = Byte(178);
		const Byte Texsture_FullSpray = Byte(219);
		const Byte Texsture_VerticalLine = Byte(179);
		const Byte Texsture_VerticalLine_Double = Byte(186);
		const Byte Texsture_HorizontalLine = Byte(196);
		const Byte Texsture_HorizontalLine_Double = Byte(205);
		const Byte Texsture_UL_Corner = Byte(218);
		const Byte Texsture_UL_Corner_Double = Byte(201);
		const Byte Texsture_UL_Corner_LeftDouble = Byte(214);
		const Byte Texsture_UL_Corner_RightDouble = Byte(213);
		const Byte Texsture_UR_Corner = Byte(191);
		const Byte Texsture_UR_Corner_Double = Byte(187);
		const Byte Texsture_UR_Corner_LeftDouble = Byte(184);
		const Byte Texsture_UR_Corner_RightDouble = Byte(183);
		const Byte Texsture_LR_Corner = Byte(217);
		const Byte Texsture_LR_Corner_Double = Byte(188);
		const Byte Texsture_LR_Corner_LeftDouble = Byte(190);
		const Byte Texsture_LR_Corner_RightDouble = Byte(189);
		const Byte Texsture_LL_Corner = Byte(192);
		const Byte Texsture_LL_Corner_Double = Byte(200);
		const Byte Texsture_LL_Corner_LeftDouble = Byte(211);
		const Byte Texsture_LL_Corner_RightDouble = Byte(212);
		const Byte Texsture_VerticalLine_LeftBranch = Byte(180);
		const Byte Texsture_VerticalLine_LeftBranchDouble = Byte(181);
		const Byte Texsture_VerticalLineDouble_LeftBranch = Byte(182);
		const Byte Texsture_VerticalLineDouble_LeftBranchDouble = Byte(185);
		const Byte Texsture_VerticalLine_RightBranch = Byte(195);
		const Byte Texsture_VerticalLine_RightBranchDouble = Byte(198);
		const Byte Texsture_VerticalLineDouble_RightBranch = Byte(199);
		const Byte Texsture_VerticalLineDouble_RightBranchDouble = Byte(204);
		const Byte Texsture_HorizontalLine_UpperBranch = Byte(193);
		const Byte Texsture_HorizontalLineDouble_UpperBranchDouble = Byte(202);
		const Byte Texsture_HorizontalLineDouble_UpperBranch = Byte(207);
		const Byte Texsture_HorizontalLine_UpperBranchDouble = Byte(208);
		const Byte Texsture_HorizontalLine_LowerBranch = Byte(194);
		const Byte Texsture_HorizontalLineDouble_LowerBranchDouble = Byte(203);
		const Byte Texsture_HorizontalLineDouble_LowerBranch = Byte(209);
		const Byte Texsture_HorizontalLine_LowerBranchDouble = Byte(210);
		const Byte Texsture_Crossroad = Byte(197);
		const Byte Texsture_CrossroadDouble = Byte(206);
		const Byte Texsture_Crossroad_VerticalDouble = Byte(215);
		const Byte Texsture_Crossroad_HorizontalDouble = Byte(216);

		void gx::ASCII_TEXTURE::DrawFullTextureList() {
			for (int i = -1; i <= 43; i++) {
				PrintInfoTexture(i);
			}
		}
		const Byte GetTexture(int _id) {
			if (_id == 0) { return Texsture_SmallSpray; }
			if (_id == 1) { return Texsture_MediumSpray; }
			if (_id == 2) { return Texsture_LargeSpray; }
			if (_id == 3) { return Texsture_FullSpray; }
			if (_id == 4) { return Texsture_VerticalLine; }
			if (_id == 5) { return Texsture_VerticalLine_Double; }
			if (_id == 6) { return Texsture_HorizontalLine; }
			if (_id == 7) { return Texsture_HorizontalLine_Double; }
			if (_id == 8) { return Texsture_UL_Corner; }
			if (_id == 9) { return Texsture_UL_Corner_Double; }
			if (_id == 10) { return Texsture_UL_Corner_LeftDouble; }
			if (_id == 11) { return Texsture_UL_Corner_RightDouble; }
			if (_id == 12) { return Texsture_UR_Corner; }
			if (_id == 13) { return Texsture_UR_Corner_Double; }
			if (_id == 14) { return Texsture_UR_Corner_LeftDouble; }
			if (_id == 15) { return Texsture_UR_Corner_RightDouble; }
			if (_id == 16) { return Texsture_LR_Corner; }
			if (_id == 17) { return Texsture_LR_Corner_Double; }
			if (_id == 18) { return Texsture_LR_Corner_LeftDouble; }
			if (_id == 19) { return Texsture_LR_Corner_RightDouble; }
			if (_id == 20) { return Texsture_LL_Corner; }
			if (_id == 21) { return Texsture_LL_Corner_Double; }
			if (_id == 22) { return Texsture_LL_Corner_LeftDouble; }
			if (_id == 23) { return Texsture_LL_Corner_RightDouble; }
			if (_id == 24) { return Texsture_VerticalLine_LeftBranch; }
			if (_id == 25) { return Texsture_VerticalLine_LeftBranchDouble; }
			if (_id == 26) { return Texsture_VerticalLineDouble_LeftBranch; }
			if (_id == 27) { return Texsture_VerticalLineDouble_LeftBranchDouble; }
			if (_id == 28) { return Texsture_VerticalLine_RightBranch; }
			if (_id == 29) { return Texsture_VerticalLine_RightBranchDouble; }
			if (_id == 30) { return Texsture_VerticalLineDouble_RightBranch; }
			if (_id == 31) { return Texsture_VerticalLineDouble_RightBranchDouble; }
			if (_id == 32) { return Texsture_HorizontalLine_UpperBranch; }
			if (_id == 33) { return Texsture_HorizontalLineDouble_UpperBranchDouble; }
			if (_id == 34) { return Texsture_HorizontalLineDouble_UpperBranch; }
			if (_id == 35) { return Texsture_HorizontalLine_UpperBranchDouble; }
			if (_id == 36) { return Texsture_HorizontalLine_LowerBranch; }
			if (_id == 37) { return Texsture_HorizontalLineDouble_LowerBranchDouble; }
			if (_id == 38) { return Texsture_HorizontalLineDouble_LowerBranch; }
			if (_id == 39) { return Texsture_HorizontalLine_LowerBranchDouble; }
			if (_id == 40) { return Texsture_Crossroad; }
			if (_id == 41) { return Texsture_CrossroadDouble; }
			if (_id == 42) { return Texsture_Crossroad_VerticalDouble; }
			if (_id == 43) { return Texsture_Crossroad_HorizontalDouble; }
			return TexstureNULL;
		}
		void gx::ASCII_TEXTURE::PrintInfoTexture(int _id) {
			if (_id == 0) { printf("\n[#%d][%d][Texsture_SmallSpray][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 1) { printf("\n[#%d][%d][Texsture_MediumSpray][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 2) { printf("\n[#%d][%d][Texsture_LargeSpray][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 3) { printf("\n[#%d][%d][Texsture_FullSpray][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 4) { printf("\n[#%d][%d][Texsture_VerticalLine][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 5) { printf("\n[#%d][%d][Texsture_VerticalLine_Double][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 6) { printf("\n[#%d][%d][Texsture_HorizontalLine][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 7) { printf("\n[#%d][%d][Texsture_HorizontalLine_Double][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 8) { printf("\n[#%d][%d][Texsture_UL_Corner][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 9) { printf("\n[#%d][%d][Texsture_UL_Corner_Double][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 10) { printf("\n[#%d][%d][Texsture_UL_Corner_LeftDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 11) { printf("\n[#%d][%d][Texsture_UL_Corner_RightDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 12) { printf("\n[#%d][%d][Texsture_UR_Corner][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 13) { printf("\n[#%d][%d][Texsture_UR_Corner_Double][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 14) { printf("\n[#%d][%d][Texsture_UR_Corner_LeftDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 15) { printf("\n[#%d][%d][Texsture_UR_Corner_RightDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 16) { printf("\n[#%d][%d][Texsture_LR_Corner][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 17) { printf("\n[#%d][%d][Texsture_LR_Corner_Double][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 18) { printf("\n[#%d][%d][Texsture_LR_Corner_LeftDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 19) { printf("\n[#%d][%d][Texsture_LR_Corner_RightDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 20) { printf("\n[#%d][%d][Texsture_LL_Corner][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 21) { printf("\n[#%d][%d][Texsture_LL_Corner_Double][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 22) { printf("\n[#%d][%d][Texsture_LL_Corner_LeftDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 23) { printf("\n[#%d][%d][Texsture_LL_Corner_RightDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 24) { printf("\n[#%d][%d][Texsture_VerticalLine_LeftBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 25) { printf("\n[#%d][%d][Texsture_VerticalLine_LeftBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 26) { printf("\n[#%d][%d][Texsture_VerticalLineDouble_LeftBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 27) { printf("\n[#%d][%d][Texsture_VerticalLineDouble_LeftBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 28) { printf("\n[#%d][%d][Texsture_VerticalLine_RightBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 29) { printf("\n[#%d][%d][Texsture_VerticalLine_RightBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 30) { printf("\n[#%d][%d][Texsture_VerticalLineDouble_RightBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 31) { printf("\n[#%d][%d][Texsture_VerticalLineDouble_RightBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 32) { printf("\n[#%d][%d][Texsture_HorizontalLine_UpperBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 33) { printf("\n[#%d][%d][Texsture_HorizontalLineDouble_UpperBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 34) { printf("\n[#%d][%d][Texsture_HorizontalLineDouble_UpperBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 35) { printf("\n[#%d][%d][Texsture_HorizontalLine_UpperBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 36) { printf("\n[#%d][%d][Texsture_HorizontalLine_LowerBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 37) { printf("\n[#%d][%d][Texsture_HorizontalLineDouble_LowerBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 38) { printf("\n[#%d][%d][Texsture_HorizontalLineDouble_LowerBranch][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 39) { printf("\n[#%d][%d][Texsture_HorizontalLine_LowerBranchDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 40) { printf("\n[#%d][%d][Texsture_Crossroad][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 41) { printf("\n[#%d][%d][Texsture_CrossroadDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 42) { printf("\n[#%d][%d][Texsture_Crossroad_VerticalDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else if (_id == 43) { printf("\n[#%d][%d][Texsture_Crossroad_HorizontalDouble][%c]", _id, GetTexture(_id), GetTexture(_id)); }
			else { printf("\n[#-1][?][TexstureNULL][%c]", GetTexture(-1)); }
		}
	}
}