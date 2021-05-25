
#include "jlinkRtt.h"
#include "rttPrint.h"

// extern "C" {
// #include <SEGGER_RTT.h>
// }


size_t rttPrint::write(const uint8_t *buffer, size_t size)
{
    return SEGGER_RTT_WriteString(0, (char*)buffer);
}


size_t rttPrint::write(uint8_t b)
{
  return SEGGER_RTT_Write(0, (char*) &b, 1);
}


// void rtt_printf(uint8_t color, const char *fmt, ...)
// {
//     // asm(".global _printf_float");

//     char buf[180] = {0};
//     va_list args;
//     va_start(args, fmt);
//     vsnprintf(buf, sizeof(buf), fmt, args);
//     va_end(args);

//     //int SEGGER_RTT_vprintf(unsigned BufferIndex, const char * sFormat, va_list * paramList);

//     switch (color)
//     {
//         case rttColor_none:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
//             break;
//         case rttColor_info:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_GREEN);
//             break;
//         case rttColor_warn:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_YELLOW);
//             break;
//         case rttColor_error:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_RED);
//             break;

//         case rttColor_cyan:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_CYAN);
//             break;
//         case rttColor_magenta:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_MAGENTA);
//             break;
//         case rttColor_white:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_WHITE);
//             break;
//         case rttColor_gray:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_BLACK);
//             break;
//         case rttColor_blue:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_BLUE);
//             break;
            
//         case rttColor_dCyan:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_CYAN);
//             break;
//         case rttColor_dMagenta:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_MAGENTA);
//             break;
//         case rttColor_dGreen:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_GREEN);
//             break;

//         default:
//             SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
//             break;
//     }

//     SEGGER_RTT_WriteString(0, buf);
//     SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
// }
