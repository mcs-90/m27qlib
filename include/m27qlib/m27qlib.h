/* m27qlib.h */

#pragma once

#include "libusbk/libusbk.h"

#ifdef M27QLIBRARY_EXPORTS
#define M27QLIBRARY_API __declspec(dllexport)
#else
#define M27QLIBRARY_API __declspec(dllimport)
#endif

extern "C" M27QLIBRARY_API void M27Q_UsbWrite(UCHAR request, USHORT value, USHORT index, USHORT length, PUCHAR buffer);
extern "C" M27QLIBRARY_API void M27Q_UsbRead(UCHAR request, USHORT value, USHORT index, USHORT length, PUCHAR buffer);

extern "C" M27QLIBRARY_API UINT M27Q_SetCrosshair(UINT value);
extern "C" M27QLIBRARY_API UINT M27Q_GetBrightness();
extern "C" M27QLIBRARY_API UINT M27Q_SetBrightness(UINT value);

extern "C" BOOL WINAPI DllMain(HINSTANCE const instance, DWORD const reason, LPVOID const reserved);