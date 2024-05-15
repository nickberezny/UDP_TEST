///////////////////////////////////////////////////////////////////////////////
// UDPDriver.h

#ifndef __UDPDRIVER_H__
#define __UDPDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define UDPDRV_NAME        "UDP"
#define UDPDRV_Major       1
#define UDPDRV_Minor       0

#define DEVICE_CLASS CUDPDriver

#include "ObjDriver.h"

class CUDPDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl UDPDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(UDPDRV)
	VxD_Service( UDPDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __UDPDRIVER_H__