#ifndef BRILLO_CONTROL_H_
#define BRILLO_CONTROL_H_

#ifndef BRILLO_CONTROL_H
#define BRILLO_CONTROL_H

#include <stdint.h>

#define BRILLO_MIN 50
#define BRILLO_MED 150
#define BRILLO_MAX 255

uint8_t brillo_por_adc(uint16_t lectura);

#endif

#endif /* BRILLO_CONTROL_H_ */
