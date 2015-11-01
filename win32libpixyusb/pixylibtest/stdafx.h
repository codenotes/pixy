// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define NOMINMAX
#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

#include <signal.h>
#include <string.h>
#include "pixy.h"

#include <iostream>
#include <libusb.h>
//#include "wstp.h"

// TODO: reference additional headers your program requires here
