#!/bin/python3

import sys
from collections import Counter
Num = int(input())
a = list(map(int,input().split()))

count = 0
MaxCount = 0
uniqueKeys = set(a)
freqList = Counter(a)
for key in uniqueKeys:
  countLeft  = freqList[key-1] + freqList[key] 
  countRight = freqList[key]   + freqList[key+1]

  if countLeft > MaxCount:
    MaxCount = countLeft
  if countRight > MaxCount:
    MaxCount = countRight
print (MaxCount)