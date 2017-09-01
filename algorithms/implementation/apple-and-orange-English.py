#!/bin/python3

import sys


s,t = input().strip().split(' ')
s,t = [int(s),int(t)]
a,b = input().strip().split(' ')
a,b = [int(a),int(b)]
m,n = input().strip().split(' ')
m,n = [int(m),int(n)]
apple = [int(apple_temp) for apple_temp in input().strip().split(' ')]
orange = [int(orange_temp) for orange_temp in input().strip().split(' ')]

house = list(map(int,range(s,t)))
appleCount = 0
orangeCount = 0

for x in apple :
    temp = a + x
    if s <= temp <= t :
        appleCount += 1
for x in orange :
    temp = x + b
    if s <= temp <= t :
        orangeCount += 1        
print (appleCount)
print (orangeCount)