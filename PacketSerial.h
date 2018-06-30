#ifndef PacketSerial_H
#define PacketSerial_H

#include <Arduino.h>

class PacketSerial
{
  public:
  PacketSerial(int32_t *registar);
  void writeData(int32_t data, uint8_t reg);
  void readData();
  void writeFloatData(float data, uint8_t reg);
  float getFloatData(uint8_t reg);

  private:
  int32_t* _registar;
  const uint8_t HEAD_BYTE = 0x7E;
  const uint8_t ESCAPE_BYTE = 0x7D;
  const uint8_t ESCAPE_MASK = 0x20;
};

void serialEvent();

#endif
