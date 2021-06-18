#pragma once

#ifndef INC_GX_STRUCT
#define INC_GX_STRUCT

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

namespace gx {

	struct GX_SYSTEM_UTL_API Coord {
		int X;
		int Y;
	};

	GX_SYSTEM_UTL_API Coord NewCoord(int x, int y);

	struct GX_SYSTEM_UTL_API Size {
		unsigned int width;
		unsigned int height;
	};

	GX_SYSTEM_UTL_API Size NewSize(size_t width, size_t height);

	enum class GX_SYSTEM_UTL_API Colors {
		Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
		DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
	};

	typedef char Byte;
	typedef bool Boolean;

	/// | TEXTURE LIST
	namespace ASCII_TEXTURE {
		/// <summary>
		/// 
		/// </summary>
		GX_SYSTEM_UTL_API void DrawFullTextureList();
		/// <summary>
		/// 
		/// </summary>
		/// <param name="_id">
		/// 
		/// </param>
		/// <returns>
		/// 
		/// </returns>
		GX_SYSTEM_UTL_API const Byte GetTexture(int _id);
		/// <summary>
		/// 
		/// </summary>
		/// <param name="_is">
		/// 
		/// </param>
		GX_SYSTEM_UTL_API void PrintInfoTexture(int _id);
		/// | TexstureNULL.
		/// | ASCII Code: '?'. Local id: #-1
		extern GX_SYSTEM_UTL_API const Byte TexstureNULL;
		/// | Small spray on the entire cell.
		/// | ASCII Code: 176. Local id: #0
		extern GX_SYSTEM_UTL_API const Byte Texsture_SmallSpray;
		/// | Medium spray on the entire cell.
		/// | ASCII Code: 177. Local id: #1
		extern GX_SYSTEM_UTL_API const Byte Texsture_MediumSpray;
		/// | Large spray on the entire cell.
		/// | ASCII Code: 178. Local id: #2
		extern GX_SYSTEM_UTL_API const Byte Texsture_LargeSpray;
		/// | Full spray on the entire cell.
		/// | ASCII Code: 219. Local id: #3
		extern GX_SYSTEM_UTL_API const Byte Texsture_FullSpray;
		/// | A straight vertical line.
		/// | ASCII Code: 179. Local id: #4
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLine;
		/// | A straight double vertical line.
		/// | ASCII Code: 186. Local id: #5
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLine_Double;
		/// | A straight horizontal line.
		/// | ASCII Code: 196. Local id: #6
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLine;
		/// | A straight double horizontal line.
		/// | ASCII Code: 205. Local id: #7
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLine_Double;
		/// | Upper-left corner.
		/// | ASCII Code: 218. Local id: #8
		extern GX_SYSTEM_UTL_API const Byte Texsture_UL_Corner;
		/// | Upper-left double corner.
		/// | ASCII Code: 201. Local id: #9
		extern GX_SYSTEM_UTL_API const Byte Texsture_UL_Corner_Double;
		/// | Upper-left corner, left side double.
		/// | ASCII Code: 214. Local id: #10
		extern GX_SYSTEM_UTL_API const Byte Texsture_UL_Corner_LeftDouble;
		/// | Upper-left corner, right side double.
		/// | ASCII Code: 213. Local id: #11
		extern GX_SYSTEM_UTL_API const Byte Texsture_UL_Corner_RightDouble;
		/// | Upper-right corner.
		/// | ASCII Code: 191. Local id: #12
		extern GX_SYSTEM_UTL_API const Byte Texsture_UR_Corner;
		/// | Upper-right double corner.
		/// | ASCII Code: 187. Local id: #13
		extern GX_SYSTEM_UTL_API const Byte Texsture_UR_Corner_Double;
		/// | Upper-right corner, left side double.
		/// | ASCII Code: 184. Local id: #14
		extern GX_SYSTEM_UTL_API const Byte Texsture_UR_Corner_LeftDouble;
		/// | Upper-right corner, right side double.
		/// | ASCII Code: 183. Local id: #15
		extern GX_SYSTEM_UTL_API const Byte Texsture_UR_Corner_RightDouble;
		/// | Lower-right corner.
		/// | ASCII Code: 217. Local id: #16
		extern GX_SYSTEM_UTL_API const Byte Texsture_LR_Corner;
		/// | Lower-right double corner.
		/// | ASCII Code: 188. Local id: #17
		extern GX_SYSTEM_UTL_API const Byte Texsture_LR_Corner_Double;
		/// | Lower-right corner, left side double.
		/// | ASCII Code: 190. Local id: #18
		extern GX_SYSTEM_UTL_API const Byte Texsture_LR_Corner_LeftDouble;
		/// | Lower-right corner, right side double.
		/// | ASCII Code: 189. Local id: #19
		extern GX_SYSTEM_UTL_API const Byte Texsture_LR_Corner_RightDouble;
		/// | Lower-left corner.
		/// | ASCII Code: 192. Local id: #20
		extern GX_SYSTEM_UTL_API const Byte Texsture_LL_Corner;
		/// | Lower-left double corner.
		/// | ASCII Code: 200. Local id: #21
		extern GX_SYSTEM_UTL_API const Byte Texsture_LL_Corner_Double;
		/// | Lower-left corner, left side double.
		/// | ASCII Code: 211. Local id: #22
		extern GX_SYSTEM_UTL_API const Byte Texsture_LL_Corner_LeftDouble;
		/// | Lower-left corner, right side double.
		/// | ASCII Code: 212. Local id: #23
		extern GX_SYSTEM_UTL_API const Byte Texsture_LL_Corner_RightDouble;
		/// | Vertical line with left branch.
		/// | ASCII Code: 180. Local id: #24
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLine_LeftBranch;
		/// | Vertical line with left double branch.
		/// | ASCII Code: 181. Local id: #25
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLine_LeftBranchDouble;
		/// | Vertical double line with left branch.
		/// | ASCII Code: 182. Local id: #26
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLineDouble_LeftBranch;
		/// | Vertical double line with left double branch.
		/// | ASCII Code: 185. Local id: #27
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLineDouble_LeftBranchDouble;
		/// | Vertical line with right branch.
		/// | ASCII Code: 195. Local id: #28
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLine_RightBranch;
		/// | Vertical line with right double branch.
		/// | ASCII Code: 198. Local id: #29
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLine_RightBranchDouble;
		/// | Vertical double line with right branch.
		/// | ASCII Code: 199. Local id: #30
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLineDouble_RightBranch;
		/// | Vertical double line with right double branch.
		/// | ASCII Code: 204. Local id: #31
		extern GX_SYSTEM_UTL_API const Byte Texsture_VerticalLineDouble_RightBranchDouble;
		/// | Horizontal line with upper branch.
		/// | ASCII Code: 193. Local id: #32
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLine_UpperBranch;
		/// | Horizontal double line with upper double branch.
		/// | ASCII Code: 202. Local id: #33
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLineDouble_UpperBranchDouble;
		/// | Horizontal double line with upper branch.
		/// | ASCII Code: 207. Local id: #34
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLineDouble_UpperBranch;
		/// | Horizontal line with upper double branch.
		/// | ASCII Code: 208. Local id: #35
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLine_UpperBranchDouble;
		/// | Horizontal line with lower branch.
		/// | ASCII Code: 194. Local id: #36
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLine_LowerBranch;
		/// | Horizontal double line with lower double branch.
		/// | ASCII Code: 203. Local id: #37
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLineDouble_LowerBranchDouble;
		/// | Horizontal double line with lower branch.
		/// | ASCII Code: 209. Local id: #38
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLineDouble_LowerBranch;
		/// | Horizontal line with lower double branch.
		/// | ASCII Code: 210. Local id: #39
		extern GX_SYSTEM_UTL_API const Byte Texsture_HorizontalLine_LowerBranchDouble;
		/// | Crossroad.
		/// | ASCII Code: 197. Local id: #40
		extern GX_SYSTEM_UTL_API const Byte Texsture_Crossroad;
		/// | Crossroad full double.
		/// | ASCII Code: 206. Local id: #41
		extern GX_SYSTEM_UTL_API const Byte Texsture_CrossroadDouble;
		/// | Crossroad Vertical double.
		/// | ASCII Code: 215. Local id: #42
		extern GX_SYSTEM_UTL_API const Byte Texsture_Crossroad_VerticalDouble;
		/// | Crossroad Horizontal double.
		/// | ASCII Code: 216. Local id: #43
		extern GX_SYSTEM_UTL_API const Byte Texsture_Crossroad_HorizontalDouble;
	}

}

#endif // !INC_GX_STRUCT
