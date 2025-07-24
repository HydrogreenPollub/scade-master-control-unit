/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** Command: swan_cg.exe config.json -student
*************************************************************$ */
#ifndef SWAN_CheckProtiumAnomalies_Main_H_
#define SWAN_CheckProtiumAnomalies_Main_H_

#include "swan_types.h"
#include "ConditionLeakVoltage_Main.h"

typedef struct Ctx_CheckProtiumAnomalies_Main {
  swan_bool isAbnormal;
  outC_ConditionLeakVoltage_Main Ctx_1ConditionLeakVoltage;
} outC_CheckProtiumAnomalies_Main;


extern void CheckProtiumAnomalies_Main(
  swan_uint16 hydrogenLeakVoltageRaw,
  outC_CheckProtiumAnomalies_Main *outC);

#ifndef SWAN_NO_EXTERN_CALL_TO_RESET
extern void CheckProtiumAnomalies_reset_Main(
  outC_CheckProtiumAnomalies_Main *outC);
#endif /* SWAN_NO_EXTERN_CALL_TO_RESET */

#ifndef SWAN_USER_DEFINED_INIT
extern void CheckProtiumAnomalies_init_Main(
  outC_CheckProtiumAnomalies_Main *outC);
#endif /* SWAN_USER_DEFINED_INIT */



#endif /* SWAN_CheckProtiumAnomalies_Main_H_ */
/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** CheckProtiumAnomalies_Main.h
*************************************************************$ */
