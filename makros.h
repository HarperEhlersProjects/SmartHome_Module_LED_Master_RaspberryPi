#ifndef MAKROS_H
#define MAKROS_H

#define VIRTUAL_SLA_NUMBER 12
#define VIRTUAL_SLA_LENGTH_MAX 600
#define VIRTUAL_SLA_SEGMENTS_NUMBER 5
#define VIRTUAL_SLA_DEST_NONE -1

#define LED_BIT_COUNT 24
#define SLA_LENGTH_MAX 300
#define GRAPHICS_DATA_SIZE VIRTUAL_SLA_LENGTH_MAX
#define LED_SERIAL_DATA_SIZE SLA_LENGTH_MAX*LED_BIT_COUNT


#define SLA_NUMBER 8
#define MODE_PARAMETER_NUMBER 10
#define MODE_ACTOR_NUMBER 10

#define GRAPHICS_GAMMA8_MAX_IN 255
#define GRAPHICS_GAMMA8_MAX_OUT 255
#define SETTINGS_GAMMA8_RED_DEFAULT 2.8
#define SETTINGS_GAMMA8_GREEN_DEFAULT 2.8
#define SETTINGS_GAMMA8_BLUE_DEFAULT 2.8

#define SETTINGS_COLOR_MODE_RGB 0
#define SETTINGS_COLOR_MODE_HSV 1

#define SLA_ACTIVE 1
#define SLA_DEACTIVE 0

#define TRUE 1
#define FALSE 0

#endif /* MAKROS_H */
