#include "pwm_driver.h"
#include "avr_api.h"

void pwm_init(void)
{
    DDRB |= (1 << PB4);  // salida PWM

    TCCR0 = (1 << WGM00) | (1 << WGM01) |   // Fast PWM
            (1 << COM01) |                 // salida en OC0
            (1 << CS01);                   // prescaler clk/8
}

void pwm_set(uint8_t valor)
{
    OCR0 = valor;
}
