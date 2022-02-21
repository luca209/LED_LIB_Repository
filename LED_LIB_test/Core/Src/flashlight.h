/*
 * flashlight.h
 *
 *  Created on: Feb 7, 2022
 *      Author: llelie
 */

#ifndef SRC_FLASHLIGHT_H_
#define SRC_FLASHLIGHT_H_

#include <stdbool.h>
#include <stdint.h>


#define NUMBER_OF_REPETITIONS 3
#define LOAD_MS(x) (x*TIMERCONST)
#define TIMERCONST 0.001  // to do: richtige Timerkonstante aufstellen
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


/*
flash_pattern_t a = {20000-1, ON};
flash_pattern_t b = {40000-1, OFF};
flash_pattern_t c = {60000-1, OFF};
*/
//flash_pattern_t* flashPattern[5] = {&a, &b, &c};

//public functions
void init_flashlight(void);
void load_flash_pattern(uint8_t state);
void turn(bool output);


#endif /* SRC_FLASHLIGHT_H_ */
