#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_

#ifndef ADC_DRIVER_H
#define ADC_DRIVER_H

#include <stdint.h>

void adc_init(void);
uint16_t adc_read(uint8_t canal);

#endif

#endif /* ADC_DRIVER_H_ */
