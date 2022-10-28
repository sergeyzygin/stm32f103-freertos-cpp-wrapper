/*
 * Created on Fri Oct 28 2022
 * Author: Sergey Zygin
 * Copyright (c) 2022 ZNAutomation
 */

#ifndef __MY_TASK_H__
#define __MY_TASK_H__

#include "iActiveObject.h"

class MyTask : public iActiveObject{
    public:
    virtual void run(void) override;
    virtual ~MyTask(){};
};

#endif