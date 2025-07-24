#include "swan_config.h"
#include "MainStateMachine_Main.h"

outC_MainStateMachine_Main stateMachineInstance_Main;

swan_float32 fuelCellVoltage_Main;
swan_bool hasStartButtonTriggered;
swan_bool isProtiumBehavingAbnormal;

swan_bool shouldProtiumRun;
swan_bool isFuelCellCorrect;


float get_sensor_value() {
    return 12.22;
}

swan_bool get_bool_value() {
    return swan_true;
}

int main() {
    MainStateMachine_init_Main(&stateMachineInstance_Main);

    while (1) {
        fuelCellVoltage_Main = get_sensor_value();
        hasStartButtonTriggered = get_bool_value();
        isProtiumBehavingAbnormal = get_bool_value();

        MainStateMachine_Main(
            hasStartButtonTriggered, 
            isProtiumBehavingAbnormal, 
            &stateMachineInstance_Main
        );

        shouldProtiumRun = stateMachineInstance_Main.shouldProtiumRun;
        isFuelCellCorrect = stateMachineInstance_Main.isFuelCellCorrect;
    }
}