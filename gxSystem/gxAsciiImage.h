#pragma once

#ifndef INC_GX_ASCII_IMAGE
#define INC_GX_ASCII_IMAGE

#ifndef GX_SYSTEM_UTL_API
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif
#endif // !GX_SYSTEM_UTL_API

#include <gxStruct.h>
#include <gxIPosition.h>
#include <gxISize.h>
#include <gxAsciiPixsel.h>

namespace gx {

	class GX_SYSTEM_UTL_API AsciiImage : public IPosition, public ISize {
	public:
		AsciiImage();
		AsciiImage(Size size, Coord coord = { 0,0 });
		AsciiImage(const AsciiImage& copy);
		Boolean IsInzData() const;
		void SetPosition(Coord coord);
		void SetSize(Size size);
		AsciiPixsel GetElement(Coord coord) const;
		Byte GetTextureElement(Coord coord) const;
		void SetTextureElement(Coord coord, AsciiPixsel Object);
		void SetTextureElement(Coord coord, Byte byte);
		~AsciiImage();
		friend class Interface;
	private:
		void InzData();
		void DelData();
	protected:
		AsciiPixsel*** _Data;
		Boolean _InzData;
	};

}

#endif // !INC_GX_ASCII_IMAGE