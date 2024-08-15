#include <LedControl.h>

int DIN = 12;
int CS =  11;
int CLK = 10;
LedControl lc = LedControl(DIN, CLK, CS, 0);

byte circle[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00111100,
    B01000010,
    B00111100,
    B00000000,
    B00000000
};

byte line[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B01111110,
    B00000000,
    B00000000
};

void setup() {
    lc.shutdown(0, false);       
    lc.setIntensity(0, 15);      
}

void loop() { 
    for (int i = 0; i <= 7; i++) {
        lc.setRow(0, i, circle[i]);
    }
    delay(100);
    for (int i = 0; i <= 7; i++) {
        lc.setRow(0, i, line[i]);
    }
    delay(100);
}


