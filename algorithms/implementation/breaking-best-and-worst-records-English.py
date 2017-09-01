#!/bin/python3

import sys

def getRecord(s):
  # Complete this function
  highest = s[0]
  lowest  = s[0]
  hCount  = 0
  lCount  = 0
  
  for x in s[1:] :
    if highest < x:
      hCount += 1
      highest = x
    if lowest > x:
      lCount += 1
      lowest  = x

  result = [hCount,lCount]
  return result

n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
result = getRecord(s)
print (" ".join(map(str, result)))