/*------------Description of Makros module-------------------------------
The makros module does contain every makro that is in usage by the LED_Station. 
Makros are used for basic settings that does not change on the run or default values for user defined settings.
*/

#ifndef MAKROS_H
#define MAKROS_H

#define SETTINGS_CONFIG_DIRECTORY "~/LED_Station/"
#define SETTINGS_CONFIG_FILENAME "/home/pi/ledstation/data/config.json"

#define VIRTUAL_SLA_NUMBER 1
#define VIRTUAL_SLA_LENGTH_MAX 256
#define VIRTUAL_SLA_SEGMENTS_NUMBER 1
#define VIRTUAL_SLA_DEST_NONE -1

#define LED_BIT_COUNT 24
#define SLA_LENGTH_MAX 300
#define GRAPHICS_DATA_SIZE VIRTUAL_SLA_LENGTH_MAX
#define LED_SERIAL_DATA_SIZE SLA_LENGTH_MAX*LED_BIT_COUNT


#define SLA_NUMBER 8
#define MODE_PARAMETER_NUMBER 7
#define MODE_ACTOR_NUMBER 6

#define GRAPHICS_GAMMA8_MAX_IN 255
#define GRAPHICS_GAMMA8_MAX_OUT 255
#define SETTINGS_GAMMA8_RED_DEFAULT 2.8
#define SETTINGS_GAMMA8_GREEN_DEFAULT 2.7
#define SETTINGS_GAMMA8_BLUE_DEFAULT 2.8

#define GRAPHICS_BRIGHTNESS_CORRECTION_ENABLE 0

#define SETTINGS_COLOR_MODE_RGB 0
#define SETTINGS_COLOR_MODE_HSV 1

#define SETTINGS_SLATYPE_RGB 0
#define SETTINGS_SLATYPE_GBR 1
#define SETTINGS_SLATYPE_BRG 2
#define SETTINGS_SLATYPE_BGR 3
#define SETTINGS_SLATYPE_GRB 4
#define SETTINGS_SLATYPE_RBG 5

#define EVENT_HANDLER_NUMBER 5
#define EVENT_HANDLER_PARAMETER_NUMBER 10

#define SLA_ACTIVE 1
#define SLA_DEACTIVE 0

#define TRUE 1
#define FALSE 0

#define MODES_MODE_BLANK 0
#define MODES_MODE_1COLOR 1
#define MODES_MODE_SNAKE 2
#define MODES_MODE_PULSE 3
#define MODES_MODE_COLORFADE 4
#define MODES_MODE_GAMEBOX 5




#endif /* MAKROS_H */
