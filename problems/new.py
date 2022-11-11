import git
from os import system

repo = git.Repo('D:\Leetcode')

modified = ''
for i in range(len(repo.index.diff(None))):
	modified += repo.index.diff("Head")[i].a_path + ', '
modified = modified[:-2]

untracked = ''
for file in repo.untracked_files:
	untracked += file + ', '
untracked = untracked[:-2]

print(f'git commit -m "[M]: {modified} [A]: {untracked}"')
# hehehe