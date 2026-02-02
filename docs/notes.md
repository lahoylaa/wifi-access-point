# FreeRTOS
- Operating System that the ESP32 will run on
- Applications will be built on top of the OS
    - FreeRTOS will manage task
    - No more usage of "while(1){}" in main app

# WiFi Libraries
"esp_wifi.h" - public WiFi driver API provided by ESP32
- this is the actual WiFi firmware that will handle all WiFi related inits/functionality
