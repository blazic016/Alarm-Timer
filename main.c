#define F_CPU 16000000UL


#define RS eS_PORTC6
#define EN eS_PORTC7
#define D4 eS_PORTD4
#define D5 eS_PORTD5
#define D6 eS_PORTD6
#define D7 eS_PORTD7

#define ALARM_LEDICA eS_PORTD3
#define ALARM_BUT_CAS eS_PORTD0
#define ALARM_BUT_MIN eS_PORTD1
#define ALARM_BUT_SEC eS_PORTD2
#define TIME_BUT_CAS eS_PORTC0
#define TIME_BUT_MIN eS_PORTC1
#define TIME_BUT_SEC eS_PORTC2

#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdlib.h>
//#include <string.h>
#include "pins.h"
#include "LCD.h"


volatile uint8_t count;
volatile int time_sekunda;


void PrikazCifre(int y, int x, int i) {
	char KARAKTER [2];
	char KARAKTER_NULA [2];
	if (i<10) {
		Lcd4_Set_Cursor(y,x);
		Lcd4_Write_String("0");
		Lcd4_Set_Cursor(y,x+1);
		itoa(i,KARAKTER_NULA,10);
		Lcd4_Write_String(KARAKTER_NULA);
	} else {
		Lcd4_Set_Cursor(y,x);
		itoa(i,KARAKTER,10);
		Lcd4_Write_String(KARAKTER);
	}
}


int main(void)
{
	//LCD CONFIG
	pinConfig(D4,0);
	pinConfig(D5,0);
	pinConfig(D6,0);
	pinConfig(D7,0);
	pinConfig(RS,0);
	pinConfig(EN,0);
	Lcd4_Init();
	Lcd4_Clear();

	//TIMER CONFIG
	 TCCR0|=(1<<CS02)|(1<<CS00); // Prescaler = FCPU/1024
	 TIMSK|=(1<<TOIE0);  //Enable Overflow Interrupt Enable
	 TCNT0=0;  //Initialize Counter
	 count=0;
	 sei();  //Enable Global Interrupts
 
	// PORT B OSCILOSKOP
	DDRB|=0x0F;
	
	// TIME
	int flagButTime = 0;
	int time_cas = 23;
	int time_min = 59;
	time_sekunda = 55;
	
	// ALARM
	pinConfig(ALARM_LEDICA,0);
	pinConfig(ALARM_BUT_CAS,1);
	pinConfig(ALARM_BUT_MIN,1);
	pinConfig(ALARM_BUT_SEC,1);
	int flagButALM = 0;
	int alarm_cas = 0;
	int alarm_min = 0;
	int alarm_sekunda = 0;
	
	while (1) {	
		// CALCULATE TIME
		if (time_sekunda >= 60) {time_sekunda = 0; time_min++;}
		if (time_min >= 60) {time_min = 0; time_cas++;}
		if (time_cas == 24) {time_cas = 0;}
		
		// TURN ON ALARM	
		if (time_cas == alarm_cas) {
			if (time_min == alarm_min) {
				pinChange(ALARM_LEDICA,1);
			} else {pinChange(ALARM_LEDICA,0);}
		}	
		
		// SET ALARM
		if (pinScan(ALARM_BUT_CAS) == 1) { if (flagButALM == 0) { alarm_cas++; flagButALM = 1;} } 
		else if (pinScan(ALARM_BUT_MIN) == 1) { if (flagButALM == 0) { alarm_min++; flagButALM = 1;} } 
		else if (pinScan(ALARM_BUT_SEC) == 1) { if (flagButALM == 0) { alarm_sekunda++; flagButALM = 1;} } 
		else {flagButALM = 0;}

		// SET TIME
		if (pinScan(TIME_BUT_CAS) == 1) { if (flagButTime == 0) { time_cas++; flagButTime = 1;} }
		else if (pinScan(TIME_BUT_MIN) == 1) { if (flagButTime == 0) { time_min++; flagButTime = 1;} }
		else if (pinScan(TIME_BUT_SEC) == 1) { if (flagButTime == 0) { time_sekunda++; flagButTime = 1;} }
		else {flagButTime = 0;}

		//SHOW TIME
			PrikazCifre(2, 3, time_cas);
				Lcd4_Write_String(":");
			PrikazCifre(2, 6, time_min);
				Lcd4_Write_String(":");
			PrikazCifre(2, 9, time_sekunda);
				
		//SHOW ALARM
			PrikazCifre(1, 3, alarm_cas);
			Lcd4_Write_String(":");
			PrikazCifre(1, 6, alarm_min);
			Lcd4_Write_String(":");
			PrikazCifre(1, 9, alarm_sekunda);
		
	}
}



ISR(TIMER0_OVF_vect)
{
	//This is the interrupt service routine for TIMER0 OVERFLOW Interrupt.
	//CPU automatically call this when TIMER0 overflows.

	//Increment our variable
	count++;
	if(count==61)
	{
		PORTB=~PORTB; //Invert the Value of PORTC
		count=0;
		time_sekunda++;
	}
}