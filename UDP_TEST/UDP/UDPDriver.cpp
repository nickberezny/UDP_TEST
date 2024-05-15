///////////////////////////////////////////////////////////////////////////////
// UDPDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "UDPDriver.h"
#include "UDPClassFactory.h"

DECLARE_GENERIC_DEVICE(UDPDRV)

IOSTATUS CUDPDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CUDPClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CUDPDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CUDPDriver::UDPDRV_GetVersion( )
{
	return( (UDPDRV_Major << 8) | UDPDRV_Minor );
}

