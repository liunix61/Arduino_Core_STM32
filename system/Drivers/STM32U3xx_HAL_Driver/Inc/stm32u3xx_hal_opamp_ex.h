/**
  ******************************************************************************
  * @file    stm32u3xx_hal_opamp_ex.h
  * @author  MCD Application Team
  * @brief   Header file of OPAMP HAL Extended module.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32U3xx_HAL_OPAMP_EX_H
#define STM32U3xx_HAL_OPAMP_EX_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u3xx_hal_def.h"

/** @addtogroup STM32U3xx_HAL_Driver
  * @{
  */

/** @addtogroup OPAMPEx
  * @{
  */
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
/** @addtogroup OPAMPEx_Exported_Functions OPAMPEx Exported Functions
  * @{
  */

#if defined(OPAMP2)
/* I/O operation functions  *****************************************************/
/** @addtogroup OPAMPEx_Exported_Functions_Group1 Extended Input and Output operation functions
  * @{
  */
HAL_StatusTypeDef HAL_OPAMPEx_SelfCalibrateAll(OPAMP_HandleTypeDef *hopamp1, OPAMP_HandleTypeDef *hopamp2);

/**
  * @}
  */
#endif /* OPAMP2 */

/* Peripheral Control functions  ************************************************/
/** @addtogroup OPAMPEx_Exported_Functions_Group2
  * @{
  */
HAL_StatusTypeDef HAL_OPAMPEx_Unlock(OPAMP_HandleTypeDef *hopamp);
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32U3xx_HAL_OPAMP_EX_H */
