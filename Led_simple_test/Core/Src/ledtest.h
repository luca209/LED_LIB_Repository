/*
 * ledtest.h
 *
 *  Created on: Feb 8, 2022
 *      Author: llelie
 */

#ifndef SRC_LEDTEST_H_
#define SRC_LEDTEST_H_

#include "stdint.h"
#include <stdbool.h>

#define NUMBER_OF_REPETITONS 3
#define ON  true
#define OFF false

enum flash_light_states{
	A=0,
	B,
	C
};

typedef struct{
	int flashDuration; //duartion Light off or light on
	bool output;			// output enable (1) or disable (0)
}flash_pattern_t;

//function test

void load_flash_pattern(uint8_t state);
void load_p (void);
void init_flash(void);


#endif /* SRC_LEDTEST_H_ */
