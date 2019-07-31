#ifndef FACE8_HPP
#define FACE8_HPP

#include "stm32wbxx_hal.h"
#include "Enigma.hpp"

class Face8 : public Enigma{
public:
	Face8(SPI_HandleTypeDef* hspi, int nb):Enigma(hspi, nb){for(int i = 0; i < 4; ++i) buttons[i] = false;}
	~Face8(){}
	void Init();
	void UpdateIn();
	void StateOut();

	void interrupt_callback(uint16_t GPIO_Pin);
private:
	bool buttons[4];
};

#endif
