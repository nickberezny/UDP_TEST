///////////////////////////////////////////////////////////////////////////////
// UDPCtrl.h

#ifndef __UDPCTRL_H__
#define __UDPCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "UDPW32.h"
#include "TcBase.h"
#include "UDPClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CUDPCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CUDPCtrl, &CLSID_UDPCtrl>
	, public IUDPCtrl
	, public ITcOCFCtrlImpl<CUDPCtrl, CUDPClassFactory>
{
public:
	CUDPCtrl();
	virtual ~CUDPCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_UDPCTRL)
DECLARE_NOT_AGGREGATABLE(CUDPCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CUDPCtrl)
	COM_INTERFACE_ENTRY(IUDPCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __UDPCTRL_H__
