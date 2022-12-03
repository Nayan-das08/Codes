# git-commit-cmd

from os import system

system(r'powershell -command get-date -format {"PC\: ddd dd MMM yyyy | hh\:mm tt"} > D:\Code\problems\date.txt')

file = open(r'D:\Code\problems\date.txt', 'r')

date = file.read()[:-1]
system("git add *")
system(f'git commit -m "{date}"')