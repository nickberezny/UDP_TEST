///////////////////////////////////////////////////////////////////////////////
// Untitled1Services.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_Untitled1 = 0x3F000000;
#define SRVNAME_UNTITLED1 "Untitled1"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_Untitled1CModule1 = {0x74ad4a53,0xdb0b,0x4f47,{0x8b,0xcc,0xd4,0x0f,0x19,0x19,0x6a,0x5d}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_Module1Parameter = 0x00000001;
const PTCID PID_Module1udpProt = 0x00000002;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
#if !defined(_TC_TYPE_478C4436_6F33_4F6F_B4A8_88074B54DCD4_INCLUDED_)
#define _TC_TYPE_478C4436_6F33_4F6F_B4A8_88074B54DCD4_INCLUDED_
typedef ULONG ETYPE_VLAN_HEADER;
#endif // !defined(_TC_TYPE_478C4436_6F33_4F6F_B4A8_88074B54DCD4_INCLUDED_)

typedef struct _Module1Parameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} Module1Parameter, *PModule1Parameter;

typedef struct _Module1Inputs
{
	ULONG Value;
	ULONG Status;
	ULONG Data;
} Module1Inputs, *PModule1Inputs;

#pragma pack(push,1)
typedef struct _Module1Outputs
{
	ULONG Value;
	ULONG Control;
	ULONG Data;
	double F1;
	double F2;
	double F3;
	double T1;
	double count;
} Module1Outputs, *PModule1Outputs;
#pragma pack(pop)

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_Module1Inputs 0
#define ADI_Module1Outputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
#if !defined(_TC_IID_03010095_0000_0000_E000_000000000064_INCLUDED_)
#define _TC_IID_03010095_0000_0000_E000_000000000064_INCLUDED_
TCOM_DECL_INTERFACE("03010095-0000-0000-e000-000000000064", ITcIoUdpProtocolRecv)
#endif // !defined(_TC_IID_03010095_0000_0000_E000_000000000064_INCLUDED_)

#if !defined(_TC_IID_03010097_0000_0000_E000_000000000064_INCLUDED_)
#define _TC_IID_03010097_0000_0000_E000_000000000064_INCLUDED_
TCOM_DECL_INTERFACE("03010097-0000-0000-e000-000000000064", ITcIoUdpProtocol)
#endif // !defined(_TC_IID_03010097_0000_0000_E000_000000000064_INCLUDED_)

///</AutoGeneratedContent>

///<AutoGeneratedContent id="EventClasses">
///</AutoGeneratedContent>