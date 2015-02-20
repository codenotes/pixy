//#include "pixylibusb.h"
#include <boost\chrono.hpp>

/*
	To test the library, include "pixylibusb.h" from an application project
	and call pixylibusbTest().
	
	Do not forget to add the library to Project Dependencies in Visual Studio.
*/

static int s_Test = 0;

extern "C" int pixylibusbTest();

int pixylibusbTest()
{
	boost::chrono::steady_clock::time_point epoch_;
	return ++s_Test;
}