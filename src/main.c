/* Generic Libraries */
#include <string.h>

/* OS */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

/* I dont know what this is */
#include "esp_mac.h"   // System utility for MAC addresses useful for logging
#include "esp_wifi.h"  // Wifi driver API
#include "esp_event.h" // used for event handling ie. loop, handler, WIFI_EVENT stuff
#include "esp_log.h"   // system loggign, useful for debugging

/* NOTE: Wifi needs to have NVS initialize or will not work */
#include "nvs_flash.h" // Non volatile storage, used to store wifi credentials. Calibration, PHY, security info

/* Error Checking: mainly TCP/IP error codes */
/* LWIP: lightweight IP opensoruce stack designed for embedded systems */
#include "lwip/err.h"
#include "lwip/sys.h"

/* Global Decliration */
#define EXAMPLE_ESP_WIFI_SSID "My WIFI Test"
#define EXAMPLE_ESP_WIFI_PASS "mypassword"
#define EXAMPLE_ESP_WIFI_CHANNEL 1
#define EXAMPLE_MAX_STA_CONN 4

/* Used only for ESP spedific debugging prompts */
// static const char *TAG = "wifi softAP";

/* Callback function for ESP's event loop */
static void wifi_event_handler()
{
}

/*
* @brief to initialize the ESP32 as a SoftAP
* @param None
*/
void wifi_init_softap(void)
{

    /* Initialize LWP stack */
    esp_netif_init();

    /* FreeRTOS event loop task */
    /* NOTE: All of the sytem event will go through this */
    esp_event_loop_create_default();

    /* Initialize the wifi api (official API from ESP32 to configur WIFI) */
    esp_netif_create_default_wifi_ap();

    /* Wifi driver intialization */
    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();

    esp_wifi_init(&cfg); // send the config
}

/* Main Application */
void main(void)
{
    /* NVS Initialization */
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        nvs_flash_erase();
        ret = nvs_flash_init();
    }

    printf("ESP_WIFI_MODE_AP\n");
    
}