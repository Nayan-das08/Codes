from turtle import pd
import numpy as np
import matplotlib.pyplot as plt
import pandas
import pandas as pd

def getCoeff(x,y):
    x_mean = np.mean(x)
    y_mean = np.mean(y)

    Sxx = np.sum(x*x) - x_mean*x_mean*len(x)
    Syy = np.sum(y*y) - y_mean*y_mean*len(y)
    Sxy = np.sum(x*y) - x_mean*y_mean*len(x)

    B = Sxy/Sxx
    A = y_mean - B*x_mean
    return (A,B)

#----------------------------------------------------

def calcLine(x, y, coeff):
    y_pred = coeff[0] + coeff[1]*x
    MSE = np.sum((y-y_pred)**2)
    print(f"A = {coeff[0]} \nB = {coeff[1]}")
    print(f"Mean Squared Error = {MSE}")
    plotLine(x,y,y_pred, 'Price Deflation Rate')

#----------------------------------------------------

def plotLine(x,y,y_pred, x_label):
    plt.scatter(x,y)
    plt.plot(x,y_pred, color='r')
    plt.xlabel(x_label)
    plt.ylabel('No. of People Employed')

