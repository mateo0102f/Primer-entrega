#include "avr_api.h"
#include "adc_driver.h"
#include "pwm_driver.h"

#include "brillo_control.h"

int main(void)
{
    // Inicialización 
    avr_init();

    // ADC
    adc_init();

    // PWM 
    pwm_init();

    while (1)
    {
        uint16_t lectura = adc_read(0);        // ADC0
        uint8_t brillo = brillo_por_adc(lectura);
        pwm_set(brillo);     // salida OC0 (PB4)
    }
}
