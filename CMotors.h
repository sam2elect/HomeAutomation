#pragma once
#include "CDeviceObjectBase.h"
class CMotors :
    public CDeviceObjectBase
{
public:
    CMotors();
    virtual ~CMotors();
    void Start();
};

