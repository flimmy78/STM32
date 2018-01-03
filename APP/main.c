#include <stm32f10x.h>
#include <FreeRTOS.h>
#include <task.h>
#include "SYS.h"
#include "GUI.h"
#include <stable.h>

void Init ()
{
	SYS_Init();
	GUI_CORE_Init();
	Stable_Init();
	vTaskDelete(NULL);
}
int main ()

{
	xTaskCreate(Init,"Init",60,NULL,4,NULL);
	vTaskStartScheduler();
}
