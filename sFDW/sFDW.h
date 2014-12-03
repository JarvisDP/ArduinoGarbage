/*
	sFDW.h - Library for easy switch pins state.
	Created by Dmitry Pogudo-Georgov, December 3, 2014.
	Inspired by https://github.com/dubkov and 
	https://github.com/ms234ms234 GitHub users.
	Released into the public domain.
	Functions of this library:
	- sPin(pin №, pin HIGH/LOW status <1/0> )
	- mPinsStateHigh(pins numbers for HIGH state switch, as array - separate by ",")
	- mPinsStateLow(pins numbers for LOW state switch, as array - separate by ",")
*/

#ifndef sFDW_h
#define sFDW_h
#include "WProgram.h"
#include "Arduino.h""

class sFDW
{
  public:
    void sPin(int pin, boolean state);
    void mPinsStateHigh(int pins);
	void mPinsStateLow(int pins);
	int pins[20]={99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99,99};
	int pin;
	boolean state;
  private:
	const byte _pinsState[20]={
	{11111110},  //0  portd
	{11111101},  //1
	{11111011},  //2
	{11110111},  //3
	{11101111},  //4
	{11011111},  //5
	{10111110},  //6
	{01111111},  //7
	
	{11111110},  //8  portb
	{11111101},  //9
	{11111011},  //10
	{11110111},  //11
	{11101111},  //12
	{11011111},  //13
	
	{11111110},  //14 portc
	{11111101},  //15
	{11111011},  //16
	{11110111},  //17
	{11101111},  //18
	{11011111}}; //19
	int _i;
};

#endif
