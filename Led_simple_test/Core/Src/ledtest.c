/*
 * ledtest.c
 *
 *  Created on: Feb 8, 2022
 *      Author: llelie
 */
#include <stdint.h>
#include <stdbool.h>
#include <main.h>
#include "ledtest.h"

volatile uint8_t repetitionCounter;
volatile uint16_t Period;
volatile bool flash;
volatile uint8_t activeState;
volatile uint8_t state;

static flash_pattern_t flashPattern[] = {
		{1000-1, ON},
		{2000-1, OFF},
		{10000-1, OFF},
};

void load_flash_pattern(uint8_t state){
				Period = flashPattern[state].flashDuration;
				flash = flashPattern[state].output;
				return;
			}


void turn (bool output){
				if (output == true)
				{
					HAL_GPIO_WritePin(GPIOC, P_0_Pin, GPIO_PIN_SET);
				}else{
					HAL_GPIO_WritePin(GPIOC, P_0_Pin, GPIO_PIN_RESET);
					}
			}

void init_flash(void){

				  activeState = A;
				  load_flash_pattern(A);

			}
