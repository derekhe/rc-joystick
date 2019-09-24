Turns RC Controller into Joystick
==========

This arduino project is used to turn RC receiver's PWM into Joystick signal. It has two solution:
* Use Arduino Leonardo to simulate USB HID device, after flash, it can plug in and use in any computer
    * [See ATmega32u4 folder](./ATMega32u4/README.md)
* Use common Arduino board without HID support, need python script running to to simulate joystick
    * [See UniversalSolution folder](./UniversalSolution/README.md)
