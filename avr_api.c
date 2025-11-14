/*
 * Title: avr_api.c
 *  Created on: 8 de jul. de 2015
 *      Author: Ing. Damian Corbalan
 *
 *
 *   LICENCE
 *   Copyright (C) 2015 Damian Corbalan
 *
 *	 This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 3 of the License, or
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *
 *
 */

#include "avr_api.h"


/* Simple framework init: can be expanded to init peripherals */
void avr_init(void) {
    /* Initialize common drivers */
    adc_init();
    pwm_init();
    /* GPIO init if needed: configure PF0 as input (ADC0)
       To enable, uncomment and adapt GpioInitStructure_AVR usage */
    // GpioInitStructure_AVR g; g.port = avr_GPIO_F; g.pines = (1<<0); g.modo = avr_GPIO_mode_Input; init_gpio(g);
}
