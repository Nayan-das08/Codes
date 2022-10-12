import matplotlib.pyplot as plt
import sys

x = []
y = []
# x2 = []
# y2 = []

file = open(f'{sys.argv[1]}.dat')
for i in file:
	a = i.replace("\n", "")
	x.append(int(a.split(' ')[0]))
	y.append(int(a.split(' ')[1]))

plt.plot(x,y)
plt.xlabel('no. of elements')
plt.ylabel('no. of steps taken')
plt.title(f'plot of {sys.argv[1]}')
plt.show()

