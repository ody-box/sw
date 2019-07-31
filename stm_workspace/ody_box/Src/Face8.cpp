#include "Face8.hpp"

void Face8::Init(){
	Enigma::Init();
}

void Face8::UpdateIn(){

}

void Face8::StateOut(){
	if(buttons[0]){
		buttons[0] = false;
	}
	if(buttons[1]){
		buttons[1] = false;
	}
	if(buttons[2]){
		buttons[2] = false;
	}
	if(buttons[3]){
		buttons[3] = false;
	}
}

void Face8::interrupt_callback(uint16_t GPIO_Pin){
	if(GPIO_Pin == GPIO_PIN_2)
		buttons[0] = true;
	if(GPIO_Pin == GPIO_PIN_4)
		buttons[1] = true;
	if(GPIO_Pin == GPIO_PIN_5)
		buttons[2] = true;
	if(GPIO_Pin == GPIO_PIN_6)
		buttons[3] = true;
	HAL_Delay(1);
}
