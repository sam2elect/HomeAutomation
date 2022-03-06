#include "CHomeAutomation.h"

CHomeAutomation::CHomeAutomation()
{

}
CHomeAutomation::~CHomeAutomation()
{

}
void CHomeAutomation::StartDevice(DeviceType Type, int Index)
{
	switch (Type)
	{
	case fan:
		m_Fan[Index].Start();
		break;
	case tv:
		m_TV[Index].Start();
		break;
	case light:
		m_Light[Index].Start();
		break;
	case motors:
		m_Motors[Index].Start();
		break;
	default:
		break;
	}

}