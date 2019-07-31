#ifndef FACE4_HPP
#define FACE4_HPP

#include "stm32wbxx_hal.h"
#include "Enigma.hpp"

class Face4 : public Enigma{
public:
	Face4(SPI_HandleTypeDef* hspi, int nb):Enigma(hspi, nb){for(int i = 0; i < 2; ++i) buttons[i] = false;}
	~Face4(){}
	void Init();
	void UpdateIn();
	void StateOut();

	void interrupt_callback(uint16_t GPIO_Pin);
private:
	bool buttons[2];
};

#endif
