#ifndef AS1105_HPP
#define AS1105_HPP


#include "stm32wbxx_hal.h"

#define MAX_CASCADE 5
#define PIN_LOAD GPIO_PIN_4
#define PORT_LOAD GPIOC

class AS1105{
public:
	AS1105(int nb, uint8_t decoding = 0x00) : hspi(nullptr), cascadeid(nb), decoding(decoding){
			for(int i = 0; i < 4; i++) actual_segments[i] = 0;
			for(int i = 0; i < 4; i++) actual_number[i] = 0;
	}
	AS1105(SPI_HandleTypeDef* hspi, int nb, uint8_t decoding = 0x00) : hspi(hspi), cascadeid(nb), decoding(decoding){
			for(int i = 0; i < 4; i++) actual_segments[i] = 0;
			for(int i = 0; i < 4; i++) actual_number[i] = 0;
	}
	void init();
	void setLEDs(uint8_t digit, uint8_t segments);
	void setNumber(uint8_t digit, uint8_t number) {setLEDs(digit, number);}
	void setLEDHigh(uint8_t digit, uint8_t segment);
	void setLEDLow(uint8_t digit, uint8_t segment);
	void setIntensity(uint8_t intensity);
	void test();

	void setHandler(SPI_HandleTypeDef* hspin){hspi = hspin;}
private:
	SPI_HandleTypeDef* hspi;
	int cascadeid;
	uint8_t decoding;
	uint8_t actual_segments[4];
	uint8_t actual_number[4];
};
#endif
