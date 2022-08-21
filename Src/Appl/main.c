#include "IntCtrl.h"
#include "Timer.h"
#include "DIO.h"
#include "Mcu.h"
#include "Port.h"
int main(void)
{
	
	Mcu_Init(&Mcu_ConfigTypeStruct);
	Mcu_InitClock(ACTIVE_CLOCK_CONFIG_MODE);
	Mcu_DistributePllClock();
	IntCtrl_Init();
	Port_Init(Port_Config);
	Gpt_Init(Gpt_Config);
	while(1){
        Gpt_Init(Gpt_Config);
		Gpt_EnableNotification(Gpt_Channel_0);
        }
        
	return 0;
}