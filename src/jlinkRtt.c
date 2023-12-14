
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

#include "jlinkRtt.h"
#include "SEGGER_RTT.h"                 // NOTE: this is the "C" header from SEGGER unaltered. There is no #ifdef for prior header definition or __cplusplus

void log_printf(uint8_t color, const char *fmt, ...)
{
    // asm(".global _printf_float");

    char buf[180] = {0};
    va_list args;
    va_start(args, fmt);
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    /* Using RTT viewer tab 0 only (BufferIndex)
     *
     * translates to:  int SEGGER_RTT_vprintf(unsigned BufferIndex, const char * sFormat, va_list * paramList);
     */

    switch (color)
    {
        case PRNT_CYAN:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_CYAN);
            break;
        case PRNT_MAGENTA:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_MAGENTA);
            break;
        case PRNT_WHITE:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_WHITE);
            break;
        case PRNT_GRAY:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_BLACK);
            break;
        case PRNT_BLUE:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_BLUE);
            break;
        case PRNT_GREEN:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_GREEN);
            break;
        case PRNT_RED:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_RED);
            break;
        case PRNT_YELLOW:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BRIGHT_YELLOW);
            break;
            
        case PRNT_dCYAN:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_CYAN);
            break;
        case PRNT_dMAGENTA:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_MAGENTA);
            break;
        case PRNT_dBLUE:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_BLUE);
            break;
        case PRNT_dGREEN:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_GREEN);
            break;
        case PRNT_dRED:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_RED);
            break;
        case PRNT_dYELLOW:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_YELLOW);
            break;

        default:
            SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
            break;
    }

    SEGGER_RTT_WriteString(0, buf);
    SEGGER_RTT_WriteString(0, RTT_CTRL_TEXT_WHITE);
}
