#!/bin/python3

import sys


n = int(input().strip())
unsortedSmall = []
unsortedBig = []
unsorted_i = 0
bigNumber = 10**10
for unsorted_i in range(n):
  unsorted_t = str(input().strip())
  if (len(unsorted_t) <= 1000):
    unsortedSmall.append(int(unsorted_t))
  else:
    unsortedBig.append(unsorted_t)
# your code goes here
resultSmall = sorted(unsortedSmall)
resultBig   = sorted(unsortedBig)
for x in resultSmall:
  print(x)
for x in resultBig:
  print(x)