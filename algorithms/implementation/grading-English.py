#!/bin/python3

import sys

def solve(grades):
    # Complete this function
    result = []
    for x in grades:
        if x < 38 :
            result.append(x)
        else :
            temp = int(5*round(float(x)/5))
            if temp < x :
                result.append(x)
            else :
                result.append(temp)
    return result

n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
   grades_t = int(input().strip())
   grades.append(grades_t)
result = solve(grades)
print ("\n".join(map(str, result)))