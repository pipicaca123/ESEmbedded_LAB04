#ifndef BLINK_H
#define BLINK_H

#define LED_GREEN 12//PD12
#define LED_ORANGE 13 //PD13
#define LED_RED 14//PD14
#define LED_BLUE 15

void blink(unsigned int led);
void blink_count(unsigned int led, unsigned int count);

#endif
