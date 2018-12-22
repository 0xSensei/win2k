// Memmgr.h
#if !defined(MEMMGR_H_INCLUDED)
#define MEMMGR_H_INCLUDED

// Define DISABLE_MEMMGR to disable the memory allocator in debug mode
#if defined(_DEBUG) && !defined(DISABLE_MEMMGR)

#include "memmgr.hpp"

extern CMemMgr gMemMgr;

inline void * __cdecl operator new(size_t cb, LPCSTR szFile, UINT uLine)
        { return gMemMgr.AllocMem(cb, szFile, uLine); }

inline void * __cdecl operator new(size_t cb)
        { return gMemMgr.AllocMem(cb, "EXTERNAL", 0); }

inline void __cdecl operator delete(void *pv)
        { gMemMgr.FreeMem(pv); }


//bugbug the  __file__ is a char * and is generated by the compiler.
//  since we can't control thism and don't want the overhead of a mutibyteToWideChar
//  on every new operation, we need to be char *  specific in the memmgr.  the ONLY
//  places where we use TCHARS is for OutputDebugStrings where the string is a
//  constant and unrelated to the __file__ string.
#define new  new( __FILE__, __LINE__)


#endif
#endif