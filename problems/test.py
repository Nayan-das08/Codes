# x = 15
# z = 20

# a = [x/(z-i)*20 for i in range(20)]

# for i in range(20):
# 	print(f'{x}/{z}-{i} = {x}/{z-i} = {a[i]}')

def remap(val, from1, to1, from2, to2):
	x = (val-from1)/(to1-from1)*(to2-from2) + from2
	return x

import numpy as np
import matplotlib.pyplot as plt

x = 10
width = 719
z = width
array = []

for i in range(1, 719):
	val = remap((x/z), 0, 1, 0, width)
	array.append(val)
	print(f'z={z} \t{val}')
	z = z - 1

plt.plot(array)
plt.show()