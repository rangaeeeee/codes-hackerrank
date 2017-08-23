from itertools import *
word, value = input().split()
val = sorted(list(word))
val = "".join(val)
for i in range(1,int(value)+1):
  result = combinations(val,i)
  for x in result:
    print("".join(x))