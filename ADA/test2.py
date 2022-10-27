# from os import system

# system('cls')
# print("hello")
# print('Neha')
# print(f'\033[{1};{2}H10')

# -----------------------------------

import pandas as pd

df = pd.DataFrame({ 'ID':['A', 'B', 'C','D','E'], 'myvalue':['group1','group1','group2','group3','group3'] })
print(df)
df['myvalue']=pd.Categorical(df['myvalue'])
print()
# print(pd.Categorical(df['myvalue']))
print(df['myvalue'].cat.codes)

a = [i for i in range(10)]
print(pd.Series(a))