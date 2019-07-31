#ifndef FACE1_HPP
#define FACE1_HPP

#include "stm32wbxx_hal.h"
#include "Enigma.hpp"

class Face1 : public Enigma{
public:
	Face1(SPI_HandleTypeDef* hspi, int nb):Enigma(hspi, nb){}
	~Face1(){}
	void Init();
	void UpdateIn();
	void StateOut();

	void interrupt_callback(uint16_t GPIO_Pin);
private:
};

#endif
