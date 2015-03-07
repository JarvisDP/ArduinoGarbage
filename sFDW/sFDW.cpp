#include "sFDW.h"

void sFDW::sPin(int pin, boolean state)
{
	switch (state)
	{	
	case 0:
		if (pin >= 8)
		{	//тут от 8 до 19
			if (pin >=14)
				{portc &= _pinsState[pin];} //отсекли 14-19 и загнали в portc
				else 
					{portb &= _pinsState[pin];} //от 8-13 и загнали в portb
		}
		else
		{portd &= _pinsState[pin];} //отсекли 0-7 и загнали в portd
		break;
	case 1:
		if (pin >= 8)
		{	//тут от 8 до 19
			if (pin >=14)
				{portc &= !_pinsState[pin];} //отсекли 14-19 и загнали в portc
				else 
					{portb &= !_pinsState[pin];} //от 8-13 и загнали в portb
		}
		else
		{portd &= !_pinsState[pin];} //отсекли 0-7 и загнали в portd
		break;
	}
}

void sFDW::mPinsStateHigh(int pins[20])
{
	
	for (_i = 0; _i <= sizeof(pins)-1; _i++) 
	{
		pin=pins[_i];
		sFDW::sPin(pin, 1);
	}
}

void sFDW::mPinsStateLow(int pins[20])
{
	
	for (_i = 0; _i <= sizeof(pins)-1; _i++) 
	{
		pin=pins[_i];
		sFDW::sPin(pin, 0);
	}
}
