#!/bin/python3

import sys

arr = list(map(int, input().strip().split(' ')))

arr.sort()
sum = 0
for x in arr[0:4]:
    sum = sum + x
print (sum,end=' ')
sum = 0
for x in arr[1:5]:
    sum = sum + x
print (sum,end='')