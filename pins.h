//modifikovano electroSome
#define eS_PORTA0 0
#define eS_PORTA1 1
#define eS_PORTA2 2
#define eS_PORTA3 3
#define eS_PORTA4 4
#define eS_PORTA5 5
#define eS_PORTA6 6
#define eS_PORTA7 7
#define eS_PORTB0 10
#define eS_PORTB1 11
#define eS_PORTB2 12
#define eS_PORTB3 13
#define eS_PORTB4 14
#define eS_PORTB5 15
#define eS_PORTB6 16
#define eS_PORTB7 17
#define eS_PORTC0 20
#define eS_PORTC1 21
#define eS_PORTC2 22
#define eS_PORTC3 23
#define eS_PORTC4 24
#define eS_PORTC5 25
#define eS_PORTC6 26
#define eS_PORTC7 27
#define eS_PORTD0 30
#define eS_PORTD1 31
#define eS_PORTD2 32
#define eS_PORTD3 33
#define eS_PORTD4 34
#define eS_PORTD5 35
#define eS_PORTD6 36
#define eS_PORTD7 37


void pinChange(int a, int b)
{
	if(b == 0)
	{
		if(a == eS_PORTA0)
		  PORTA &= ~(1<<PA0);
		else if(a == eS_PORTA1)
		  PORTA &= ~(1<<PA1); 
		else if(a == eS_PORTA2)
		  PORTA &= ~(1<<PA2);
		else if(a == eS_PORTA3)
		  PORTA &= ~(1<<PA3); 
		else if(a == eS_PORTA4)
		  PORTA &= ~(1<<PA4); 
		else if(a == eS_PORTA5)
		  PORTA &= ~(1<<PA5); 
		else if(a == eS_PORTA6)
		  PORTA &= ~(1<<PA6);  
		else if(a == eS_PORTA7)
		  PORTA &= ~(1<<PA7);
		else if(a == eS_PORTB0)
		  PORTB &= ~(1<<PB0);  
		else if(a == eS_PORTB1)
		  PORTB &= ~(1<<PB1);
		else if(a == eS_PORTB2)
		  PORTB &= ~(1<<PB2);  
		else if(a == eS_PORTB3)
		  PORTB &= ~(1<<PB3);  
		else if(a == eS_PORTB4)
		  PORTB &= ~(1<<PB4);  
		else if(a == eS_PORTB5)
		  PORTB &= ~(1<<PB5);  
		else if(a == eS_PORTB6)
		  PORTB &= ~(1<<PB6);  
		else if(a == eS_PORTB7)
		  PORTB &= ~(1<<PB7);
		else if(a == eS_PORTC0)
		  PORTC &= ~(1<<PC0);   
		else if(a == eS_PORTC1)
		  PORTC &= ~(1<<PC1); 
		else if(a == eS_PORTC2)
		  PORTC &= ~(1<<PC2);
		else if(a == eS_PORTC3)
		  PORTC &= ~(1<<PC3);   
		else if(a == eS_PORTC4)
		  PORTC &= ~(1<<PC4);  
		else if(a == eS_PORTC5)
		  PORTC &= ~(1<<PC5);  
        else if(a == eS_PORTC6)
          PORTC &= ~(1<<PC6);		
		else if(a == eS_PORTC7)
		  PORTC &= ~(1<<PC7);
		else if(a == eS_PORTD0)
		  PORTD &= ~(1<<PD0);
		else if(a == eS_PORTD1)
		  PORTD &= ~(1<<PD1);  
		else if(a == eS_PORTD2)
		  PORTD &= ~(1<<PD2);
		else if(a == eS_PORTD3)
		  PORTD &= ~(1<<PD3);
		else if(a == eS_PORTD4)
		  PORTD &= ~(1<<PD4);
		else if(a == eS_PORTD5)
		  PORTD &= ~(1<<PD5);
		else if(a == eS_PORTD6)
		  PORTD &= ~(1<<PD6);   
		else if(a == eS_PORTD7)
		  PORTD &= ~(1<<PD7);           
	}
	else
	{
		if(a == eS_PORTA0)
		  PORTA |= (1<<PA0);
		else if(a == eS_PORTA1)
		  PORTA |= (1<<PA1);
		else if(a == eS_PORTA2)
		  PORTA |= (1<<PA2);
		else if(a == eS_PORTA3)
		  PORTA |= (1<<PA3);
		else if(a == eS_PORTA4)
		  PORTA |= (1<<PA4);
		else if(a == eS_PORTA5)
		  PORTA |= (1<<PA5);
		else if(a == eS_PORTA6)
		  PORTA |= (1<<PA6);
		else if(a == eS_PORTA7)
		  PORTA |= (1<<PA7);
		else if(a == eS_PORTB0)
	  	  PORTB |= (1<<PB0);
		else if(a == eS_PORTB1)
		  PORTB |= (1<<PB1);
		else if(a == eS_PORTB2)
		  PORTB |= (1<<PB2);
		else if(a == eS_PORTB3)
		  PORTB |= (1<<PB3);
		else if(a == eS_PORTB4)
		  PORTB |= (1<<PB4);
		else if(a == eS_PORTB5)
		  PORTB |= (1<<PB5);
		else if(a == eS_PORTB6)
		  PORTB |= (1<<PB6);
		else if(a == eS_PORTB7)
		  PORTB |= (1<<PB7);
		else if(a == eS_PORTC0)
		  PORTC |= (1<<PC0);
		else if(a == eS_PORTC1)
		  PORTC |= (1<<PC1);
		else if(a == eS_PORTC2)
	  	  PORTC |= (1<<PC2);
		else if(a == eS_PORTC3)
		  PORTC |= (1<<PC3);
		else if(a == eS_PORTC4)
		  PORTC |= (1<<PC4);
		else if(a == eS_PORTC5)
		  PORTC |= (1<<PC5);
		else if(a == eS_PORTC6)
		  PORTC |= (1<<PC6);  
		else if(a == eS_PORTC7)
		  PORTC |= (1<<PC7);
		else if(a == eS_PORTD0)
		  PORTD |= (1<<PD0);
		else if(a == eS_PORTD1)
		  PORTD |= (1<<PD1);
		else if(a == eS_PORTD2)
		  PORTD |= (1<<PD2);
		else if(a == eS_PORTD3)
		  PORTD |= (1<<PD3);
		else if(a == eS_PORTD4)
		  PORTD |= (1<<PD4);
		else if(a == eS_PORTD5)
		  PORTD |= (1<<PD5);
		else if(a == eS_PORTD6)
		  PORTD |= (1<<PD6);
		else if(a == eS_PORTD7)
		  PORTD |= (1<<PD7);
	}
}




