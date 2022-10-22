a = [[1,2],[3,4],[1,2]]
# b = [5,6]
# c = [1,2]

x = {tuple(i) for i in a}
# x.add(tuple(b))
# print(x)

a = [5,2,9,4,2,7,5,10]
b = [i for i in a].sort()
print(a)
print(b)