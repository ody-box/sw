#ifndef ENIGMA_HPP
#define ENIGMA_HPP

#include "stm32wbxx_hal.h"
#include "AS1105.hpp"

class Enigma{
public:
	Enigma(int n) : ledControl(n){}
	Enigma(SPI_HandleTypeDef* hspi, int n) : ledControl(hspi, n){}
	virtual ~Enigma(){}
	virtual void Init(){ledControl.init();}
	virtual void UpdateIn(){}
	virtual void StateOut(){}

	AS1105& getLED(){return ledControl;}

	virtual void interrupt_callback(uint16_t GPIO_Pin){}
protected:
	AS1105 ledControl;
};

#endif
