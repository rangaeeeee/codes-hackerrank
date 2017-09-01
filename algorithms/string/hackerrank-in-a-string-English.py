#!/bin/python3

import sys
import re

q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    # your code goes here
    if re.match("^.*h+(.)*a+(.)*c+(.)*k+(.)*e+(.)*r+(.)*r+(.)*a+(.)*n+(.)*k+(.)*$",s):
      print("YES")
    else:
      print("NO")