#include "src/keys.h";

void setup()
{
  for (int i = 0; i < (sizeof(keys) / sizeof(*keys)); i++)
  {
    pinMode(keys[i].pin, INPUT_PULLUP);
  }
}

void loop()
{
  for (int i = 0; i < (sizeof(keys) / sizeof(*keys)); i++)
  {
    if (digitalRead(keys[i].pin) == LOW)
    {
      tone(buzzer, keys[i].note, 50);
    }
  }
}
