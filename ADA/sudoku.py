# sudoku
import copy
import time
from os import system

def show(game):
	# print()
	for i in range(1,10):
		for j in range(1,10):
			if game[i][j] == 0:
				print(f'_ ', end='')
			else:
				print(f'{game[i][j]} ', end='')
			if j == 3 or j == 6:
				print('| ', end='') 
		if i == 3 or i == 6:
			print('\n------+-------+------', end='')
		print()
	print()

def gotoxy(y,x):
	print(f'\033[{y};{x}H')

def goto_item(i,j):
	y = i
	x = 2*j - 1

	if i > 6:
		y += 2
	elif i > 3:
		y += 1

	if j > 6:
		x += 4
	elif j > 3:
		x += 2

	# print(f'{i}, {j}, {y}, {x}')
	gotoxy(y,x)

def edit(game):
	for i in range(9):
		game[0][i] = i+1
		show(game)
		time.sleep(0.2)
		system('cls')

	

# ----------------------------------------

system('cls')

game = [
	[0, 1,2,3, 4,5,6, 7,8,9],
	[1, 0,3,0, 1,0,0, 4,9,6],
	[2, 0,0,5, 0,9,6, 2,1,0],
	[3, 1,0,6, 0,0,0, 0,0,3],

	[4, 9,8,0, 6,7,0, 0,3,1],
	[5, 0,0,0, 0,0,0, 0,0,7],
	[6, 0,0,0, 0,3,1, 0,0,0],

	[7, 3,7,8, 4,1,5, 0,6,0],
	[8, 4,0,0, 7,6,3, 0,8,0],
	[9, 5,0,0, 9,2,8, 0,0,0]
]

canvas = []
for row in game:
	canvas.append([i for i in row])

show(canvas)
goto_item(8,8)

# _ 3 _ | 1 _ _ | 4 9 6
# _ _ 5 | _ 9 6 | 2 1 _
# 1 _ 6 | _ _ _ | _ _ 3
# ------+-------+------
# 9 8 _ | 6 7 _ | _ 3 1
# _ _ _ | _ _ _ | _ _ 7
# _ _ _ | _ 3 1 | _ _ _
# ------+-------+------
# 3 7 8 | 4 1 5 | _ 6 _
# 4 _ _ | 7 6 3 | _ 8 _
# 5 _ _ | 9 2 8 | _ _ _

# _ 3 _ 1 _ _ 4 9 6
# _ _ 5 _ 9 6 2 1 _
# 1 _ 6 _ _ _ _ _ 3
# 9 8 _ 6 7 _ _ 3 1
# _ _ _ _ _ _ _ _ 7
# _ _ _ _ 3 1 _ _ _
# 3 7 8 4 1 5 _ 6 _
# 4 _ _ 7 6 3 _ 8 _
# 5 _ _ 9 2 8 _ _ _