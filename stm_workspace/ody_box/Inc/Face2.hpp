#ifndef FACE2_HPP
#define FACE2_HPP

#include "stm32wbxx_hal.h"
#include "Enigma.hpp"
#include "Servo.hpp"

class Face2 : public Enigma{
public:
	Face2(SPI_HandleTypeDef* hspi, TIM_HandleTypeDef* htim, int nb):Enigma(hspi, nb),arrow(htim,TIM_CHANNEL_1){}
	~Face2(){}
	void Init();
	void UpdateIn();
	void StateOut();

	Servo& getArrow(){return arrow;}

	void interrupt_callback(uint16_t GPIO_Pin);
private:
	bool buttons[2];
	Servo arrow;
};

#endif
