#!/bin/python3

import sys

def getMoneySpent(keyboards, drives, s):
    # Complete this function
    maxSum = 0
    for x in keyboards:
      for y in drives:  
        val = x + y
        if((val) <= s and maxSum < (val)):
          maxSum = val
    if(maxSum == 0):
      maxSum = -1
    return maxSum

s,n,m = input().strip().split(' ')
s,n,m = [int(s),int(n),int(m)]
keyboards = list(map(int, input().strip().split(' ')))
drives = list(map(int, input().strip().split(' ')))
#  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
moneySpent = getMoneySpent(keyboards, drives, s)
print(moneySpent)