#!/bin/python3

import sys

def solve(n, s, d, m):
    # Complete this function
    result = 0
    start = 0
    if (m == 1 and n == 1 and d == s[0]):
      return 1
    for i in range(0,n-2):
      value = sum (s[start:(i+m-1)])
      start = i
      if (value == d):
        result += 1
    return result

n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
d, m = input().strip().split(' ')
d, m = [int(d), int(m)]
result = solve(n, s, d, m)
print(result)