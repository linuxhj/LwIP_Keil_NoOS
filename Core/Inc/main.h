/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal.h"

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
#define FEED_DOG_Pin GPIO_PIN_8
#define FEED_DOG_GPIO_Port GPIOI
#define ETH_RST_Pin GPIO_PIN_0
#define ETH_RST_GPIO_Port GPIOA
#define AC_IN_Pin GPIO_PIN_4
#define AC_IN_GPIO_Port GPIOA
#define BAT_EN_Pin GPIO_PIN_6
#define BAT_EN_GPIO_Port GPIOA
#define TEMP_SDA_Pin GPIO_PIN_12
#define TEMP_SDA_GPIO_Port GPIOB
#define TEMP_SCL_Pin GPIO_PIN_13
#define TEMP_SCL_GPIO_Port GPIOB
#define BAT_FULL_Pin GPIO_PIN_14
#define BAT_FULL_GPIO_Port GPIOB
#define BKT_PWR_CTRL_Pin GPIO_PIN_15
#define BKT_PWR_CTRL_GPIO_Port GPIOB
#define TEMP_SEL_Pin GPIO_PIN_11
#define TEMP_SEL_GPIO_Port GPIOD
#define TEMP_S0_Pin GPIO_PIN_12
#define TEMP_S0_GPIO_Port GPIOD
#define TEMP_S1_Pin GPIO_PIN_13
#define TEMP_S1_GPIO_Port GPIOD
#define WTN_SDA_Pin GPIO_PIN_6
#define WTN_SDA_GPIO_Port GPIOC
#define WTN_SCL_Pin GPIO_PIN_7
#define WTN_SCL_GPIO_Port GPIOC
#define WTN_BUSY_Pin GPIO_PIN_8
#define WTN_BUSY_GPIO_Port GPIOC
#define KEY_CODEB_Pin GPIO_PIN_9
#define KEY_CODEB_GPIO_Port GPIOC
#define PWR_EN_Pin GPIO_PIN_11
#define PWR_EN_GPIO_Port GPIOA
#define ENTER_KEY_Pin GPIO_PIN_12
#define ENTER_KEY_GPIO_Port GPIOA
#define LCD_BIAS_EN_Pin GPIO_PIN_15
#define LCD_BIAS_EN_GPIO_Port GPIOA
#define KEY_UP_Pin GPIO_PIN_2
#define KEY_UP_GPIO_Port GPIOD
#define KEY_DN_Pin GPIO_PIN_3
#define KEY_DN_GPIO_Port GPIOD
#define KEY_PAUSE_Pin GPIO_PIN_4
#define KEY_PAUSE_GPIO_Port GPIOD
#define LCD_RST_Pin GPIO_PIN_5
#define LCD_RST_GPIO_Port GPIOD
#define PWR_KEY_Pin GPIO_PIN_10
#define PWR_KEY_GPIO_Port GPIOG
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
