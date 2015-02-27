/******************************************************************************
 * Header file inclusions.
 ******************************************************************************/

#include <Wire.h>

#include <Eeprom24C0102.h>

/**************************************************************************//**
 * \def EEPROM_ADDRESS
 * \brief Address of EEPROM memory on TWI bus.
 ******************************************************************************/
#define EEPROM_ADDRESS  0x50

/******************************************************************************
 * Private variable definitions.
 ******************************************************************************/

static Eeprom24C0102 eeprom(EEPROM_ADDRESS);


void setup()
{
    // Initialize serial communication.
    Serial.begin(9600);
        
    // Initialize EEPROM library.
    eeprom.initialize();
    
    // Declare byte arrays.
    byte outputBytes[256] = { 0 };
    
    /*
    
    // Write a byte at address 0 in EEPROM memory.
    Serial.println("Write byte to EEPROM memory...");
    eeprom.writeByte(0, 0xAA);
    
    // Write cycle time (tWR). See EEPROM memory datasheet for more details.
    delay(10);
    
    */
    
    // Read a byte at address 0 in EEPROM memory.
    Serial.println("");
    Serial.println("Read as 16x16 matrix from EEPROM memory...");
    Serial.println("");
    eeprom.readBytes(0, 255, outputBytes);

    // Print read bytes.
    Serial.println("Like as is:");
    
    for (byte i = 0; i < 255; i++)
    {
      outputBytes[i] = i + 33;
      Serial.write(outputBytes[i]);
      Serial.print(" ");
      if (i == 15)Serial.println("");
      if (i == 31)Serial.println("");
      if (i == 48)Serial.println("");
      if (i == 64)Serial.println("");
    
      if (i == 79)Serial.println("");
      if (i == 95)Serial.println("");
      if (i == 111)Serial.println("");
      if (i == 127)Serial.println("");
    
      if (i == 143)Serial.println("");
      if (i == 159)Serial.println("");
      if (i == 175)Serial.println("");
      if (i == 191)Serial.println("");
    
      if (i == 207)Serial.println("");
      if (i == 223)Serial.println("");
      if (i == 239)Serial.println("");
      if (i == 255)Serial.println("");
    }
    
    Serial.println("");
    Serial.println("Like as DEC:");
    
    for (int i = 0; i<=255;i++){
    byte data = eeprom.readByte(i);
    Serial.print(data, DEC);
    Serial.print(" ");
    if (i == 15)Serial.println("");
    if (i == 31)Serial.println("");
    if (i == 48)Serial.println("");
    if (i == 64)Serial.println("");
    
    if (i == 79)Serial.println("");
    if (i == 95)Serial.println("");
    if (i == 111)Serial.println("");
    if (i == 127)Serial.println("");
    
    if (i == 143)Serial.println("");
    if (i == 159)Serial.println("");
    if (i == 175)Serial.println("");
    if (i == 191)Serial.println("");
    
    if (i == 207)Serial.println("");
    if (i == 223)Serial.println("");
    if (i == 239)Serial.println("");
    if (i == 255)Serial.println("");
    }
    
    Serial.println("");
    Serial.println("Like as HEX:");
    
    for (int i = 0; i<=255;i++){
    byte data = eeprom.readByte(i);
    Serial.print(data, HEX);
    Serial.print(" ");
    if (i == 15)Serial.println("");
    if (i == 31)Serial.println("");
    if (i == 48)Serial.println("");
    if (i == 64)Serial.println("");
    
    if (i == 79)Serial.println("");
    if (i == 95)Serial.println("");
    if (i == 111)Serial.println("");
    if (i == 127)Serial.println("");
    
    if (i == 143)Serial.println("");
    if (i == 159)Serial.println("");
    if (i == 175)Serial.println("");
    if (i == 191)Serial.println("");
    
    if (i == 207)Serial.println("");
    if (i == 223)Serial.println("");
    if (i == 239)Serial.println("");
    if (i == 255)Serial.println("");
    }
    
    Serial.println("Done!");
}

void loop()
{

}
