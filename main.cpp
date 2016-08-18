#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    while(1) {
        myled = 1; // LED is ON
        wait(1); // 200 ms
        myled = 0; // LED is OFF
        wait(3); // 1 sec
    }
}
