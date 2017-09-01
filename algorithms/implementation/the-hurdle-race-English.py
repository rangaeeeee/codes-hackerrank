#!/bin/python3

import sys


n,k = input().strip().split(' ')
n,k = [int(n),int(k)]
height = list(map(int, input().strip().split(' ')))
# your code goes here
tall = max (height)
if k >= tall:
  print("0")
else:
  print(tall-k)