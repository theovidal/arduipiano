class Key
{
public:
  Key(int pin, int note)
  {
    this->pin = pin;
    this->note = note;
  }
  ~Key() {}
  int pin;
  int note;
};