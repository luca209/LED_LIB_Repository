/*
 * flashlight.c
 *
 *  Created on: Feb 7, 2022
 *      Author: llelie
 */


#include <stdbool.h>
#include <stdint.h>
#include <main.h>
#include "flashlight.h"



//global variables
volatile uint16_t Period;
volatile uint8_t repetitionCounter;
volatile uint8_t activeState;
volatile uint8_t state;
bool flashlight;

static flash_pattern_t flashPattern[] = {
		{20000-1, ON},
		{40000-1, ON},
		{60000-1, OFF},
};



void turn (bool output){
				if (output == ON)
				{
					HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
				}

			}

void load_flash_pattern(uint8_t state){
				Period = flashPattern[state].flashDuration;
				flashlight = flashPattern[state].output;
				return;
			}  //Fehlermeldung: undefined reference to 'Period'


void init_flashlight(void){


				  repetitionCounter = 0;
				  //flashlight = OFF;
				  activeState = A;
				  load_flash_pattern(A);
				  turn(flashlight);


			}


