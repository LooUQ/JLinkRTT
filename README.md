# SEGGER J-Link RTT Support in Visual Studio Code Arduino

Segger J-Link RTT is a facility to support low-impact, data I/O from embedded application under test to a debugging host. This library is a direct fork of the Segger published J-Link RTT library, minimally restructured for easy inclusion in Arduino platform projects.
 
## Please Review Segger License Requirements
https://www.segger.com/purchase/licensing/license-cul/


## From Segger README.txt
README.txt for the SEGGER RTT Implementation Pack.
Date: 17 Dec 2014

Included files:
===============
Root Directory
  - Examples
    - RTT_MenuApp.c               - Sample application to demonstrate RTT bi-directional functionality. No OS.
    - RTT_embOS_SpeedTestApp.c    - Sample application for measuring RTT performance. embOS needed.
  - RTT
    - SEGGER_RTT.c                - The RTT implementation.
    - SEGGER_RTT.h                - Header for RTT implementation.
    - SEGGER_RTT_Conf.h           - Pre-processor configuration for the RTT implementation.
    - SEGGER_RTT_Printf.c         - Simple implementation of printf to write formatted strings via RTT.
  - Syscalls
    - RTT_Syscalls_GCC.c          - Low-level syscalls to retarget printf() to RTT with GCC / Newlib.
    - RTT_Syscalls_IAR.c          - Low-level syscalls to retarget printf() to RTT with IAR compiler.
    - RTT_Syscalls_KEIL.c         - Low-level syscalls to retarget printf() to RTT with KEIL/uVision compiler.