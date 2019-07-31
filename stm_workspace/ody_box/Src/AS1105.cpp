#include "AS1105.hpp"
#include "stm32wbxx_hal_gpio.h"

void AS1105::init(){
	uint8_t data[MAX_CASCADE*2];
	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;
	data[MAX_CASCADE*2-1-cascadeid*2-1] = 0x09;
	data[MAX_CASCADE*2-1-cascadeid*2] = decoding;

	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(2);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
}

void AS1105::setLEDs(uint8_t digit, uint8_t segments){
	uint8_t data[MAX_CASCADE*2];
	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;

	actual_segments[digit] = segments;

	data[MAX_CASCADE*2-1-cascadeid*2-1] = digit+1;
	data[MAX_CASCADE*2-1-cascadeid*2] = segments;

	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(2);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
}

void AS1105::setLEDHigh(uint8_t digit, uint8_t segment){
	uint8_t data[MAX_CASCADE*2];
	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;

	actual_segments[digit] |= (1<<segment);

	data[MAX_CASCADE*2-1-cascadeid*2-1] = digit+1;
	data[MAX_CASCADE*2-1-cascadeid*2] = actual_segments[digit];

	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(2);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
}


void AS1105::setLEDLow(uint8_t digit, uint8_t segment){
	uint8_t data[MAX_CASCADE*2];
	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;

	actual_segments[digit] &= ~(1<<segment);

	data[MAX_CASCADE*2-1-cascadeid*2-1] = digit+1;
	data[MAX_CASCADE*2-1-cascadeid*2] = actual_segments[digit];

	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(2);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
}

void AS1105::setIntensity(uint8_t intensity){
	uint8_t data[MAX_CASCADE*2];
	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;
	data[MAX_CASCADE*2-1-cascadeid*2-1] = 0x0A;
	data[MAX_CASCADE*2-1-cascadeid*2] = intensity;
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(2);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
}

void AS1105::test(){
	uint8_t data[MAX_CASCADE*2];
	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;
	data[MAX_CASCADE*2-1-cascadeid*2-1] = 0x0F;
	data[MAX_CASCADE*2-1-cascadeid*2] = 0x01;
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);

	HAL_Delay(1000);

	for(int i = 0; i < MAX_CASCADE*2; ++i)
		data[i] = 0;
	data[MAX_CASCADE*2-1-cascadeid*2-1] = 0x0F;
	data[MAX_CASCADE*2-1-cascadeid*2] = 0x00;
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
	HAL_SPI_Transmit(hspi, data, MAX_CASCADE*2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(PORT_LOAD, (unsigned short int)PIN_LOAD, GPIO_PIN_RESET);
}
