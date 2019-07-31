#ifndef BOX_HPP
#define BOX_HPP

#include "stm32wbxx_hal.h"
#include <vector>
#include "Enigma.hpp"
#include "Face1.hpp"
#include "Face2.hpp"
#include "Face4.hpp"
#include "Face8.hpp"
#include "AS1105.hpp"

class Box{
public:
	Box():hspi(nullptr), htim(nullptr), timerDisplay(0, (uint8_t)0xFF),millis_time(0),dtmillis(0){}
	~Box(){}

	void Setup();
	void Loop();
	void Test();

	void setHandlers(SPI_HandleTypeDef* hspin, TIM_HandleTypeDef* htimn){hspi = hspin; htim = htimn;}
	void callback(uint16_t GPIO_Pin);

	static Box* Instance(){if(instance_obj == nullptr) instance_obj = new Box(); return instance_obj;}
private:
	static Box* instance_obj;

	SPI_HandleTypeDef* hspi;
	TIM_HandleTypeDef* htim;

	std::vector<Enigma*> enigmas;
	AS1105 timerDisplay;

	uint32_t millis_time;
	uint32_t dtmillis;
};

#endif
