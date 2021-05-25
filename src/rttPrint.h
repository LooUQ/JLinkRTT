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
#ifndef __JLINK_RTT_H__
#define __JLINK_RTT_H__

#include <stdio.h>
#include <Print.h>

// typedef enum rttColor_tag {
//     rttColor_none = 0,
//     rttColor_info = 1,
//     rttColor_warn = 2,
//     rttColor_error = 3,

//     rttColor_cyan = 10,
//     rttColor_magenta = 11,
//     rttColor_white = 12,
//     rttColor_gray = 13,
//     rttColor_blue = 14,

//     rttColor_dCyan = 20,
//     rttColor_dMagenta = 21,

//     rttColor_green = 1,
//     rttColor_dGreen = 25
// } rttColor_t;



class rttPrint : public Print
{
    uint8_t count;
    uint8_t buffer[8];

    public: 
        rttPrint() : count(0) {};

        void begin(long) {};

        size_t write(const uint8_t *buffer, size_t size);
        size_t write(const uint8_t character);

        using Print::write;        // make other overloads of write visible
} ;


#endif  /* !__JLINK_RTT_H__ */
