#pragma once
#include "CFan.h"
#include "CTV.h"
#include "CLight.h"
#include "CMotors.h"

enum DeviceType
{
	fan, 
	tv, 
	light, 
	motors
};
class CHomeAutomation
{
	CFan      m_Fan[4];
	CTV       m_TV[2];
	CLight    m_Light[24];
	CMotors   m_Motors[2];
public:
	void StartDevice(DeviceType Type, int Index);
	CHomeAutomation();
	virtual ~CHomeAutomation();
};


