#pragma once

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BYTE_ORDER LITTLE_ENDIAN

typedef uint8_t  u8_t;
typedef int8_t   s8_t;
typedef uint16_t u16_t;
typedef int16_t  s16_t;
typedef uint32_t u32_t;
typedef int32_t  s32_t;
typedef uintptr_t mem_ptr_t;

#define U16_F "hu"
#define S16_F "hd"
#define X16_F "hx"
#define U32_F "u"
#define S32_F "d"
#define X32_F "x"
#define SZT_F "u"

#define LWIP_PLATFORM_ASSERT(x) do { printf("Assertion \"%s\" failed at line %d in %s\n", x, __LINE__, __FILE__); } while(0)
#define LWIP_PLATFORM_DIAG(x) do { printf x; } while(0)

#define LWIP_RAND() ((u32_t)rand())

#ifndef portTICK_RATE_MS
#define portTICK_RATE_MS portTICK_PERIOD_MS
#endif