void pinConfig(int a, int b)
{
	if(b == 0) // 0-Output
	{
		if(a == eS_PORTA0) // IZLAZ
		DDRA |= (1<<PA0);
		else if(a == eS_PORTA1)
		DDRA |= (1<<PA1);
		else if(a == eS_PORTA2)
		DDRA |= (1<<PA2);
		else if(a == eS_PORTA3)
		DDRA |= (1<<PA3);
		else if(a == eS_PORTA4)
		DDRA |= (1<<PA4);
		else if(a == eS_PORTA5)
		DDRA |= (1<<PA5);
		else if(a == eS_PORTA6)
		DDRA |= (1<<PA6);
		else if(a == eS_PORTA7)
		DDRA |= (1<<PA7);
		else if(a == eS_PORTB0)
		DDRB |= (1<<PB0);
		else if(a == eS_PORTB1)
		DDRB |= (1<<PB1);
		else if(a == eS_PORTB2)
		DDRB |= (1<<PB2);
		else if(a == eS_PORTB3)
		DDRB |= (1<<PB3);
		else if(a == eS_PORTB4)
		DDRB |= (1<<PB4);
		else if(a == eS_PORTB5)
		DDRB |= (1<<PB5);
		else if(a == eS_PORTB6)
		DDRB |= (1<<PB6);
		else if(a == eS_PORTB7)
		DDRB |= (1<<PB7);
		else if(a == eS_PORTC0)
		DDRC |= (1<<PC0);
		else if(a == eS_PORTC1)
		DDRC |= (1<<PC1);
		else if(a == eS_PORTC2)
		DDRC |= (1<<PC2);
		else if(a == eS_PORTC3)
		DDRC |= (1<<PC3);
		else if(a == eS_PORTC4)
		DDRC |= (1<<PC4);
		else if(a == eS_PORTC5)
		DDRC |= (1<<PC5);
		else if(a == eS_PORTC6)
		DDRC |= (1<<PC6);
		else if(a == eS_PORTC7)
		DDRC |= (1<<PC7);
		else if(a == eS_PORTD0)
		DDRD |= (1<<PD0);
		else if(a == eS_PORTD1)
		DDRD |= (1<<PD1);
		else if(a == eS_PORTD2)
		DDRD |= (1<<PD2);
		else if(a == eS_PORTD3)
		DDRD |= (1<<PD3);
		else if(a == eS_PORTD4)
		DDRD |= (1<<PD4);
		else if(a == eS_PORTD5)
		DDRD |= (1<<PD5);
		else if(a == eS_PORTD6)
		DDRD |= (1<<PD6);
		else if(a == eS_PORTD7)
		DDRD |= (1<<PD7);
	}
	else if(b == 1) //1-Input
	{
		if(a == eS_PORTA0) //ULAZ
		DDRA &= ~(1<<PA0);
		else if(a == eS_PORTA1)
		DDRA &= ~(1<<PA1);
		else if(a == eS_PORTA2)
		DDRA &= ~(1<<PA2);
		else if(a == eS_PORTA3)
		DDRA &= ~(1<<PA3);
		else if(a == eS_PORTA4)
		DDRA &= ~(1<<PA4);
		else if(a == eS_PORTA5)
		DDRA &= ~(1<<PA5);
		else if(a == eS_PORTA6)
		DDRA &= ~(1<<PA6);
		else if(a == eS_PORTA7)
		DDRA &= ~(1<<PA7);
		else if(a == eS_PORTB0)
		DDRB &= ~(1<<PB0);
		else if(a == eS_PORTB1)
		DDRB &= ~(1<<PB1);
		else if(a == eS_PORTB2)
		DDRB &= ~(1<<PB2);
		else if(a == eS_PORTB3)
		DDRB &= ~(1<<PB3);
		else if(a == eS_PORTB4)
		DDRB &= ~(1<<PB4);
		else if(a == eS_PORTB5)
		DDRB &= ~(1<<PB5);
		else if(a == eS_PORTB6)
		DDRB &= ~(1<<PB6);
		else if(a == eS_PORTB7)
		DDRB &= ~(1<<PB7);
		else if(a == eS_PORTC0)
		DDRC &= ~(1<<PC0);
		else if(a == eS_PORTC1)
		DDRC &= ~(1<<PC1);
		else if(a == eS_PORTC2)
		DDRC &= ~(1<<PC2);
		else if(a == eS_PORTC3)
		DDRC &= ~(1<<PC3);
		else if(a == eS_PORTC4)
		DDRC &= ~(1<<PC4);
		else if(a == eS_PORTC5)
		DDRC &= ~(1<<PC5);
		else if(a == eS_PORTC6)
		DDRC &= ~(1<<PC6);
		else if(a == eS_PORTC7)
		DDRC &= ~(1<<PC7);
		else if(a == eS_PORTD0)
		DDRD &= ~(1<<PD0);
		else if(a == eS_PORTD1)
		DDRD &= ~(1<<PD1);
		else if(a == eS_PORTD2)
		DDRD &= ~(1<<PD2);
		else if(a == eS_PORTD3)
		DDRD &= ~(1<<PD3);
		else if(a == eS_PORTD4)
		DDRD &= ~(1<<PD4);
		else if(a == eS_PORTD5)
		DDRD &= ~(1<<PD5);
		else if(a == eS_PORTD6)
		DDRD &= ~(1<<PD6);
		else if(a == eS_PORTD7)
		DDRD &= ~(1<<PD7);
	}
}




