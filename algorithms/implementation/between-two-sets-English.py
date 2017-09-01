#!/bin/python3

import sys
from fractions import gcd
from functools import reduce

def lcm(a,b):
  return ((a*b)/gcd(a,b))
def getTotalX(a, b):
    # Complete this function
    result = 0
    a.sort()
    b.sort()
    aGcd = int(reduce(gcd,a))
    aLcm = int(reduce(lcm,a))
#    if len(a) > 1:
#      aLcm = int((a[-1] * a[-2]) / aGcd)
#    else :
#      aLcm = a[0]
    bGcd = int(reduce(gcd,b))
    gcdList = list(range(aLcm,b[0] + 1,aLcm))
#    print (gcdList)
#    print("aLcm : " + str(aLcm) + " aGcd : " + str(aGcd) + " bGcd : " + str(bGcd))
    for x in gcdList:
      if not bGcd % x:
        result += 1
    return result

n, m = input().strip().split(' ')
n, m = [int(n), int(m)]
a = list(map(int, input().strip().split(' ')))
b = list(map(int, input().strip().split(' ')))
total = getTotalX(a, b)
print(total)