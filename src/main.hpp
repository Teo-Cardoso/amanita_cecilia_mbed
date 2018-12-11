#include <mbed.h>

// Robot Struct
const float WHEELS_RADIUS = 0.05;
const float LENGHT_WHEELS = 0.12;

// Robot Monster Shield Pins
// Left Motor
const PinName L_ENABLE  = A0;
const PinName L_PWM     = D5;
const PinName L_CW      = D7;
const PinName L_CCW     = D8;
// Right Motor
const PinName R_ENABLE  = A1;
const PinName R_PWM     = D6;
const PinName R_CW      = D4;
const PinName R_CCW     = D9;

// Robot Encoder Pins
// Left Wheel
const PinName L_PHASE_A = D2;
const PinName L_PHASE_B = D3;
// Right Wheel
const PinName R_PHASE_A = D10;
const PinName R_PHASE_B = D11;
// Robot Encoder Settings
// Left Wheel
const int L_RESOLUTION = 300;
// Right Wheel
const int R_RESOLUTION = 300;

// Robot PID Consts
// Left Motor
const float L_KP = 1, L_KI = 0, L_KD = 0;
// Right Motor
const float R_KP = 1, R_KI = 0, R_KD = 0;

// Update
const float RATE_MS = 150;
const float RATE = RATE_MS/1000;