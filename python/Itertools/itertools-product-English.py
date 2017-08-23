from itertools import product
A = list(map(int,input().split()))
B = list(map(int,input().split()))
result = list(product(A,B))
for x in result:
  print(x,end=" ")