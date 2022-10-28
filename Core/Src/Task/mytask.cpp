/*
 * Created on Fri Oct 28 2022
 * Author: Sergey Zygin
 * Copyright (c) 2022 ZNAutomation
 */


#include "mytask.h"
#include "main.h"
#include "cmsis_os.h"
#include "leddriver.h"

#define delay 500

void MyTask::run(void) {
	cLedDriver *cled = new cLedDriver();
	for (;;)
	{
		cled->ledOn();
		osDelay(delay);
		cled->ledOff();
		osDelay(delay);
	}
};


