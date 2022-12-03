from sys import argv
from os import system

system('cls')

# print(f'\n{argv[1]}')

para = []
point = ''
skip = 0
for c in argv[1]:
	if skip == 1:
		skip = 0
		continue
	else:
		if c != '.':
			point += c
		else:
			para.append(point)
			point = ''
			skip = 1

for i in para:
	print(f'- {i}')


# file = open(r'D:\Code\problems\paste_summary_here.txt', 'w')

# for i in para:
# 	# system(f'echo {i} >> paste_summary_here.txt')
# 	file.write(f'- {i}\n')

# # system(r'type D:\Code\problems\paste_summary_here.txt | clip')
# system(f'type paste_summary_here.txt')
