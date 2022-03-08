#include <stdio.h>

#define PI   3.14159

int main(){
    float wheelDiameter, motorRpm, wheelRpm, wheelSpeedinCmps,
         wheelSpeedinKmph, gearRatio, numTeethMotorGear, numTeethWheelGear;

    printf("Enter number of teeth in the motor gear: ");
    scanf("%f", &numTeethMotorGear);

    printf("Enter number of teeth in the wheel gear: ");
    scanf("%f", &numTeethWheelGear);

    printf("Enter wheel diameter (in cm): ");
    scanf("%f", &wheelDiameter);

    printf("Enter the motor speed as rotations per minute(rpm): ");
    scanf("%f", &motorRpm);

    if(numTeethMotorGear < numTeethWheelGear){
        gearRatio = (numTeethWheelGear / numTeethMotorGear);
        wheelRpm = motorRpm / gearRatio;
        printf("The gear ratio is %0.1f:1\n", gearRatio);
    } else if(numTeethMotorGear > numTeethWheelGear) {
        gearRatio = (numTeethMotorGear / numTeethWheelGear);
        wheelRpm = motorRpm * gearRatio;
        printf("The gear ratio is 1:%0.1f\n", gearRatio);
    } else {
        printf("Invalid Input\n");
    }

    printf("At a motor speed of %0.1f rpm, the speed of a %0.2f cm diameter wheel is %0.2f rpm.\n", motorRpm, wheelDiameter, wheelRpm);

    wheelSpeedinCmps = (wheelRpm / 60) * (PI * wheelDiameter);
    wheelSpeedinKmph = wheelSpeedinCmps * 0.036;

    printf("The wheel will move at %0.2f cm per second (i.e., %0.2f km/h)\n", wheelSpeedinCmps, wheelSpeedinKmph);

    return 0;
}
