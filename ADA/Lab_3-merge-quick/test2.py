import numpy as np
import matplotlib.pyplot as plt

x = []
y = []

file = open("quick_vals.dat", 'r')

for i in file:
    a = i.replace("\n", "")
    x.append(int(a.split(' ')[0]))
    y.append(int(a.split(' ')[1]))

x_new = np.array(x)

plt.plot(x,y)
plt.plot(x, x_new**2)
plt.grid()
plt.show()

# x_new = np.array(x)
# y_new = np.array(y)

# z = (y_new/x_new).reshape(-1,1)
# print(np.mean(z))