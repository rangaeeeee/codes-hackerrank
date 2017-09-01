#!/bin/python3

import sys

def sockMerchant(n, ar):
    # Complete this function
    pairCount = 0
    pairSocks = {}
    for i in range(1,101):
      pairSocks[i] = ar.count(i)
    for i in range(1,101):
      pairCount = pairCount + int(pairSocks[i]/2)
    return pairCount

n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = sockMerchant(n, ar)
print(result)