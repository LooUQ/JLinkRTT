
#include <stdarg.h>
#include <stdint.h>
#include "jlinkRtt.h"


void rtt_printf(uint8_t color, const char *fmt, ...)
{
    // asm(".global _printf_float");

    char buf[180] = {0};
    va_list args;
    va_start(args, fmt);
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    /* Using RTT BufferIndex (tab) 0 only
     *
     * translates to:  int SEGGER_RTT_vprintf(unsigned BufferIndex, const char * sFormat, va_list * paramList);
     */

    switch (color)
    {
        case DBGCOLOR_cyan:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_CYAN);
            break;
        case DBGCOLOR_magenta:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_MAGENTA);
            break;
        case DBGCOLOR_white:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_WHITE);
            break;
        case DBGCOLOR_gray:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_BLACK);
            break;
        case DBGCOLOR_blue:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_BLUE);
            break;
        case DBGCOLOR_green:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_GREEN);
            break;
        case DBGCOLOR_red:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_RED);
            break;
        case DBGCOLOR_yellow:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_YELLOW);
            break;
            
        case DBGCOLOR_dCyan:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_CYAN);
            break;
        case DBGCOLOR_dMagenta:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_MAGENTA);
            break;
        case DBGCOLOR_dBlue:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BLUE);
            break;
        case DBGCOLOR_dGreen:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_GREEN);
            break;
        case DBGCOLOR_dRed:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_RED);
            break;
        case DBGCOLOR_dYellow:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_YELLOW);
            break;

        default:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
            break;
    }

    SEGGER_RTT_WriteString(0, buf);
    SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
}
