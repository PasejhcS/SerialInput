#include <Arduino.h>
#include "SerialInput.h"

const long SerialInput::getInt()
{
    String s=Serial.readStringUntil('\n');
    return s.toInt();
}
const float SerialInput::getFloat()
{
    String s=Serial.readStringUntil('\n');
    return s.toFloat();
    
}