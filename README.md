# 🎹 Arduipiano 🔌

**A piano made with an Arduino.**

## ⌨ Hardware setup

To make this piano, you will need :

- An Arduino (any model)
- A passive buzzer
- Buttons
- Wires

Connect the buzzer to a pin, and buttons in pullup mode.

Here is an example with one buzzer (pin 13) and one button (pin 5) on an Arduino Uno :

![Basic setup](docs/basic-setup.png)

## 📲 Software setup

Register your piano's keys and the buzzer's pin in the src/keys.h file. Then, upload the main.ino sketch into the board. You're ready !
