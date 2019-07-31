#include "Box.hpp"

Box* Box::instance_obj = nullptr;

void Box::callback(uint16_t GPIO_Pin){
	  for(int i = 0; i < 4; ++i)
		  enigmas[i]->interrupt_callback(GPIO_Pin);
}

void Box::Setup(){
	timerDisplay.setHandler(hspi);
	timerDisplay.init();

	enigmas.push_back(new Face1(hspi, 1));
	enigmas.push_back(new Face2(hspi, htim, 2));
	enigmas.push_back(new Face4(hspi, 3));
	enigmas.push_back(new Face8(hspi, 4));

	for(int i = 0; i < 4; ++i)
		enigmas[i]->Init();

	dtmillis = HAL_GetTick();
}

void Box::Test(){
	for(int i = 0; i < 4; ++i)
		enigmas[i]->getLED().test();
	for(uint16_t i = 0; i < 0xFFFF; i+=10){
		((Face2*)enigmas[1])->getArrow().setPWM(i);
		HAL_Delay(100);
	}
}

void Box::Loop(){
	  millis_time += HAL_GetTick();
	  uint32_t dt_time = HAL_GetTick() - dtmillis;
	  if(dt_time>1000){
		  dtmillis = HAL_GetTick() - (dt_time - (dt_time/1000)*1000);
		  uint8_t dh = millis_time/1000/60/60/10;
		  uint8_t h = millis_time/1000/60/60 - 10*dh;
		  uint8_t dm = (millis_time/1000/60 - (h + 10*dh)*60)/10;
		  uint8_t m = millis_time/1000/60 - (h + 10*dh)*60 - 10*dm;
		  timerDisplay.setNumber(3,dh);
		  timerDisplay.setNumber(2,h);
		  timerDisplay.setNumber(1,dm);
		  timerDisplay.setNumber(0,m);
	  }

	  for(int i = 0; i < 4; ++i){
		  enigmas[i]->UpdateIn();
		  enigmas[i]->StateOut();
	  }
}
