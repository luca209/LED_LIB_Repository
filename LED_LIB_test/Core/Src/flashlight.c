/*
 * flashlight.c
 *
 *  Created on: Feb 7, 2022
 *      Author: llelie
 */

#include "flashlight.h"
#include <stdbool.h>
#include "stdint.h"
#include "main.h"


//global variables
extern volatile uint16_t Period;
extern volatile uint8_t repetitionCounter;
extern volatile uint8_t activeState;
extern volatile uint8_t state;
bool flashlight;



void turn (bool output){
				if (output == ON)
				{
					HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
				}

			}

void load_flash_pattern(uint8_t state){
				Period = flashPattern[state]->flashDuration;
				flashlight = flashPattern[state]->output;
				return;
			}  //Fehlermeldung: undefined reference to 'Period'


void init_flashlight(void){

				  repetitionCounter = 0;
				  //flashlight = OFF;
				  activeState = A;
				  load_flash_pattern(A);
				  turn(flashlight);


			}


