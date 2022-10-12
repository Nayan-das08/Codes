import matplotlib as m
from matplotlib import markers
import matplotlib.pyplot as plt
import numpy as np

X = np.arange(20,420,40)
Y = np.array([0.18, 0.37, 0.35, 0.78, 0.56, 0.75, 1.18, 1.36, 1.17, 1.65])

x_mean = np.mean(X)
y_mean = np.mean(Y)


Sxx = np.sum(X*X) - len(X)*x_mean*x_mean
Syy = np.sum(Y*Y) - len(Y)*y_mean*y_mean
Sxy = np.sum(X*Y) - len(X)*x_mean*y_mean

B = Sxy/Sxx
A = y_mean - B*x_mean

y_pred = A + B*X
MSE = np.sum((Y-y_pred)**2)

print(f"A = {A} \nB = {B}")
print(f"Mean Squared Error = {MSE}")


i = list(X)
i.append(420)
i.append(460)
plt.scatter(X,Y, marker='o')
plt.plot(X,y_pred, color='r')
plt.xticks(i)
plt.show()
