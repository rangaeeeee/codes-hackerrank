from collections import Counter
K = int(input())
A = list(map(int,input().split()))
B = set(A)
B = list(B)
rooms = {}.fromkeys(B,0)
for key in A:
  rooms[key] += 1
for key in rooms:
  if rooms[key]  == 1:
    print(key)