int pinScan(int a)
{
	if(a == eS_PORTA0) {
		if (PINA & (1<<0))
		return 1;
	}
	else if(a == eS_PORTA1) {
		if (PINA & (1<<1))
		return 1;
	}
	else if(a == eS_PORTA2) {
		if (PINA & (1<<2))
		return 1;
	}
	else if(a == eS_PORTA3) {
		if (PINA & (1<<3))
		return 1;
	}
	else if(a == eS_PORTA4) {
		if (PINA & (1<<4))
		return 1;
	}
	else if(a == eS_PORTA5) {
		if (PINA & (1<<5))
		return 1;
	}
	else if(a == eS_PORTA6) {
		if (PINA & (1<<6))
		return 1;
	}
	else if(a == eS_PORTA7) {
		if (PINA & (1<<7))
		return 1;
	}
	else if(a == eS_PORTB0) {
		if (PINB & (1<<0))
		return 1;
	}
	else if(a == eS_PORTB1) {
		if (PINB & (1<<1))
		return 1;
	}
	else if(a == eS_PORTB2) {
		if (PINB & (1<<2))
		return 1;
	}
	else if(a == eS_PORTB3) {
		if (PINB & (1<<3))
		return 1;
	}
	else if(a == eS_PORTB4) {
		if (PINB & (1<<4))
		return 1;
	}
	else if(a == eS_PORTB5) {
		if (PINB & (1<<5))
		return 1;
	}
	else if(a == eS_PORTB6) {
		if (PINB & (1<<6))
		return 1;
	}
	else if(a == eS_PORTB7) {
		if (PINB & (1<<7))
		return 1;
	}
	else if(a == eS_PORTC0) {
		if (PINC & (1<<0))
		return 1;
	}
	else if(a == eS_PORTC1) {
		if (PINC & (1<<1))
		return 1;
	}
	else if(a == eS_PORTC2) {
		if (PINC & (1<<2))
		return 1;
	}
	else if(a == eS_PORTC3) {
		if (PINC & (1<<3))
		return 1;
	}
	else if(a == eS_PORTC4) {
		if (PINC & (1<<4))
		return 1;
	}
	else if(a == eS_PORTC5) {
		if (PINC & (1<<5))
		return 1;
	}
	else if(a == eS_PORTC6) {
		if (PINC & (1<<6))
		return 1;
	}
	else if(a == eS_PORTC7) {
		if (PINC & (1<<7))
		return 1;
	}
	else if(a == eS_PORTD0) {
		if (PIND & (1<<0))
		return 1;
	}
	else if(a == eS_PORTD1) {
		if (PIND & (1<<1))
		return 1;
	}
	else if(a == eS_PORTD2) {
		if (PIND & (1<<2))
		return 1;
	}
	else if(a == eS_PORTD3) {
		if (PIND & (1<<3))
		return 1;
	}
	else if(a == eS_PORTD4) {
		if (PIND & (1<<4))
		return 1;
	}
	else if(a == eS_PORTD5) {
		if (PIND & (1<<5))
		return 1;
	}
	else if(a == eS_PORTD6) {
		if (PIND & (1<<6))
		return 1;
	}
	else if(a == eS_PORTD7) {
		if (PIND & (1<<7))
		return 1;
	}
	
	return 0;
}

