// pixylibtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//
// begin license header
//
// This file is part of Pixy CMUcam5 or "Pixy" for short
//
// All Pixy source code is provided under the terms of the
// GNU General Public License v2 (http://www.gnu.org/licenses/gpl-2.0.html).
// Those wishing to use Pixy source code, software and/or
// technologies under different licensing terms should contact us at
// cmucam@cs.cmu.edu. Such licensing terms are available for
// all portions of the Pixy codebase presented here.
//
// end license header
//


#define BLOCK_BUFFER_SIZE    25

// Pixy Block buffer // 
struct Block blocks[BLOCK_BUFFER_SIZE];

static bool run_flag = true;

void handle_SIGINT(int unused)
{
	// On CTRL+C - abort! //

	run_flag = false;
}

int main(int argc, char * argv[])
{
	int      i = 0;
	int      index;
	int      blocks_copied;
	int      pixy_init_status;
	char     buf[128];
	int whichPix = 0;

	// Catch CTRL+C (SIGINT) signals //
	signal(SIGINT, handle_SIGINT);

	printf("Hello Pixy:\n libpixyusb Version: %s\n", __LIBPIXY_VERSION__);

	// Connect to Pixy //
	pixy_init_status = pixy_init2(0);

	// Was there an error initializing pixy? //
	if (!pixy_init_status == 0)
	{
		// Error initializing Pixy //
		printf("pixy_init(): ");
		pixy_error(pixy_init_status);

		return pixy_init_status;
	}


	pixy_init_status = pixy_init2(1);

	// Was there an error initializing pixy? //
	if (!pixy_init_status == 0)
	{
		// Error initializing Pixy //
		printf("pixy_init(): ");
		pixy_error(pixy_init_status);

		return pixy_init_status;
	}



	// Request Pixy firmware version //
  {
	  uint16_t major;
	  uint16_t minor;
	  uint16_t build;
	  int      return_value;

	  return_value = pixy_get_firmware_version2(0, &major, &minor, &build);

	  if (return_value) {
		  // Error //
		  printf("Failed to retrieve Pixy firmware version. ");
		  pixy_error(return_value);

		  return return_value;
	  }
	  else {
		  // Success //
		  printf(" Pixy Firmware Version: %d.%d.%d\n", major, minor, build);
	  }


	  return_value = pixy_get_firmware_version2(1, &major, &minor, &build);

	  if (return_value) {
		  // Error //
		  printf("Failed to retrieve Pixy firmware version. ");
		  pixy_error(return_value);

		  return return_value;
	  }
	  else {
		  // Success //
		  printf(" Pixy Firmware Version: %d.%d.%d\n", major, minor, build);
	  }






  }

  pixy_close2(0);
  pixy_close2(1);
  return 0;

 //greg, cut short the block gathering.

#if 0
	// Pixy Command Examples //
  {
	  int32_t response;
	  int     return_value;

	  // Execute remote procedure call "cam_setAWB" with one output (host->pixy) parameter (Value = 1)
	  //
	  //   Parameters:                 Notes:
	  //
	  //   pixy_command("cam_setAWB",  String identifier for remote procedure
	  //                        0x01,  Length (in bytes) of first output parameter
	  //                           1,  Value of first output parameter
	  //                           0,  Parameter list seperator token (See value of: END_OUT_ARGS)
	  //                   &response,  Pointer to memory address for return value from remote procedure call
	  //                           0); Parameter list seperator token (See value of: END_IN_ARGS)
	  //

	  // Enable auto white balance //
	  pixy_command("cam_setAWB", UINT8(0x01), END_OUT_ARGS, &response, END_IN_ARGS);

	  // Execute remote procedure call "cam_getAWB" with no output (host->pixy) parameters
	  //
	  //   Parameters:                 Notes:
	  //
	  //   pixy_command("cam_setAWB",  String identifier for remote procedure
	  //                           0,  Parameter list seperator token (See value of: END_OUT_ARGS)
	  //                   &response,  Pointer to memory address for return value from remote procedure call
	  //                           0); Parameter list seperator token (See value of: END_IN_ARGS)
	  //

	  // Get auto white balance //
	  return_value = pixy_command("cam_getAWB", END_OUT_ARGS, &response, END_IN_ARGS);

	  // Set auto white balance back to disabled //
	  pixy_command("cam_setAWB", UINT8(0x00), END_OUT_ARGS, &response, END_IN_ARGS);
  }
#endif

  printf("Frame:\tSignature:\tX:\tY:\tWidth:\t:Height:\tAngle:\n");
	while (run_flag)
	{
		// Wait for new blocks to be available //
		while (!pixy_blocks_are_new2(whichPix) && run_flag);

		// Get blocks from Pixy //
		blocks_copied = pixy_get_blocks2(whichPix,BLOCK_BUFFER_SIZE, &blocks[0]);

		if (blocks_copied < 0) {
			// Error: pixy_get_blocks //
			printf("pixy_get_blocks(): ");
			pixy_error(blocks_copied);
		}

		// Display received blocks //
		//below, frame
		printf("%d\t", i);
		//printf("%d:\t", i);
		for (index = 0; index != blocks_copied; ++index) 
		{
		//	blocks[index].print(buf);
			//printf("  %s\n", buf);

			printf("%d\t%d\t%d\t%d\t%d\t%d\n", blocks[index].signature,
				blocks[index].x,
				blocks[index].y,
				blocks[index].width,
				blocks[index].height,
				blocks[index].angle

				);


		}
		i++;
	}
	pixy_close2(whichPix);
}
