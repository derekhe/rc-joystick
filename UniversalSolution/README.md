Turns RC Controller into Joystick
==========

This arduino project is used to turn RC receiver's PWM into Joystick signal. Thanks to pyvjoy which can act as HID devices so it is very easy to simulate a USB Joystick. Joystick can be used in any game using joystick. It can also works in Virtual RC Pro, so you don't need to buy the adapter.

# Prerequisite

* Any Arduino board with PWM support
* Latest Arduino IDE
* Python 3.6+

# Install

* Open and flash joystick/joystick.ino into your Arduino board
* Install vjoystick http://vjoystick.sourceforge.net/site/
* pip3 install -r requirements.txt
* Follow: https://github.com/maxofbritton/pyvjoy to copy the vJoyInterface.dll file from your installation location to the location of the python package.

# Connection

Caution: Make sure you connect VCC and GND correctly otherwise your receiver may be damaged.
* VCC to RC receiver's VCC
* GND to RC receiver's GND
* Pin 5 to RC receiver's CH1
* Pin 6 to RC receiver's CH2
* Pin 3 to RC receiver's CH3 (if you don't have, just leave it)

# Run

Adjust COM setting in sim.py and 

```
python3 sim.py
```

You will see monitor vJoy is working

# Play

In game, choose "vJoy". If your accelerate, steering is reversed, please change in your game. If you find accelerate is steering, you may connect wrong PIN to receiver's channel.