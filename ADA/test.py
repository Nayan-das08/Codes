import pygame as pg

pg.display.set_mode((400,400))

running = True

while running:
	for event in pg.event.get():
		if event.type == pg.QUIT:
			running = False