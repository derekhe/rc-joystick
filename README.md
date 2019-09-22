Turns RC Controller into Joystick
==========

This arduino project is used to turn RC receiver's PWM into Joystick signal. Thanks to Arduino Leonardo, Pro Micro with ATmega32u4 chips, which can act as HID devices so it is very easy to simulate a USB Joystick. Joystick can be used in any game using joystick. It can also works in Virtual RC Pro, so you don't need to buy the adapter.

# Prerequisite

* Arduino board: Arduino Leonardo or Pro Micro with ATmega32u4
* Latest Arduino IDE
* Install HID library: https://github.com/NicoHood/HID

# Install

* Choose Arduino Leonardo

![Arduino](./resources/arduino.png?raw=true)

* Open and flash ATMega32u4.ino in ATmega32u4 folder

# Connection

Caution: Make sure you connect VCC and GND correctly otherwise your receiver may be damaged.
* VCC to RC receiver's VCC
* GND to RC receiver's GND
* Pin 5 to RC receiver's CH1
* Pin 6 to RC receiver's CH2

# Test

Open joystick controller and you will see "Arduino Leonardo"

![Joystick](./resources/joystick.png?raw=true)

You can check details here:

![details](./resources/joystick.png?raw=true)

If you first time setup the device, you may see the XY axis not in center. Please back to settings and calibrate it first.

# Play

In game, choose "Arduino Leonardo". If your accelerate, steering is reversed, please change in your game. If you find accelerate is steering, you may connect wrong PIN to receiver's channel.

![vc-pro](./resources/vc-pro.png?raw=true)
