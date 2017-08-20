#!/usr/bin/env python
import serial
import time
import sys
 
sys.stdout = open("bio.csv","w")
ser = serial.Serial('COM3', timeout=0.1) 
 
while True:
    in_str = ser.readline().decode('utf-8')
    if in_str != '':
        print(int(int(in_str)/4))