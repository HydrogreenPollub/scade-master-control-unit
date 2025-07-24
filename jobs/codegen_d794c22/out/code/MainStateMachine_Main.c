/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** Command: swan_cg.exe config.json -student
*************************************************************$ */
#include "swan_consts.h"
#include "swan_sensors.h"
#include "MainStateMachine_Main.h"


void MainStateMachine_Main(
  swan_bool hasStartButtonTriggered,
  swan_bool isProtiumBehavingAbnormal,
  outC_MainStateMachine_Main *outC)
{
  SSM_ST_mainAutomaton x1;
  swan_bool x2;

  x1 = outC->mem3;
  outC->mem2 = swan_false;
  switch (x1) {
    case SSM_st_Shutdown_mainAutomaton :
      outC->shouldProtiumRun = swan_false;
      x2 = hasStartButtonTriggered;
      outC->mem1 = x2;
      if (x2) {
        outC->mem3 = SSM_st_Running_mainAutomaton;
      }
      else {
        outC->mem3 = SSM_st_Shutdown_mainAutomaton;
      }
      break;
    case SSM_st_Idle_mainAutomaton :
      outC->shouldProtiumRun = swan_false;
      outC->mem1 = swan_true;
      outC->mem3 = SSM_st_Running_mainAutomaton;
      break;
    case SSM_st_Failure_mainAutomaton :
      outC->shouldProtiumRun = swan_false;
      outC->mem1 = swan_false;
      outC->mem3 = SSM_st_Failure_mainAutomaton;
      break;
    case SSM_st_Running_mainAutomaton :
      outC->shouldProtiumRun = swan_true;
      outC->mem1 = swan_true;
      outC->mem3 = SSM_st_Failure_mainAutomaton;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef SWAN_USER_DEFINED_INIT
void MainStateMachine_init_Main(outC_MainStateMachine_Main *outC)
{
  outC->shouldProtiumRun = swan_false;
  outC->mem1 = swan_false;
  outC->mem2 = swan_false;
  outC->mem3 = SSM_st_Idle_mainAutomaton;
}
#endif /* SWAN_USER_DEFINED_INIT */


#ifndef SWAN_NO_EXTERN_CALL_TO_RESET
void MainStateMachine_reset_Main(outC_MainStateMachine_Main *outC)
{
  outC->mem1 = swan_false;
  outC->mem2 = swan_false;
  outC->mem3 = SSM_st_Idle_mainAutomaton;
}
#endif /* SWAN_NO_EXTERN_CALL_TO_RESET */



/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** MainStateMachine_Main.c
*************************************************************$ */
