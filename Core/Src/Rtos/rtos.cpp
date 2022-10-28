/*
 * Created on Fri Oct 26 2022
 * Author: Sergey Zygin
 * Copyright (c) 2022 ZNAutomation
 */

#include "rtos.h"
#include "cmsis_os.h"
#include "stdio.h"

void StartTask(void *arguments){
  iActiveObject* pObject = static_cast<iActiveObject*>(arguments);
  pObject->run();
}

void cRtos::startTask(iActiveObject* task){
    const osThreadAttr_t defaultTask_attributes = {
        .name = task->taskName,
        .stack_size = task->stack_size,
        .priority = (osPriority_t) osPriorityNormal
      };
    osThreadId_t taskid = osThreadNew(StartTask, task, &defaultTask_attributes);
};
