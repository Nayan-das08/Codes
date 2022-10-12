from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics

iris = load_iris()

x = iris.data   # feature matrix
y = iris.target # response vector

feature_names = iris.feature_names
target_names = iris.target_names

print("Dataset size          : ",x.shape)
#print(y.shape)

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.1, random_state=1)
print("Training dataset size : ", x_train.shape)
print("Testing dataset size  : ", x_test.shape)
#print(y_train.shape)
#print(y_test.shape)

clf = KNeighborsClassifier(n_neighbors=3)

clf.fit(x_train,y_train)

pred = clf.predict(x_test)
#print(pred)
accuracy = metrics.accuracy_score(y_test, pred)
print("\nAccuracy for testing dataset = ", accuracy)

#sample = [[1,2,3,4], [9,8,7,6]]
#pred2 = clf.predict(sample)

#accuracy = metrics.accuracy_score(sample, pred2)
print("\nAccuracy for sample dataset = ", accuracy)
