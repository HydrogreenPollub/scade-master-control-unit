/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** Command: swan_cg.exe config.json -student
*************************************************************$ */
#include "swan_consts.h"
#include "swan_sensors.h"
#include "ConditionLeakVoltage_Main.h"


void ConditionLeakVoltage_Main(
  swan_uint16 voltage,
  outC_ConditionLeakVoltage_Main *outC)
{
  outC->result = (swan_float32) voltage;
}

#ifndef SWAN_USER_DEFINED_INIT
void ConditionLeakVoltage_init_Main(outC_ConditionLeakVoltage_Main *outC)
{
  outC->result = swan_lit_float32(0.0);
}
#endif /* SWAN_USER_DEFINED_INIT */


#ifndef SWAN_NO_EXTERN_CALL_TO_RESET
void ConditionLeakVoltage_reset_Main(outC_ConditionLeakVoltage_Main *outC)
{
}
#endif /* SWAN_NO_EXTERN_CALL_TO_RESET */



/* $ Ansys Scade One - Swan Code Generator - Version 2.2.1 - Build 0016 
** ConditionLeakVoltage_Main.c
*************************************************************$ */
