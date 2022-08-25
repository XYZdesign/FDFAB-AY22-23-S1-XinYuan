import serial
import time
import keyboard
b = '0'
ser=serial.Serial('COM5',baudrate=9600,timeout=1)

while 1:
    Data=ser.readline()
    if Data == b'1\r\n':
        keyboard.send("1")
    if Data == b'2\r\n':
        keyboard.send("2")
    if Data == b'3\r\n':
        keyboard.send("3")
    if Data == b'4\r\n':
        keyboard.send("4")
