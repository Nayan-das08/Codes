from sklearn.datasets import fetch_california_housing
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
import pandas as pd

housing = fetch_california_housing()
#['MedInc', 'HouseAge', 'AveRooms', 'AveBedrms', 
# 'Population', 'AveOccup', 'Latitude', 'Longitude']
print(housing.feature_names)
print(housing.target_names)

x = housing.data   # feature matrix
y = housing.target # response vector

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.1, random_state=1)

classifier = KNeighborsClassifier(n_neighbors=5)

classifier = classifier.fit(x_train, y_train)

#y_pred = classifier.predict(x_test)
#print(pred)
#result = metrics.classification_report(y_test, y_pred)
#print(result)

#p = classifier.predict_proba(x_test)

#a = metrics.roc_auc_score(y_test, p, multi_class="ovr")
#print(a)
