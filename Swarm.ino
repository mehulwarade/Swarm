#include "mbed.h"
#include "ultrasonic.h"

DigitalOut led1(LED1);
DigitalOut ledL(p19);
DigitalOut ledM(p18);
DigitalOut ledR(p17);

void distL(int distance){
    if(distance < 100){
        ledL = 1;
        }
    else{
        ledL = 0;
        }
    
}
void distM(int distance){
    if(distance < 100){
        ledM = 1;
        }
    else{
        ledM = 0;
        }
    
 }
void distR(int distance){
  if(distance < 100){
        ledR = 1;
        }
    else{
        ledR = 0;
        }
    
 }
ultrasonic sensorL(p25,p7,0.1,1, &distL);
ultrasonic sensorM(p24,p8,0.1,1, &distM);
ultrasonic sensorR(p23,p9,0.1,1, &distR);

int main() {
 sensorL.startUpdates();
 sensorM.startUpdates();
  sensorR.startUpdates();
    while(1) {
        sensorL.checkDistance();
        sensorM.checkDistance();
        sensorR.checkDistance();
       
    }
}
