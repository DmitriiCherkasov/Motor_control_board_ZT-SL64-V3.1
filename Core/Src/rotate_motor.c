/*
 * rotate_motor.c
 *
 *  Created on: Sep 27, 2023
 *      Author: vyrte
 */

#include "rotate_motor.h"
#include <stdio.h>

void rotate_motor(uint8_t cell){
	set_start_position();
	set_row(cell / 10);
	set_column(cell % 10);
}

void set_row(uint8_t row){
	switch(row){
	case(0):
	case(1):
	//	case(1): there is no such row in the vending machine
		HAL_GPIO_WritePin(I1_U6_GPIO_Port, I1_U6_Pin, GPIO_PIN_RESET);
		break;
	case(2):
		HAL_GPIO_WritePin(I2_U6_GPIO_Port, I2_U6_Pin, GPIO_PIN_RESET);
		break;
	case(3):
		HAL_GPIO_WritePin(I3_U6_GPIO_Port, I3_U6_Pin, GPIO_PIN_RESET);
		break;
	case(4):
		HAL_GPIO_WritePin(I4_U6_GPIO_Port, I4_U6_Pin, GPIO_PIN_RESET);
		break;
	case(5):
		HAL_GPIO_WritePin(I5_U6_GPIO_Port, I5_U6_Pin, GPIO_PIN_RESET);
		break;
	case(6):
		HAL_GPIO_WritePin(I6_U6_GPIO_Port, I6_U6_Pin, GPIO_PIN_RESET);
		break;
	case(7):
		HAL_GPIO_WritePin(I7_U6_GPIO_Port, I7_U6_Pin, GPIO_PIN_RESET);
		break;
	case(8):
		HAL_GPIO_WritePin(Q9_H8_GPIO_Port, Q9_H8_Pin, GPIO_PIN_RESET);
		break;

	}
}

void set_column(uint8_t column){
	switch(column){
	case(1):
		HAL_GPIO_WritePin(I1_U4_GPIO_Port, I1_U4_Pin, GPIO_PIN_SET);
		break;
	case(2):
		HAL_GPIO_WritePin(I2_U4_GPIO_Port, I2_U4_Pin, GPIO_PIN_SET);
		break;
	case(3):
		HAL_GPIO_WritePin(I3_U4_GPIO_Port, I3_U4_Pin, GPIO_PIN_SET);
		break;
	case(4):
		HAL_GPIO_WritePin(I4_U4_GPIO_Port, I4_U4_Pin, GPIO_PIN_SET);
		break;
	case(5):
		HAL_GPIO_WritePin(I5_U4_GPIO_Port, I5_U4_Pin, GPIO_PIN_SET);
		break;
	case(6):
		HAL_GPIO_WritePin(I6_U4_GPIO_Port, I6_U4_Pin, GPIO_PIN_SET);
		break;
	case(7):
		HAL_GPIO_WritePin(I7_U4_GPIO_Port, I7_U4_Pin, GPIO_PIN_SET);
		break;
	case(8):
		HAL_GPIO_WritePin(Q8_V8_GPIO_Port, Q8_V8_Pin, GPIO_PIN_SET);
		break;
	}
}

void set_start_position(){
	  HAL_GPIO_WritePin(GPIOB, I5_U4_Pin|I4_U4_Pin|I3_U4_Pin|I2_U4_Pin
	                          |I1_U4_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(GPIOB, Q9_H8_Pin|I7_U6_Pin|I6_U6_Pin|I5_U6_Pin
	                          |I4_U6_Pin|I3_U6_Pin|I2_U6_Pin|I1_U6_Pin, GPIO_PIN_SET);

}
