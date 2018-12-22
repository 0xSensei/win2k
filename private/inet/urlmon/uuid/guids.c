

//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992 - 1995.

//  File:       GUIDS.C

//  Contents:   Defines GUIDS used in this DLL.

//  Classes:

//  Functions:

//  History:    11-02-95   JoeS (Joe Souza)     Created


//#include <urlint.h>


#ifdef __cplusplus
extern "C" {
#endif

// CLSIDs of the classes implemented in this dll
//DEFINE_GUID(CLSID_URLMoniker, 0x79eac9e0, 0xbaf9, 0x11ce, 0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b);


#ifndef GUID_DEFINED
#define GUID_DEFINED

typedef struct _GUID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} GUID;
#endif // GUID_DEFINED

const GUID CLSID_StdURLMoniker =
{
    0x79eac9e0, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b }
};
const GUID CLSID_StdURLProtocol =
{
    0x79eac9e1, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};
const GUID CLSID_HttpProtocol =
{
    0x79eac9e2, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};
const GUID CLSID_FtpProtocol =
{
    0x79eac9e3, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};
const GUID CLSID_GopherProtocol =
{
    0x79eac9e4, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};
const GUID CLSID_HttpSProtocol =
{
    0x79eac9e5, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};
const GUID CLSID_FileProtocol =
{
    0x79eac9e6, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};

const GUID CLSID_MkProtocol =
{
    0x79eac9e7, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};

const GUID CLSID_PSUrlMonProxy =
{
    0x79eac9f1, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};

const GUID IID_IAsyncMoniker =
{
    0x79eac9d3, 0xbaf9, 0x11ce, {0x8c, 0x82, 0x00, 0xaa, 0x00, 0x4b, 0xa9, 0x0b}
};

const GUID CLSID_PluginHost =
{
    0x25336920, 0x03F9, 0x11cf, {0x8F, 0xD0, 0x00, 0xAA, 0x00, 0x68, 0x6F, 0x13}
}


#ifdef __cplusplus
}
#endif