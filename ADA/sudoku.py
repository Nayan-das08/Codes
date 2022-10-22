# sudoku

def show(game):
	print()
	for i in range(9):
		for j in range(9):
			if game[i][j] == 0:
				print(f'_ ', end='')
			else:
				print(f'{game[i][j]} ', end='')
			if j == 2 or j == 5:
				print('| ', end='') 
		if i == 2 or i == 5:
			print('\n------+-------+------', end='')
		print()
	print()

game = [
	[0,3,0, 1,0,0, 4,9,6],
	[0,0,5, 0,9,6, 2,1,0],
	[1,0,6, 0,0,0, 0,0,3],

	[9,8,0, 6,7,0, 0,3,1],
	[0,0,0, 0,0,0, 0,0,7],
	[0,0,0, 0,3,1, 0,0,0],

	[3,7,8, 4,1,5, 0,6,0],
	[4,0,0, 7,6,3, 0,8,0],
	[5,0,0, 9,2,8, 0,0,0]
]

show(game)