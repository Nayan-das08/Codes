# K-NN Classifier

#importing the libraries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

# import the dataset
dataset = pd.read_csv("C:/Users/acer/Machine Learning A-Z Template Folder/Part 3 - Classification/Section 15 - K-Nearest Neighbors (K-NN)/Social_Network_Ads.csv")
X = dataset.iloc[:, [2 ,3]].values
y = dataset.iloc[:, 4].values

#Splitting the data set into test and training set
from sklearn.model_selection import train_test_split
X_train, X_test,y_train,y_test = train_test_split(X,y,test_size=0.25,random_state=0)

# feature Scaling
from sklearn.preprocessing import StandardScaler
Sc_X = StandardScaler()
X = Sc_X.fit_transform(X)
X_test = Sc_X.transform(X_test)

# Fitting K-NN Classifier to the Training set
from sklearn.neighbors import KNeighborsClassifier
classifier = KNeighborsClassifier(n_neighbors = 5,metric= 'minkowski' , p=1)
classifier.fit(X_train,y_train)

# Predicting the Test set Result
y_pred = classifier.predict(X_test)

# Making the Confusion Matrix
from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)


