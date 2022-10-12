import pandas as pd
from scipy.sparse import data
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
from sklearn.preprocessing import LabelBinarizer

main_ds = pd.read_csv("data.csv")
#main_ds.info()

dataset = main_ds.drop(columns=['eventid','nkill', 'nwound', 'nhostkid'])
#dataset.info()

x = dataset.drop(columns=['gname'])
#x.info()

y = dataset.drop(dataset.iloc[0:0, 0:8], axis=1)
#y.info()

y = y.drop(y.iloc[0:0, 1:], axis=1)
#y.info()

x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.2, random_state=1)
#print(len(x_train))
#print(len(x_test))
#print(len(y_train))x
#print(len(y_test))

# for training
#   x_train is feature set 
#   y_train is target set 

# for testing
#   x_test is feature set 
#   y_test is target set 





#clf = KNeighborsClassifier()

#clf = clf.fit(x_train, y_train)

#y_pred = clf.predict(x_test)

#result = metrics.classification_report(y_test, y_pred)
#print(result)
