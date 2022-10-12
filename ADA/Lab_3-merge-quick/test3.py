import numpy as np
import matplotlib.pyplot as plt

x1 = []
y1 = []
x2 = []
y2 = []

file = open("quick_vals.dat", 'r')
file2 = open("merge_vals.dat", "r")

for i in file:
    a = i.replace("\n", "")
    x1.append(int(a.split(' ')[0]))
    y1.append(int(a.split(' ')[1]))

for i in file2:
    a = i.replace("\n", "")
    x2.append(int(a.split(' ')[0]))
    y2.append(int(a.split(' ')[1]))

# x_new = np.array(x)

plt.plot(x1,y1)
plt.plot(x2,y2)
# plt.plot(x, x_new**2)
plt.grid()
plt.legend(['quicksort', 'mergesort'])
plt.show()

# x_new = np.array(x)
# y_new = np.array(y)

# z = (y_new/x_new).reshape(-1,1)
# print(np.mean(z))