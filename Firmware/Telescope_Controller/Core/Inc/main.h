/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32f7xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DEC_MOTOR_DIR_Pin GPIO_PIN_9
#define DEC_MOTOR_DIR_GPIO_Port GPIOF
#define DEC_MOTOR_STEP_Pin GPIO_PIN_3
#define DEC_MOTOR_STEP_GPIO_Port GPIOA
#define WIFI_SPI_SCK_Pin GPIO_PIN_5
#define WIFI_SPI_SCK_GPIO_Port GPIOA
#define WIFI_SPI_MISO_Pin GPIO_PIN_6
#define WIFI_SPI_MISO_GPIO_Port GPIOA
#define WIFI_SPI_MOSI_Pin GPIO_PIN_7
#define WIFI_SPI_MOSI_GPIO_Port GPIOA
#define USER_LED_GREEN_Pin GPIO_PIN_0
#define USER_LED_GREEN_GPIO_Port GPIOB
#define DEC_MOTOR_DIAG_Pin GPIO_PIN_0
#define DEC_MOTOR_DIAG_GPIO_Port GPIOG
#define DEC_MOTOR_DIAG_EXTI_IRQn EXTI0_IRQn
#define DEC_MOTOR_EN_Pin GPIO_PIN_1
#define DEC_MOTOR_EN_GPIO_Port GPIOG
#define WIFI_BOOT_Pin GPIO_PIN_9
#define WIFI_BOOT_GPIO_Port GPIOE
#define WIFI_CHIP_EN_Pin GPIO_PIN_11
#define WIFI_CHIP_EN_GPIO_Port GPIOE
#define WIFI_SPI_RDY_Pin GPIO_PIN_13
#define WIFI_SPI_RDY_GPIO_Port GPIOE
#define WIFI_SPI_RDY_EXTI_IRQn EXTI15_10_IRQn
#define RA_MOTOR_STEP_Pin GPIO_PIN_10
#define RA_MOTOR_STEP_GPIO_Port GPIOB
#define RA_MOTOR_DIR_Pin GPIO_PIN_11
#define RA_MOTOR_DIR_GPIO_Port GPIOB
#define USER_LED_RED_Pin GPIO_PIN_14
#define USER_LED_RED_GPIO_Port GPIOB
#define ST_LINK_VCOM_TX_Pin GPIO_PIN_8
#define ST_LINK_VCOM_TX_GPIO_Port GPIOD
#define ST_LINK_VCOM_RX_Pin GPIO_PIN_9
#define ST_LINK_VCOM_RX_GPIO_Port GPIOD
#define WIFI_SPI_CS_Pin GPIO_PIN_14
#define WIFI_SPI_CS_GPIO_Port GPIOD
#define RA_MOTOR_DIAG_Pin GPIO_PIN_1
#define RA_MOTOR_DIAG_GPIO_Port GPIOD
#define RA_MOTOR_DIAG_EXTI_IRQn EXTI1_IRQn
#define WIFI_UART_RX_Pin GPIO_PIN_9
#define WIFI_UART_RX_GPIO_Port GPIOG
#define WIFI_UART_TX_Pin GPIO_PIN_14
#define WIFI_UART_TX_GPIO_Port GPIOG
#define USER_LED_BLUE_Pin GPIO_PIN_7
#define USER_LED_BLUE_GPIO_Port GPIOB
#define MOTOR_UART_RX_Pin GPIO_PIN_8
#define MOTOR_UART_RX_GPIO_Port GPIOB
#define MOTOR_UART_TX_Pin GPIO_PIN_9
#define MOTOR_UART_TX_GPIO_Port GPIOB
#define RA_MOTOR_EN_Pin GPIO_PIN_0
#define RA_MOTOR_EN_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
