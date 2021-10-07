#include "stm32f10x.h"
#include "RCC.h"

void RCC_Config (void){
	RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;

}
