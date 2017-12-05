#!/usr/bin/python3
import matplotlib.pyplot as plt

with open('scanvalues.txt') as file:
    data = file.readlines()

plt.plot(data)
plt.title('Intensity during circular scan with donut')
plt.xlabel('Scanning steps')
plt.ylabel('Intensity normalized to maximum of donut')
plt.show()
