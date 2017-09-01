#!/bin/python3

import sys

def migratoryBirds(n, ar):
    # Complete this function
    result = {}
    for x in range(1,6):
      result[x] = ar.count(x) 
    
    Max = max(result.values())
    for x in range(1,6):
      if (result[x] == Max):
        return x
      
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = migratoryBirds(n, ar)
print(result)