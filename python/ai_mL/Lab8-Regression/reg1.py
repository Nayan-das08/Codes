import pandas as pd
import numpy as np
import matplotlib.pyplot as py
print("Hello")

data = pd.read_csv("USA_Housing.csv")

x_train = data[['Avg. Area Income']]
y_train = data[['Price']]

py.scatter(x_train,y_train, c='blue')
py.xlabel('House price')
py.ylabel('Average income')

theta0 = 0
theta1 = 20
predicted = theta0 + theta1*x_train
print(f"theta0 = {theta0}")
print(f"theta1 = {theta1}")
py.scatter(x_train,y_train,c='blue')
py.plot(x_train,predicted,'-y')
py.xlabel('House price')
py.ylabel('Average income')
py.show()
