/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define Q23_IN8_Pin GPIO_PIN_14
#define Q23_IN8_GPIO_Port GPIOC
#define Q23_IN8_EXTI_IRQn EXTI4_15_IRQn
#define Q1_U11_Pin GPIO_PIN_15
#define Q1_U11_GPIO_Port GPIOC
#define Q1_U11_EXTI_IRQn EXTI4_15_IRQn
#define Q2_U11_Pin GPIO_PIN_0
#define Q2_U11_GPIO_Port GPIOF
#define Q2_U11_EXTI_IRQn EXTI0_1_IRQn
#define Q3_U11_Pin GPIO_PIN_1
#define Q3_U11_GPIO_Port GPIOF
#define Q3_U11_EXTI_IRQn EXTI0_1_IRQn
#define Q4_U11_Pin GPIO_PIN_4
#define Q4_U11_GPIO_Port GPIOA
#define Q4_U11_EXTI_IRQn EXTI4_15_IRQn
#define Q5_U11_Pin GPIO_PIN_5
#define Q5_U11_GPIO_Port GPIOA
#define Q5_U11_EXTI_IRQn EXTI4_15_IRQn
#define Q7_U11_Pin GPIO_PIN_6
#define Q7_U11_GPIO_Port GPIOA
#define Q7_U11_EXTI_IRQn EXTI4_15_IRQn
#define Q6_U11_Pin GPIO_PIN_7
#define Q6_U11_GPIO_Port GPIOA
#define Q6_U11_EXTI_IRQn EXTI4_15_IRQn
#define Q9_H8_Pin GPIO_PIN_0
#define Q9_H8_GPIO_Port GPIOB
#define I7_U6_Pin GPIO_PIN_1
#define I7_U6_GPIO_Port GPIOB
#define I6_U6_Pin GPIO_PIN_2
#define I6_U6_GPIO_Port GPIOB
#define I5_U6_Pin GPIO_PIN_10
#define I5_U6_GPIO_Port GPIOB
#define I4_U6_Pin GPIO_PIN_11
#define I4_U6_GPIO_Port GPIOB
#define I3_U6_Pin GPIO_PIN_12
#define I3_U6_GPIO_Port GPIOB
#define I2_U6_Pin GPIO_PIN_13
#define I2_U6_GPIO_Port GPIOB
#define I1_U6_Pin GPIO_PIN_14
#define I1_U6_GPIO_Port GPIOB
#define Q8_V8_Pin GPIO_PIN_6
#define Q8_V8_GPIO_Port GPIOF
#define I7_U4_Pin GPIO_PIN_7
#define I7_U4_GPIO_Port GPIOF
#define I6_U4_Pin GPIO_PIN_15
#define I6_U4_GPIO_Port GPIOA
#define I5_U4_Pin GPIO_PIN_3
#define I5_U4_GPIO_Port GPIOB
#define I4_U4_Pin GPIO_PIN_4
#define I4_U4_GPIO_Port GPIOB
#define I3_U4_Pin GPIO_PIN_5
#define I3_U4_GPIO_Port GPIOB
#define I2_U4_Pin GPIO_PIN_6
#define I2_U4_GPIO_Port GPIOB
#define I1_U4_Pin GPIO_PIN_7
#define I1_U4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
