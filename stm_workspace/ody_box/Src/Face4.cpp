#include "Face4.hpp"

void Face4::Init(){
	Enigma::Init();
}

void Face4::UpdateIn(){

}

void Face4::StateOut(){
	if(buttons[0]){
		buttons[0] = false;
	}
	if(buttons[1]){
		buttons[1] = false;
	}
}

void Face4::interrupt_callback(uint16_t GPIO_Pin){
	if(GPIO_Pin == GPIO_PIN_0)
		buttons[0] = true;
	if(GPIO_Pin == GPIO_PIN_1)
		buttons[1] = true;
	HAL_Delay(1);
}
