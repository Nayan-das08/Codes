import pandas as pd
from scipy.sparse import data
from sklearn.model_selection import train_test_split
from sklearn.naive_bayes import GaussianNB
from sklearn.datasets import load_iris

iris = load_iris()
#print(iris.data[:10])
df = pd.DataFrame(data=iris.data, columns=iris.feature_names)
df.info()

df["target"] = iris.target
print(df.head())




"""dataset = main_ds.drop(columns=['eventid','nkill', 'nwound', 'nhostkid'])

x = dataset.drop(columns=['gname'])

y = dataset.drop(dataset.iloc[0:0, 0:8], axis=1)
y = y.drop(y.iloc[0:0, 1:], axis=1)

x_train, x_test, y_train, y_test = train_test_split(x,y, test_size=0.2, random_state=1)

clf = GaussianNB()
model = clf.fit(x_train, y_train)
preds = clf.predict(x_test)

print(preds)
"""