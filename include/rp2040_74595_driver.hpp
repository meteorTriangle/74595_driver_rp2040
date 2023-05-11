#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

class RS74595 {
    public:
        RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin);
        RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin, int OE_pin, int SRCLR_pin);
        RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin, int SRCLR_pin);
        RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin, int OE_pin);
        void write(uint8_t &data, int data_lengh);
        void clearRS();
    private:
        int OE_pin = -1;
        int SRCLR_pin = -1;
        uint8_t SER_pin;
        uint8_t RCLK_pin;
        uint8_t SRCLK_pin;

};