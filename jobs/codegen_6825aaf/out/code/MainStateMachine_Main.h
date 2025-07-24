/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** Command: swan_cg.exe config.json -student
*************************************************************$ */
#ifndef SWAN_MainStateMachine_Main_H_
#define SWAN_MainStateMachine_Main_H_

#include "swan_types.h"

typedef struct Ctx_MainStateMachine_Main {
  swan_bool mem1;
  swan_bool mem2;
  SSM_ST_mainAutomaton mem3;
  swan_bool shouldProtiumRun;
  swan_bool isFuelCellCorrect;
} outC_MainStateMachine_Main;


extern void MainStateMachine_Main(
  swan_bool hasStartButtonTriggered,
  swan_bool isProtiumBehavingAbnormal,
  outC_MainStateMachine_Main *outC);

#ifndef SWAN_NO_EXTERN_CALL_TO_RESET
extern void MainStateMachine_reset_Main(outC_MainStateMachine_Main *outC);
#endif /* SWAN_NO_EXTERN_CALL_TO_RESET */

#ifndef SWAN_USER_DEFINED_INIT
extern void MainStateMachine_init_Main(outC_MainStateMachine_Main *outC);
#endif /* SWAN_USER_DEFINED_INIT */



#endif /* SWAN_MainStateMachine_Main_H_ */
/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** MainStateMachine_Main.h
*************************************************************$ */
