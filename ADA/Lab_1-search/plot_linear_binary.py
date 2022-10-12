import matplotlib.pyplot as plt

x = []
y = []
x2 = []
y2 = []

file = open('linear_vals_2.dat')
for i in file:
	a = i.replace("\n", "")
	x.append(int(a.split(' ')[0]))
	y.append(int(a.split(' ')[1]))

file = open('binary_vals.dat')
for i in file:
	a = i.replace("\n", "")
	x2.append(int(a.split(' ')[0]))
	y2.append(int(a.split(' ')[1]))

plt.plot(x,y)
plt.plot(x2,y2)
plt.xlabel('no. of elements')
plt.ylabel('no. of steps taken')
plt.title('Complexity comparison of linear search and binary search')
plt.legend(['linear search', 'binary search'])
plt.show()