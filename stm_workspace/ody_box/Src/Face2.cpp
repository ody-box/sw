#include "Face2.hpp"

void Face2::Init(){
	Enigma::Init();
}

void Face2::UpdateIn(){

}

void Face2::StateOut(){
	if(buttons[0]){
		servo_value += (MAX_SERVO-MIN_SERVO)/NUM_ANGLE;
		if(servo_value > MAX_SERVO)
			servo_value = MIN_SERVO;
		buttons[0] = false;
	}
	if(buttons[1]){
		servo_value -= (MAX_SERVO-MIN_SERVO)/NUM_ANGLE;
		if(servo_value < MIN_SERVO)
			servo_value = MAX_SERVO;
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
