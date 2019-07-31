#include "Face2.hpp"

void Face2::Init(){
	Enigma::Init();
}

void Face2::UpdateIn(){

}

void Face2::StateOut(){
	if(buttons[0]){
		buttons[0] = false;
	}
	if(buttons[1]){
		buttons[1] = false;
	}
}

void Face2::interrupt_callback(uint16_t GPIO_Pin){
	if(GPIO_Pin == GPIO_PIN_11)
		buttons[0] = true;
	if(GPIO_Pin == GPIO_PIN_12)
		buttons[1] = true;
	HAL_Delay(1);
}
