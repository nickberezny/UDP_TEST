// UDPCtrl.cpp : Implementation of CTcUDPCtrl
#include "TcPch.h"
#pragma hdrstop

#include "UDPW32.h"
#include "UDPCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CUDPCtrl

CUDPCtrl::CUDPCtrl() 
	: ITcOCFCtrlImpl<CUDPCtrl, CUDPClassFactory>() 
{
}

CUDPCtrl::~CUDPCtrl()
{
}

