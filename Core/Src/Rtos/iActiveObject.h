/*
 * Created on Fri Oct 26 2022
 * Author: Sergey Zygin
 * Copyright (c) 2022 ZNAutomation
 */

#ifndef __I_ACTIVE_OBJECT_H__
#define __I_ACTIVE_OBJECT_H__

#include "cmsis_os.h"

class iActiveObject {
public:
	virtual void run(void) = 0;
    char *taskName;
    uint32_t stack_size = 64 * 4;
    osThreadId_t taskHandle;
    virtual ~iActiveObject(){};
};

#endif