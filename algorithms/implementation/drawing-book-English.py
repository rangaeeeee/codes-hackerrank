#!/bin/python3

import sys

def solve(n, p):
    # Complete this function    
    countFront = int(p/2)
    countBack = int(n/2)
    countBack -= countFront
    if(countFront < countBack):
      count = countFront
    else:
      count = countBack
    return count

n = int(input().strip())
p = int(input().strip())
result = solve(n, p)
print(result)