#! /usr/bin/python3
level = 0
valley = 0
N = int(input())
steps = list(str(input()))
prevLevel = level
for i in steps:  
  if(i == 'D'):
    level -= 1
  else:
    level += 1
  if (level == 0 and prevLevel < 0):
    valley += 1
  prevLevel = level
print(valley)