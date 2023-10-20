#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"


#include "BLETask.h"
void app_main() {

gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);


ble_task_init();
	while (1)
	{
		ESP_LOGI("MAIN", "HELLO WORLD");
		vTaskDelay(2000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_2,0);
        vTaskDelay(2000 / portTICK_PERIOD_MS);
        gpio_set_level(GPIO_NUM_2,1);
	}

}