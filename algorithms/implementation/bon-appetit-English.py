#!/bin/python3

import sys

def bonAppetit(n, k, b, ar):
    # Complete this function
    result = b - ((sum(ar) - ar[k])/2)
    if(result == 0):
      return("Bon Appetit")
    return (int(result))

n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
b = int(input().strip())
result = bonAppetit(n, k, b, ar)
print(result)