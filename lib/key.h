/*
  Arduipiano - Key class declaration
  ----------------------------------
  In this file, we declare the Key class that will help us easily configure those which are on our piano.
*/

#ifndef KEY_H_
#define KEY_H_

class Key
{
public:
  /*!
   * Create a new key
   * 
   * @param pin The digital pin on which the key is connected to
   * @param note The frequency of the note that the key will play (in Hertz)
   */
  Key(int pin, int note)
  {
    this->pin = pin;
    this->note = note;
  }

  int pin;  /*!< The digital pin on which the key is connected to */
  int note; /*!< The frequency of the note that the key will play (in Hertz) */
};

#endif
