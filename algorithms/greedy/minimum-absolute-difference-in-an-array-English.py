#!/bin/python3

import sys


n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# your code goes here
a = sorted(a)
#print(a)
minDiff =abs(a[0])
prev = a[0]
for x in a[1:]:
#  print(x)
  temp = abs(prev - x)
  if temp <= minDiff:
    minDiff = temp  
  prev = x
print (minDiff)