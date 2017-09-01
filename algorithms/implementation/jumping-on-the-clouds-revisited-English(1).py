#!/bin/python3

import sys


n,k = input().strip().split(' ')
n,k = [int(n),int(k)]
c = [int(c_temp) for c_temp in input().strip().split(' ')]

Energy = 100
start = k
start %= n
while(start != 0):
#  print (start)
  if (c[start] == 1):
    Energy -= 2
  Energy -= 1
  start += k
  start %= n

if (c[start] == 1):
  Energy -= 2
Energy -= 1

print(Energy)