from itertools import *

inputValue = list(map(int,input()))
result = [(len(list(resultVal)),resultKey) for resultKey,resultVal in groupby(inputValue)]
for x in result:
  print(x,end=" ")