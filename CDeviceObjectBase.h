#pragma once
class CDeviceObjectBase
{
public :
	virtual void Stop();
	virtual void Start();
	virtual void Initialize();
	CDeviceObjectBase();
	virtual ~CDeviceObjectBase();
};

