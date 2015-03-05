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

#include "connectevent.h"
#include "libusb.h"
#include "pixydefs.h"
#include "mainwindow.h"
#include <QDebug>
#include <vector>

libusb_device **devs; //pointer to pointer of device, used to retrieve a list of devices

std::vector<libusb_device*> g_cams;

//libusb_device * g_pixies[2] = { 0, 0 };

extern MainWindow * gMain;
void logConsole(char * message);

ConnectEvent::ConnectEvent(MainWindow *main, unsigned int sleep)
{
    m_main = main;
    m_sleep = sleep;
    m_run = true;
    m_state = -1;
    m_dev = NONE;

    libusb_init(&m_context);
    start();
}

ConnectEvent::~ConnectEvent()
{
    m_run = false;
    wait();
    libusb_exit(m_context);
}

int ConnectEvent::find2Pixies()// libusb_device_handle ** handle)
{
	
	libusb_context *ctx = NULL; //a libusb session
	libusb_device_descriptor desc;

	if (g_cams.size() > 0)
	{
		libusb_free_device_list(devs, 1); //free the list, unref the devices in it
		g_cams.clear();

	}

	int pxycnt = 0;
	int r; //for return values

	ssize_t cnt; //holding number of devices in list
	r = libusb_init(&ctx); //initialize a library session
	if (r < 0) {
		//cout << "Init Error " << r << endl; //there was an error
		return 1;
	}
	libusb_set_debug(ctx, 3); //set verbosity level to 3, as suggested in the documentation
	cnt = libusb_get_device_list(ctx, &devs); //get the list of devices
	if (cnt < 0) {
		//cout << "Get Device Error" << endl; //there was an error
	}
	//cout << cnt << " Devices in list." << endl; //print total number of usb devices
	ssize_t i; //for iterating through the list

	for (i = 0; i < cnt; i++)
	{

		//printdev(devs[i]); //print specs of this device
		int r = libusb_get_device_descriptor(devs[i], &desc);
		if (r < 0)
		{
			//	cout << "failed to get device descriptor" << endl;
			return 1;
		}

		if (desc.idVendor == PIXY_VID)
		{
		//	g_pixies[pxycnt++] = devs[i];
			g_cams.push_back(devs[i]);

			qDebug() << "Found:" << pxycnt << "\n";
			//cout << "Pixy found!!" << endl;

		}

	}

//	if (whichPix == 0)
//	{
//		int r = libusb_open(_pixies[whichPix], &*handle);
////		log("pixydebug: 0- libusb_open() = %d\n", r);
//
//		//		dev = _pixies[0];
//
//	}
//	else
//	{
//		if (pxycnt > 1)
//		{
//			int r = libusb_open(_pixies[whichPix], &*handle);
//		//	log("pixydebug: 1- libusb_open() = %d\n", r);
//		}
//		//	dev = _pixies[1];
//		else
//		{
//		//	log("pixydebug: tried to open nonexistant camera.\n");
//			//	return -1;
//		}
//	}
//
	
	emit pixycamsFound();
	return 0;

}

Device ConnectEvent::getConnected()
{
	Device res = NONE;
	libusb_device_handle *handle = 0;

	qDebug() << "getConnected()\n";
	//gMain->logConsole("Checking\n");

	m_mutex.lock();
	find2Pixies();
	handle = libusb_open_device_with_vid_pid(m_context, PIXY_VID, PIXY_DID);
	if (handle)
	{

		res = PIXY;
	}
	else
	{
		handle = libusb_open_device_with_vid_pid(m_context, PIXY_DFU_VID, PIXY_DFU_DID);
		if (handle)
			res = PIXY_DFU;
	}
	if (handle)
		libusb_close(handle);
	m_mutex.unlock();

	return res;
}

#if 0
Device ConnectEvent::getConnected()
{
    Device res = NONE;
    libusb_device_handle *handle = 0;

	qDebug() << "getConnected()\n";
	//gMain->logConsole("Checking\n");
	
    m_mutex.lock();
	find2Pixies();
    handle = libusb_open_device_with_vid_pid(m_context, PIXY_VID, PIXY_DID);
	if (handle)
	{

        res = PIXY;
	}
    else
    {
        handle = libusb_open_device_with_vid_pid(m_context, PIXY_DFU_VID, PIXY_DFU_DID);
        if (handle)
            res = PIXY_DFU;
    }
    if (handle)
        libusb_close(handle);
    m_mutex.unlock();

    return res;
}
#endif

void ConnectEvent::emitConnected(Device dev, bool state)
{
    // this makes sure we only send connect events upon changes
    // which also prevents late events from coming in after we destroy this class instance.
    if (dev!=m_dev || state!=m_state)
    {
        m_dev = dev;
        m_state = state;

		emit connected(m_dev, m_state);
    }
}

// this polling loop is much more portable between OSs than detecting actual connect/disconnect events
void ConnectEvent::run()
{
    Device dev;
	qDebug() << "run()\n";
	//gMain->logConsole("I bet I never see this...\n");
    connect(this, SIGNAL(connected(Device,bool)), m_main, SLOT(handleConnected(Device,bool)));
	connect(this, SIGNAL(pixycamsFound()), m_main, SLOT(handleCameraButtons()));

    // sleep a while (so we can wait for other devices to be de-registered)
    msleep(m_sleep);
    while(m_run)
    {
        dev = getConnected();
        msleep(1000);
        if (dev!=NONE)
            emitConnected(dev, true);
        else
            emitConnected(dev, false);
    }
}

