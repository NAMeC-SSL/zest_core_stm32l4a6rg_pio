#include "mbed.h"

#define BLINKING_RATE 500ms

DigitalOut led(LED1);

int main() {
    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
