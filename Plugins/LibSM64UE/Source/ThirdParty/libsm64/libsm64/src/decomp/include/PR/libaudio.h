#ifndef _ULTRA64_LIBAUDIO_H_
#define _ULTRA64_LIBAUDIO_H_

#include "abi.h"
#include <stdlib.h>

#define __attribute__(x) // workaround as it wouldn't compile in MSVC

typedef struct
{
    u8 *offset __attribute__((aligned (8)));
    s32 len __attribute__((aligned (8)));
} ALSeqData;

typedef struct
{
    unsigned short  revision;
    unsigned short  seqCount;
	unsigned int pad;
    ALSeqData seqArray[1];
} __attribute__((aligned (16))) ALSeqFile;

void alSeqFileNew(ALSeqFile *f, u8 *base);

#endif
