# roman 
from sys import argv

def get_int(c):
	chars_dict = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
	return chars_dict[c]

# s = input('s : ')
s = argv[1]
s = s.upper()
# print(f's : {s}\n')
chars_list = ['I', 'V', 'X', 'L', 'C', 'D', 'M']

for c in s:
	if c not in chars_list:
		exit()

number = 0
i=0

while i<len(s):
	current = get_int(s[i])
	if i == len(s)-1:
		# print(f'number  = {number}')
		# print(f'char    = {s[i]}')
		# print(f'current = {current}')
		number += current
		# print(f'number  = {number}')
		break
	else:
		nxt 	= get_int(s[i+1])
		# print(f'number  = {number}')
		# print(f'char    = {s[i]}')
		# print(f'current = {current}')
		# print(f'nxt     = {nxt}')
		if current < nxt:
			number += (nxt - current)
			i += 2
		else:
			number += current
			i += 1
		# print(f'number  = {number}')
		# print('----------------------')

print(f'{number}')