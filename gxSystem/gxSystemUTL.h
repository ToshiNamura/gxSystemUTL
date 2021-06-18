// gxSystem.h
/// General Xenon Useful Tools Library
/// Version: 0.1
/// ShapShot: Alfa.14
#pragma once

#ifndef INC_GX_SYSTEM
#define INC_GX_SYSTEM
#ifdef GX_SYSTEM_UTL_EXPORTS
#define GX_SYSTEM_UTL_API __declspec(dllexport)
#else
#define GX_SYSTEM_UTL_API __declspec(dllimport)
#endif

#include <gxTimer.h>
#include <gxStruct.h>
#include <gxIPosition.h>
#include <gxISize.h>
#include <gxKayBoard.h>
#include <gxStraightLine.h>
#include <gxStraightAngle.h>
#include <gxRectangularBox.h>
#include <gxAsciiPixsel.h>
#include <gxAsciiImage.h>
#include <gxInterface.h>

#endif // !INC_GX_SYSTEM