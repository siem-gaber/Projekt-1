
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#define F_CPU 16000000UL /*klockfrekvens*/

#include <avr/io.h>  /*information om I/O-register*/
#include <util/delay.h> /*implementering av fördröjning*/

/*macro*/
#define LED1 6    /* Lysdiod 1 ansluten till pin 6 / PORTD6. */
#define LED2 7     /* Lysdiod 2 ansluten till pin 7 / PORTD7. */
#define LED3 0	   /* Lysdiod 3 ansluten till pin 0 / PORTB0. */
#define BUTTON1 4  /* Tryckknapp 1 ansluten till pin 12 / PORTB4*/
#define BUTTON2 5 /* Tryckknapp 2 ansluten till pin 13 / PORTB5. */

#define LED1_ON PORTD |= (1 << LED1) /* Tänder lysdiod 1. */
#define LED2_ON PORTD |= (1 << LED2) /* Tänder lysdiod 2. */
#define LED3_ON PORTB |= (1 << LED3) /* Tänder lysdiod 2. */

#define LED1_OFF PORTD &= ~(1 << LED1) /* Släcker lysdiod 1. */
#define LED2_OFF PORTD &= ~(1 << LED2) /* Släcker lysdiod 2. */
#define LED3_OFF PORTB &= ~(1 << LED3) /* Släcker lysdiod 3. */

#define BUTTON1_IS_PRESSED (PINB & (1 << BUTTON1)) /* Indikerar nedtryckning av tryckknapp 1. */
#define BUTTON2_IS_PRESSED (PINB & (1 << BUTTON2)) /* Indikerar nedtryckning av tryckknapp 1. */
#define ALL_BUTTONS_PRESSED (BUTTON1_IS_PRESSED && BUTTON1_IS_PRESSED)

typedef enum { true = 1, false = 0 } bool; /* Realiserar datatypen bool. */


void setup(void); /*Initierar mikrodatorns I/O-portar.*/


void delay_ms(const uint16_t delay_time_ms);/*delay_ms:Genererar angiven fördröjning mätt i millsekunder 
                                              delay_time_ms: Fördröjningstid mätt i millisekunder*/

void leds_on(void);
void leds_off(void);
                                                             

void leds_blink_normal(const uint16_t blink_speed_ms); /*leds_blink_sequence: Genererar sekventiell blinkning av lysdioder LED1 - LED2
                                                           anslutna till pin 9 - 10 (PORTB1 - PORTB2).
                                                           - blink_speed_ms: Blinkhastighet i millisekunder.*/
void leds_blink_reverse(const uint16_t blink_speed_ms);


#endif /* FUNCTIONS_H_ */