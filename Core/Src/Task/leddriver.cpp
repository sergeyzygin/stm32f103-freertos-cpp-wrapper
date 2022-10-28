/*
 * Created on Fri Oct 28 2022
 * Author: Sergey Zygin
 * Copyright (c) 2022 ZNAutomation
 */

#include "leddriver.h"
#include "main.h"

void cLedDriver::ledOn(void){
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}

void cLedDriver::ledOff(void){
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);

}
