/*
  Arduipiano - Main sketch
  ------------------------
  This is the main sketch, where all the magic happens. It takes the keys, register them and play them once they're activated.
*/

// Include the keys registered by the user
#include "src/keys.h";

void setup()
{
  // Setup each key from the imported keys
  for (int i = 0; i < (sizeof(keys) / sizeof(*keys)); i++)
  {
    // We put them in pullup mode, so we don't have to place additional resistors.
    pinMode(keys[i].pin, INPUT_PULLUP);
  }
}

void loop()
{
  // For each key, we check if it's activated
  for (int i = 0; i < (sizeof(keys) / sizeof(*keys)); i++)
  {
    if (digitalRead(keys[i].pin) == LOW)
    {
      // Play the note associated with the key if it's activated
      tone(buzzer, keys[i].note, 50);
    }
  }
}
