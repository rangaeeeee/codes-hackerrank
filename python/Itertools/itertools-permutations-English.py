from itertools import *
word, value = input().split()
val = sorted(list(word))
val = "".join(val)
result = permutations(val,int(value))
for x in result:
  print("".join(x))