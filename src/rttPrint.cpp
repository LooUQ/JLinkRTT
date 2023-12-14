
#include "jlinkRtt.h"                                       
#include "rttPrint.h"                                       // rttPrint (h/cpp) is a CPP wrapper around SEGGER_RTT.c

#include "SEGGER_RTT.h"


size_t rttPrint::write(const uint8_t *buffer, size_t size)
{
    return SEGGER_RTT_WriteString(0, (char*)buffer);
}


size_t rttPrint::write(uint8_t b)
{
  return SEGGER_RTT_Write(0, (char*) &b, 1);
}

