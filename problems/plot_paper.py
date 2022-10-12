# import pandas as pd
# import numpy as np
import matplotlib.pyplot as plt

x 			= ['Logistic', 'KNN', 'AdaBoost', 'CNN']

accuracy 	= [0.7301, 0.7634, 0.828, 0.9318]
f1 			= [0.6932, 0.6717, 0.7852, None]
auc 		= [0.7326, 0.737, 0.8189, 0.9779]
recall 		= [0.7466, 0.5927, 0.7692, 0.9327]

plt.figure('accuracy')
plt.plot(x,accuracy)
plt.scatter(x,accuracy)
plt.xlabel('Model')
plt.ylabel('Accuracy')
plt.title('Accuracy with different models')
plt.show()

plt.figure('auc')
plt.plot(x,auc)
plt.scatter(x,auc)
plt.xlabel('Model')
plt.ylabel('AUC-ROC')
plt.title('AUC-ROC with different models')
plt.show()

plt.figure('recall')
plt.plot(x,recall)
plt.scatter(x,recall)
plt.xlabel('Model')
plt.ylabel('Recall')
plt.title('Recall with different models')
plt.show()