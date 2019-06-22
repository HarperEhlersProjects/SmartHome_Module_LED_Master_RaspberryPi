#include "settings.h"
#include "led_serial.h"
#include "graphics.h"
#include "ui.h"
#include "modes.h"

#include "makros.h"
#include <time.h>

#include "LED_station.h"


void main(int argc, char **argv)
{  
    int time_previous,time_now;    

	vSettingsInit();
	vGraphicsInit();
	vModesInit();
	vLEDSerialTransmitterInit();

	//Configure	SLAs
	uiSettingsSLAType[0] = SETTINGS_SLATYPE_RGB;
	uiSettingsSLAType[1] = SETTINGS_SLATYPE_RGB;
	
	//Configure Virtual SLA
	//VSLA-0:
	//Segment 0:
	tsSettingsVirtualSLAMap[0][0].uiDestSLA = 1;
	//tsSettingsVirtualSLAMap[0][0].bSLAInverted = False; default
	tsSettingsVirtualSLAMap[0][0].uiSegmentLength = 100;
	tsSettingsVirtualSLAMap[0][0].uiSourceLEDStart = 0;
	tsSettingsVirtualSLAMap[0][0].uiDestLEDStart = 0;
	
	//SLA Length
	uiSettingsVirtualSLALength[0] = 100;
	//Mode
    uiSettingsModeActive[0] = 0;
	//Huel
    uiSettingsModeParameter[0][0] = 0;
	//Saturation
    uiSettingsModeParameter[0][1] = 1;
	//Brightness
    uiSettingsModeParameter[0][2] = 0.5;
	//Gamme Enable
	uiSettingsModeParameter[0][3] = TRUE;
	
	
	
    uiSettingsModeParameter[0][4] = 1;
    uiSettingsModeParameter[0][5] = 0;
	

    while(1)
    {       
		vModesFrameCalculate();
		vLEDSerialRGB2PacketSerial();
		//while(15ms);
        vLEDSerialTransmit();

        vGraphicsPixelResetAll();
    }
}
