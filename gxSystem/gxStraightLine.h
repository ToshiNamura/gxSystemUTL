// gxStraightLine.h
#pragma once

#ifndef INC_GX_STRAIGHT_LINE
#define INC_GX_STRAIGHT_LINE

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>
#include <gxIPosition.h>

namespace gx {

	class GX_SYSTEM_UTL_API StraightLine : public IPosition {
	public:
		StraightLine();
		/// <param name="length">
		/// | Line size in characters.
		/// </param>
		/// <param name="direction">
		/// | true = Horizontal direction,
		/// false = Vertical direction.
		/// </param>
		StraightLine(int length, Boolean direction = true, Boolean doubleLine = false);
		/// <param name="position">
		/// | Setting line positions.
		/// </param>
		/// <param name="length">
		/// | Line size in characters.
		/// </param>
		/// <param name="direction">
		/// | true = Horizontal direction,
		/// false = Vertical direction.
		/// </param>
		StraightLine(Coord position, int length, Boolean direction = true, Boolean doubleLine = false);
		/// <param name="length">
		/// | Line size in characters.
		/// </param>
		/// <param name="direction">
		/// | true = Horizontal direction,
		/// false = Vertical direction.
		/// </param>
		void InzData(int length, Boolean direction = true, Boolean doubleLine = false);
		void ClsData();
		Boolean IsInzData() const;
		Boolean IsDoubleLine() const;
		void TurnOnDoubleLine();
		void TurnOffDoubleLine();
		/// <returns>
		/// true = Horizontal direction,
		/// false = Vertical direction.
		/// </returns>
		Boolean GetDirection() const;
		/// <param name="direction">
		/// | true = Horizontal direction,
		/// false = Vertical direction.
		/// </param>
		void SetDirection(Boolean direction);
		size_t GetLength() const;
		void SetLength(size_t length);
		Byte GetType() const;
		void SetType(Byte type);
		Byte operator[](int index) const;
		Byte& operator[](int index);
		~StraightLine();
	private:
		inline void CorrectType();
	protected:
		Boolean _Direction;
		Boolean _DoubleLine;
		Boolean _InzData;
		size_t _Length;
		Byte _Type;
		Byte* _Data;
	};

}

#endif // !INC_GX_STRAIGHT_LINE
