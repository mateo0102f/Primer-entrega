#include "brillo_control.h"

#define ADC_SUBIR_A_MEDIO   410
#define ADC_BAJAR_A_MINIMO  250
#define ADC_SUBIR_A_MAXIMO  800
#define ADC_BAJAR_A_MEDIO   700

uint8_t brillo_por_adc(uint16_t lectura)
{
    static uint8_t estado = BRILLO_MIN;

    // MIN → MED
    if (estado == BRILLO_MIN && lectura >= ADC_SUBIR_A_MEDIO)
        estado = BRILLO_MED;

    // MED → MIN
    else if (estado == BRILLO_MED && lectura < ADC_BAJAR_A_MINIMO)
        estado = BRILLO_MIN;

    // MED → MAX
    if (estado == BRILLO_MED && lectura >= ADC_SUBIR_A_MAXIMO)
        estado = BRILLO_MAX;

    // MAX → MED
    else if (estado == BRILLO_MAX && lectura < ADC_BAJAR_A_MEDIO)
        estado = BRILLO_MED;

    return estado;
}
