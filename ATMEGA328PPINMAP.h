#ifndef ATMEGA328PPINMAP_H
#define ATMEGA328PPINMAP_H
// Digital Pins
constexpr uint8_t PIN_PD0 = 0;   // Digital Pin 0 (Port D, Pin 0) - RXD
constexpr uint8_t PIN_PD1 = 1;   // Digital Pin 1 (Port D, Pin 1) - TXD
constexpr uint8_t PIN_PD2 = 2;   // Digital Pin 2 (Port D, Pin 2) - INT0
constexpr uint8_t PIN_PD3 = 3;   // Digital Pin 3 (Port D, Pin 3) - INT1
constexpr uint8_t PIN_PD4 = 4;   // Digital Pin 4 (Port D, Pin 4)
constexpr uint8_t PIN_PD5 = 5;   // Digital Pin 5 (Port D, Pin 5)
constexpr uint8_t PIN_PD6 = 6;   // Digital Pin 6 (Port D, Pin 6)
constexpr uint8_t PIN_PD7 = 7;   // Digital Pin 7 (Port D, Pin 7)

constexpr uint8_t PIN_PB0 = 8;   // Digital Pin 8 (Port B, Pin 0) - CLK0
constexpr uint8_t PIN_PB1 = 9;   // Digital Pin 9 (Port B, Pin 1) - CLK1
constexpr uint8_t PIN_PB2 = 10;  // Digital Pin 10 (Port B, Pin 2) - SS
constexpr uint8_t PIN_PB3 = 11;  // Digital Pin 11 (Port B, Pin 3) - MOSI
constexpr uint8_t PIN_PB4 = 12;  // Digital Pin 12 (Port B, Pin 4) - MISO
constexpr uint8_t PIN_PB5 = 13;  // Digital Pin 13 (Port B, Pin 5) - SCK

// Analog Pins
constexpr uint8_t PIN_PC0 = 14;  // Analog Pin 0 (Port C, Pin 0) - ADC0
constexpr uint8_t PIN_PC1 = 15;  // Analog Pin 1 (Port C, Pin 1) - ADC1
constexpr uint8_t PIN_PC2 = 16;  // Analog Pin 2 (Port C, Pin 2) - ADC2
constexpr uint8_t PIN_PC3 = 17;  // Analog Pin 3 (Port C, Pin 3) - ADC3
constexpr uint8_t PIN_PC4 = 18;  // Analog Pin 4 (Port C, Pin 4) - ADC4, SDA
constexpr uint8_t PIN_PC5 = 19;  // Analog Pin 5 (Port C, Pin 5) - ADC5, SCL
constexpr uint8_t PIN_PC6 = 20;  // Reset Pin (Port C, Pin 6) - RESET

#endif // ATMEGA328PPINMAP_H