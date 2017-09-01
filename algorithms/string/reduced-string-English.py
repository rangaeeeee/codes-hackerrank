#!/bin/python3

import sys

def super_reduced_string(s):
    # Complete this function
    # Complete this function
    result = []
    strList = list(s)
    prev = strList[0]
    result.append(prev)
    counter = 1
    if len(s) == 1:
        return s
    for x in range(1,len(strList)):
        if not result:
          result.append(strList[x])
          continue
        temp = result.pop()
        if  strList[x] != temp:
            result.append(temp)
            result.append(strList[x])
    if not result:
        return ("Empty String")
    st = ""
    for x in result:
        st += x
    return (st)


s = input().strip()
result = super_reduced_string(s)
print(result)