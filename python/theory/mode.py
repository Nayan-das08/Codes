a = int(input("Enter number of elements : "))

list = []
for i in range(a):
    val = int(input(f"Enter list[{i}] : "))
    list.append(val)

freq = {}
for i in list:
    freq[i] = 0 

for i in list:
    freq[i] += 1

print(freq)

# assumed values
mode = list[0]
mode_val = freq[list[0]]

for key in freq:
    if (freq[key] > mode_val):
        mode = key
        mode_val = freq[key]

print(f"mode = {mode}")
    
