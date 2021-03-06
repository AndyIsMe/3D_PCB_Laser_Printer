#ifndef _MOTORSTEP_H
#define _MOTORSTEP_H

#include "MotorController.h"
#include "step.h"
#include "UserConfig.h"
#include "stm32f1xx.h"

void DoMotorStepping(MotorInfo *MotorInfoTable[]);
void StepMotor(MotorInfo *motorInfo);
void SetAllmotorStep(MotorInfo *MotorInfoTable[]);
void checkCommandCompletion(MotorInfo *MotorInfoTable[],int state);
void configureMotorandStartTimer(void);
#endif // _MOTORSTEP_H
