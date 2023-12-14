/******************************************************************************
 *  \file jlink_rtt.h
 *  \author Greg Terrell
 *  \license MIT License
 *
 *  Copyright (c) 2020 LooUQ Incorporated.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software. THE SOFTWARE IS PROVIDED
 * "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
 * LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *****************************************************************************/
#ifndef __JLINKRTT_H__
#define __JLINKRTT_H__

#ifdef _TERMINAL
    #undef _TERMINAL
#endif
#define _TERMINAL 1
#define LOG_RTT
#define DIAGPRINT_RTT               // LEGACY: remove in future version


#ifndef PRNT_DEFAULT                // PRNT_ constants will be deprecated when DPRINT() and DPRINT_V() macros are eliminated
    #define PRNT_DEFAULT 13
    #define PRNT_INFO 12
    #define PRNT_WARN 17
    #define PRNT_ERROR 16

    #define PRNT_CYAN 10
    #define PRNT_MAGENTA 11
    #define PRNT_WHITE 12
    #define PRNT_GRAY 13
    #define PRNT_BLUE 14
    #define PRNT_GREEN 15
    #define PRNT_RED 16
    #define PRNT_YELLOW 17

    #define PRNT_dCYAN 20
    #define PRNT_dMAGENTA 21
    #define PRNT_dBLUE 24
    #define PRNT_dGREEN 25
    #define PRNT_dRED 26
    #define PRNT_dYELLOW 27
#endif

#ifndef logDEFAULT
    #define logDEFAULT 13
    #define logINFO 12
    #define logWARN 17
    #define logERROR 16

    #define logCYAN 10
    #define logMAGENTA 11
    #define logWHITE 12
    #define logGRAY 13
    #define logBLUE 14
    #define logGREEN 15
    #define logRED 16
    #define logYELLOW 17

    #define logDARKCYAN 20
    #define logDARKMAGENTA 21
    #define logDARKBLUE 24
    #define logDARKGREEN 25
    #define logDARKRED 26
    #define logDARKYELLOW 27
#endif


#ifndef _LOGGER
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

void log_printf(uint8_t color, const char *fmt, ...);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // not defined(_LOGGER)

#endif // !__JLINKRTT_H__ 
