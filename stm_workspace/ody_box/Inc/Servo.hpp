#ifndef SERVO_HPP
#define SERVO_HPP

#define MAX_SERVO 1000
#define MIN_SERVO 100

#include "stm32wbxx_hal.h"

class Servo{
public:
	Servo(TIM_HandleTypeDef *handle, uint32_t ch):htim(handle), channel(ch){}
	void setAngle(float angle){}
	void setPWM(uint16_t value){
		TIM_OC_InitTypeDef sConfigOC;

		sConfigOC.OCMode = TIM_OCMODE_PWM1;
		sConfigOC.Pulse = value;
		sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
		sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
		HAL_TIM_PWM_ConfigChannel(htim, &sConfigOC, channel);
		HAL_TIM_PWM_Start(htim, channel);
	}
private:
	TIM_HandleTypeDef *htim;
	uint32_t channel;
};

#endif
