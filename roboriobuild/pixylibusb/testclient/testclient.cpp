#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif


#include <iostream>
#include <signal.h>
#include <string.h>
#include "pixy.h"

#include <iostream>
#include <libusb.h>

using namespace std;

int main(int argc, char *argv[])
{
	int pixy_init_status = pixy_init2(0);
	char sz[] = "Hello, World!";	//Hover mouse over "sz" while debugging to see its contents
	cout << sz << endl;	//<================= Put a breakpoint here
	return 0;
}