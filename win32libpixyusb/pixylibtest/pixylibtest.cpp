// pixylibtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <algorithm>

bool printFrame(int whichPix, int sig);

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


template <typename T, typename Total, int N>
class Moving_Average
{
public:
	Moving_Average()
		: num_samples_(0), total_(0)
	{ }

	void operator()(T sample)
	{
		if (num_samples_ < N)
		{
			samples_[num_samples_++] = sample;
			total_ += sample;
		}
		else
		{
			T& oldest = samples_[num_samples_++ % N];
			total_ += sample - oldest;
			oldest = sample;
		}
	}

	double get()
	{
		return total_ / std::min(num_samples_, N);
	}

	operator double() const { return total_ / std::min(num_samples_, N); }

private:
	T samples_[N];
	int num_samples_;
	Total total_;
};

Moving_Average<double, double, 100> mAverage;


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

  //pixy_close2(0);
  //pixy_close2(1);
  //return 0;

 //greg, cut short the block gathering.
  printf("Which cam, 0 or 1 or both (3):");
  whichPix=getchar()-0x30;
  printf("Cam:%c\tFrame:\tSignature:\tX:\tY:\tWidth:\t:Height:\tAngle:\n",whichPix+99);

  while (run_flag)
  {
	  if (whichPix == 3)//both
	  {
		  printFrame(0, 1); //note that we have a hardcoded signature 2nd param right now.  Need to make that custom.
		  printFrame(1, 1);
	  }
	  else
		  printFrame(whichPix, 1);
  }



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

	
	//pixy_close2(whichPix);

	pixy_close2(0);
	pixy_close2(1);

}


static float DisparityToDistance(float disparity_pixels,
	float focal_length_mm,
	float sensor_pixels_per_mm,
	float baseline_mm)
{
	float focal_length_pixels = focal_length_mm * sensor_pixels_per_mm;
	float distance_mm = baseline_mm * focal_length_pixels / disparity_pixels;
	return(distance_mm);
}

float dist2(int disp)
{
	float focal_length_mm = 2.8f;
		float sensor_pixels_per_mm = 3.016;
		float scale = .15;
		float baseline_mm = 146.685;
		return baseline_mm * (focal_length_mm * sensor_pixels_per_mm) / (disp*scale);


}
//float distance_mm = baseline_mm * (focal_length_mm * sensor_pixels_per_mm) / disparity_pixels;

//x = 146.685*(2.8 * 3.016)/137.16
//x=9
//so if I have 60, does that mean I need to apply a scale factor of .15 to disparties from camera to make distance work?
//at 28 I need .3 scale
//seems like I am just counteracting the sensor_pixes per mm...hmmm. 1/10th of that anyway. 
//146.685 distance between cams right now
//pixycam is 2.8 FOV
//pixels per mm 3.016 maybe according to docs

//box is about 1370mm away

float distanceCalc(int whichPix, int x)
{
	float sensor_pixels_per_mm = 3.016;
	double baseline_mm = 200;
	static int last_x1 = 0;
	static int last_x2 = 0;
	float scale = .3;
	double disp;
	double av;

	if (whichPix==0) last_x1 = x;
	else
		last_x2 = x;


	disp = (double)abs(last_x1 - last_x2);

	mAverage(disp);
	//Range = ( Focal length x Camera baseline ) / Disparity

	av = (double)mAverage;
	printf("\ncurrent:%.2f avged:%.2f dist:%.2f\n", disp, av, 
		baseline_mm * (2.8) / (av) * 100
		);

	return (2.8 * 146.685 * sensor_pixels_per_mm) / (float)abs(last_x1 - last_x2)*scale*10;
	//return last_x1 - last_x2;



}

//bool printFrame(int whichPix, int sig, int &x, int &y, int &width, int &height )
bool printFrame(int whichPix, int sig)
{
	int      i = 0;
	int      index;
	int      blocks_copied;
	int      pixy_init_status;
	char     buf[128];
	float dist;
	

	//while (run_flag)
	{
		// Wait for new blocks to be available //
		//while (!pixy_blocks_are_new2(whichPix) );

		if (!pixy_blocks_are_new2(whichPix))
		{
	//		printf("no blocks, returning\n");
			return false;

		}

		// Get blocks from Pixy //
		blocks_copied = pixy_get_blocks2(whichPix, BLOCK_BUFFER_SIZE, &blocks[0]);

		if (blocks_copied < 0) {
			// Error: pixy_get_blocks //
			printf("pixy_get_blocks(): ");
			pixy_error(blocks_copied);
			return false;
		}
		else if (blocks_copied == 0)
		{
			return false;
		}

		// Display received blocks //
		
		//printf("%d:\t", i);
		for (index = 0; index != blocks_copied; ++index)
		{
			if (blocks[index].signature != sig)
				continue;
			//	blocks[index].print(buf);
			//printf("  %s\n", buf);

			dist = distanceCalc(whichPix, blocks[index].x);

			//printf("->%d\t", index);//frame
			printf("%c\t%d\t%d\t%d\t%d\t%d\t%d%f\n", whichPix + 65, //'A' or 'B' ascii
				blocks[index].signature,
				blocks[index].x,
				blocks[index].y,
				blocks[index].width,
				blocks[index].height,
				blocks[index].angle,
				dist
				);


		}
		i++;
	}


}
























//
//
//
//
//while (run_flag)
//{
//	// Wait for new blocks to be available //
//	while (!pixy_blocks_are_new2(whichPix) && run_flag);
//
//	// Get blocks from Pixy //
//	blocks_copied = pixy_get_blocks2(whichPix, BLOCK_BUFFER_SIZE, &blocks[0]);
//
//	if (blocks_copied < 0) {
//		// Error: pixy_get_blocks //
//		printf("pixy_get_blocks(): ");
//		pixy_error(blocks_copied);
//	}
//
//	// Display received blocks //
//	//below, frame
//	printf("%d\t", i);
//	//printf("%d:\t", i);
//	for (index = 0; index != blocks_copied; ++index)
//	{
//		//	blocks[index].print(buf);
//		//printf("  %s\n", buf);
//
//		printf("%c\t%d\t%d\t%d\t%d\t%d\t%d\n", whichPix + 99, //'A' or 'B' ascii
//			blocks[index].signature,
//			blocks[index].x,
//			blocks[index].y,
//			blocks[index].width,
//			blocks[index].height,
//			blocks[index].angle
//
//			);
//
//
//	}
//	i++;
//}