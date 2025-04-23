/*
 *  Electric Game Board v1.0
 *  Author: John Stella
 *  Date: 2025-4-19
 *  Description: This is a simple game board that uses an ESP32 microcontroller
 *               to control a mipi display and a touch screen withing lvgl.
 */
#include "C:\SDP_DIR\project-name\managed_components\espressif__esp32_p4_function_ev_board\include\bsp\esp32_p4_function_ev_board.h"
#include "ui.h"

static const char *TAG = "MAINAPP";

void app_main(void)
{
    printf("Hello world!\n");
    printf("Attempt to load configs\n");
    // Configure the display config struct with memory allocation and other settings
    bsp_display_cfg_t cfg = {
        .lvgl_port_cfg = ESP_LVGL_PORT_INIT_CONFIG(), // initialize the LVGL port config struct
        .buffer_size = BSP_LCD_DRAW_BUFF_SIZE,
        .double_buffer = BSP_LCD_DRAW_BUFF_DOUBLE,
        .hw_cfg = {                                                             // Added DSI bus config because
            .dsi_bus = {                                                        // New BSP package broke the old config
                .phy_clk_src = MIPI_DSI_PHY_CLK_SRC_DEFAULT,                    //
                .lane_bit_rate_mbps = BSP_LCD_MIPI_DSI_LANE_BITRATE_MBPS,       //
            }                                                                   //
        },                                                                      //
        .flags = {
            .buff_dma = true,
            .buff_spiram = false,                                               // JS - changed to true, ESP ERROR from component trying to allocate PSRAM for FBs __OLD
            .sw_rotate = false,
        }
    };
    printf("Screen configs loaded successfuly\n");

    // memory allocation check
    ESP_LOGI(TAG, "Free heap: %u bytes", (unsigned int)esp_get_free_heap_size());
    ESP_LOGI(TAG, "Largest free block: %u bytes", (unsigned int)heap_caps_get_largest_free_block(MALLOC_CAP_DEFAULT));

    gpio_reset_pin(BSP_LCD_BACKLIGHT);
    gpio_set_direction(BSP_LCD_BACKLIGHT, GPIO_MODE_OUTPUT);

    // Initialize the display
    printf("Attempt to initalize the display and touch port for LVGL with configs\n");
    bsp_display_start_with_config(&cfg);
    printf("Display started successfully\n");

    // memory allocation check
    ESP_LOGI(TAG, "Free heap: %u bytes", (unsigned int)esp_get_free_heap_size());
    ESP_LOGI(TAG, "Largest free block: %u bytes", (unsigned int)heap_caps_get_largest_free_block(MALLOC_CAP_DEFAULT));

    // turn the display on
    printf("Attempt to turn on display\n");
    bsp_display_backlight_on();
    printf("Display turned on successfully\n");

    // LVGL mutex to prevent other tasks from using it and perserve memory
    printf("Attempt to lock display\n");
    bsp_display_lock(0); // # is the timeout in ms (0 = no timeout)
    printf("Display locked successfully\n");

    // // Initialize the LVGL library and EEZ flow library
    printf("Attempt to initialize LVGL\n");
    ui_init();
    printf("LVGL initialized successfully\n");

    // // Run ui task (may need to be run in a separate freertos task)
    // // The tack may need to be moved to after the display unlock
    // // lv_task_create(ui_task, 10, NULL, 1, LV_TASK_PRIO_LOWEST, NULL);
    // printf("Attempt to run ui task\n");
    // ui_tick();
    // printf("UI task running successfully\n");

    // free the display lock
    printf("Attempt to unlock display\n");
    bsp_display_unlock();
    printf("Display unlocked successfully\n");

    while (true)
    {
        // Run the UI task
        ui_tick();

        // Delay to prevent the task from running too fast
        vTaskDelay(pdMS_TO_TICKS(10));
    }

    printf("______________Hello world! END____________\n");
}