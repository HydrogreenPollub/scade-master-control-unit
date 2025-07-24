/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** Command: swan_cg.exe config.json -student
*************************************************************$ */
#include "swan_consts.h"
#include "swan_sensors.h"
#include "CheckProtiumAnomalies_Main.h"


void CheckProtiumAnomalies_Main(
  swan_uint16 hydrogenLeakVoltageRaw,
  outC_CheckProtiumAnomalies_Main *outC)
{
  swan_float32 x1;

  ConditionLeakVoltage_Main(
    hydrogenLeakVoltageRaw,
    &outC->Ctx_1ConditionLeakVoltage);
  x1 = outC->Ctx_1ConditionLeakVoltage.result;
  outC->isAbnormal = x1 >= HydrogenLeakVoltageMaximum_Main;
}

#ifndef SWAN_USER_DEFINED_INIT
void CheckProtiumAnomalies_init_Main(outC_CheckProtiumAnomalies_Main *outC)
{
  outC->isAbnormal = swan_false;
  ConditionLeakVoltage_init_Main(&outC->Ctx_1ConditionLeakVoltage);
}
#endif /* SWAN_USER_DEFINED_INIT */


#ifndef SWAN_NO_EXTERN_CALL_TO_RESET
void CheckProtiumAnomalies_reset_Main(outC_CheckProtiumAnomalies_Main *outC)
{
  ConditionLeakVoltage_reset_Main(&outC->Ctx_1ConditionLeakVoltage);
}
#endif /* SWAN_NO_EXTERN_CALL_TO_RESET */



/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** CheckProtiumAnomalies_Main.c
*************************************************************$ */
