import pyvjoy
import serial

j = pyvjoy.VJoyDevice(1)

ser = serial.Serial('COM10', 230400)  # Change COM10 to your Arduino port

joystick_min = 0x1
joystick_max = 0x8000
while True:
    v = ser.readline().decode("utf-8")
    ch1_real, ch2_real, ch3_real = int(v[0:3],16), int(v[3:6], 16), int(v[6:], 16)

    ch1 = (ch1_real - 1000) / 1000.0
    ch2 = (ch2_real - 1000) / 1000.0
    ch3 = (ch3_real - 1000) / 1000.0

    print(ch1,ch2,ch3)

    j.set_axis(pyvjoy.HID_USAGE_X, int((joystick_max - joystick_min) * ch1))
    j.set_axis(pyvjoy.HID_USAGE_Y, int((joystick_max - joystick_min) * ch2))
    j.set_button(1, ch3 > 0.5)
