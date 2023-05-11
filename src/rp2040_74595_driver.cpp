#include "rp2040_74595_driver.hpp"


RS74595::RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin){
    this->SER_pin = SER_pin;
    this->RCLK_pin = RCLK_pin;
    this->SRCLK_pin = SRCLK_pin;
}

RS74595::RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin, int OE_pin, int SRCLR_pin){
    this->SER_pin = SER_pin;
    this->RCLK_pin = RCLK_pin;
    this->SRCLK_pin = SRCLK_pin;
}
RS74595::RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin, int SRCLR_pin){
    this->SER_pin = SER_pin;
    this->RCLK_pin = RCLK_pin;
    this->SRCLK_pin = SRCLK_pin;
}
RS74595::RS74595(uint8_t SER_pin, uint8_t RCLK_pin, uint8_t SRCLK_pin, int OE_pin){
    this->SER_pin = SER_pin;
    this->RCLK_pin = RCLK_pin;
    this->SRCLK_pin = SRCLK_pin;
}

void RS74595::write(uint8_t &data, int data_lengh){
    
}