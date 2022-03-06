#pragma once
#include "CDeviceObjectBase.h"
class CFan :
    public CDeviceObjectBase
{
    int m_NoOfleaf;
public:
    CFan();
    virtual ~CFan();
    void Start();
};

