#include "Functions.h"

int main(void)
{
	setup();
	
    while (1)
    {
	    if (BUTTON1_IS_PRESSED && !BUTTON2_IS_PRESSED)
	    {
		    leds_blink_normal(150);
	    }
		else if (!BUTTON1_IS_PRESSED && BUTTON2_IS_PRESSED)
		{
			leds_blink_reverse(150);
		}
	    else if (ALL_BUTTONS_PRESSED)
	    {
		    leds_on();
	    }
		else
		{
			leds_off();
		}
	}
	
   return 0;
}

