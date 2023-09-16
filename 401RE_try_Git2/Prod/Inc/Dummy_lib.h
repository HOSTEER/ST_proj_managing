#include "main.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/**
 *
 * @param htim pour spécifier le timer déclenchant une action
 */

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
