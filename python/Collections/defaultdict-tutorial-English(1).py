from collections import *

n,m = map(int,input().split())
defaultDictN = defaultdict(list)

for i in range(1,n+1):
  temp = input()
  defaultDictN[temp].append(i)
for i in range(m):
  val = defaultDictN.get(input())
  if(val):
    for x in val:
        print (x,end = " ")
    print()
  else:
    print("-1")