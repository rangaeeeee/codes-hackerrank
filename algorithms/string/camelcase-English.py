#!/bin/python3

import sys
import string

s = input().strip()

inputVal = list(s)
counter = 1

for i in s:
  if i in string.ascii_uppercase:
    counter += 1

print (counter)