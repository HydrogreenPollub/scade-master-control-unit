/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** Command: swan_cg.exe config.json -student
*************************************************************$ */
#ifndef SWAN_ConditionLeakVoltage_Main_H_
#define SWAN_ConditionLeakVoltage_Main_H_

#include "swan_types.h"

typedef struct Ctx_ConditionLeakVoltage_Main {
  swan_float32 result;
} outC_ConditionLeakVoltage_Main;


extern void ConditionLeakVoltage_Main(
  swan_uint16 voltage,
  outC_ConditionLeakVoltage_Main *outC);

#ifndef SWAN_NO_EXTERN_CALL_TO_RESET
extern void ConditionLeakVoltage_reset_Main(
  outC_ConditionLeakVoltage_Main *outC);
#endif /* SWAN_NO_EXTERN_CALL_TO_RESET */

#ifndef SWAN_USER_DEFINED_INIT
extern void ConditionLeakVoltage_init_Main(
  outC_ConditionLeakVoltage_Main *outC);
#endif /* SWAN_USER_DEFINED_INIT */



#endif /* SWAN_ConditionLeakVoltage_Main_H_ */
/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** ConditionLeakVoltage_Main.h
*************************************************************$ */
