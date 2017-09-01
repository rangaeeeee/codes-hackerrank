#!/bin/python3

import sys

def solve(year):
    # Complete this function
    if(year == 1918):
      date = str("26.09.1918")
    if(year < 1918):
      if((year%4) == 0):
        date = str("12.09.") + str(year)
      else:
        date = str("13.09.") + str(year)
    elif (year > 1918):
      if( ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0)):
        date = str("12.09.") + str(year)
      else:
        date = str("13.09.") + str(year)
    return date

year = int(input().strip())
result = solve(year)
print(result)