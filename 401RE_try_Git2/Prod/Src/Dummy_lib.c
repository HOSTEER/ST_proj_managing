#include "Dummy_lib.h"


/**
 *
 * @param htim pour spécifier le timer déclenchant une action
 */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM2){
		HAL_UART_Transmit(&huart2, (uint8_t *) "coucou\r\n", sizeof(uint8_t)*8, HAL_MAX_DELAY);
	}
}
