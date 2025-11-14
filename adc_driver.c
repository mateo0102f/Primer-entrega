#include "adc_driver.h"
#include "avr_api.h"

void adc_init(void)
{
    ADMUX = (1 << REFS0);              
    ADCSRA = (1 << ADEN) |
             (1 << ADPS2) | (1 << ADPS1); 
}

uint16_t adc_read(uint8_t canal)
{
    ADMUX = (ADMUX & 0xF0) | (canal & 0x0F);

    ADCSRA |= (1 << ADSC);
    while (ADCSRA & (1 << ADSC));

    return ADC;
}
