#!/bin/python3

import sys

def divisibleSumPairs(n, k, ar):
    # Complete this function
    result = 0
    for i in range(0,n):
      for j in range(i+1,n):
        total = ar[i] + ar[j]
        if (total % k) == 0:
          result += 1
#        print("i : " + str(i) + " j : " + str(j))
    return result    

n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
result = divisibleSumPairs(n, k, ar)
print(result)