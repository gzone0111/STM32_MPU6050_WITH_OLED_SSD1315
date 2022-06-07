/**
  ******************************************************************************
  * @file    i2c.h
  * @brief   This file contains all the function prototypes for
  *          the i2c.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __I2C_H__
#define __I2C_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern I2C_HandleTypeDef hi2c1;
extern I2C_HandleTypeDef hi2c2;

/* USER CODE BEGIN Private defines */
#define MPU6050_CONFIG			0x1A
#define MPU6050_GYRO_CONFIG		0x1B
#define	MPU6050_ACCEL_CONFIG	0x1C
#define	MPU6050_SMPLRT_DIV		0x19
#define MPU6050_PWR_MGMT_1		0x6B

#define MPU6050_WHO_AM_I		0x75
#define	MPU_ADDRESS				0xD0

#define	MPU_ACCEL_XOUT_H		0x3B
#define	MPU_ACCEL_XOUT_L		0x3C
#define	MPU_ACCEL_YOUT_H		0x3D
#define	MPU_ACCEL_YOUT_L		0x3E
#define	MPU_ACCEL_ZOUT_H		0x3F
#define	MPU_ACCEL_ZOUT_L		0x40

#define	MPU_GYRO_XOUT_H			0x43
#define	MPU_GYRO_XOUT_L			0x44
#define	MPU_GYRO_YOUT_H			0x45
#define	MPU_GYRO_YOUT_L			0x46
#define	MPU_GYRO_ZOUT_H			0x47
#define	MPU_GYRO_ZOUT_L			0x48

#define MPU_TEMP_OUT_H			0x41
#define MPU_TEMP_OUT_L			0x42
/* USER CODE END Private defines */

void MX_I2C1_Init(void);
void MX_I2C2_Init(void);

/* USER CODE BEGIN Prototypes */
uint8_t HALIIC_WriteByteToSlave(uint8_t I2C_Addr,uint8_t reg,uint8_t data);
uint8_t HALIIC_ReadByteFromSlave(uint8_t I2C_Addr,uint8_t reg,uint8_t *buf);
uint8_t HALIIC_ReadMultByteFromSlave(uint8_t dev, uint8_t reg, uint8_t length, uint8_t *data);
uint8_t HALIIC_WriteMultByteToSlave(uint8_t dev, uint8_t reg, uint8_t length, uint8_t* data);
int16_t MPU6050_GET_DATA(uint8_t regAddr);
void MPU6050_INIT();
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __I2C_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
