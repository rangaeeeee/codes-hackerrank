from itertools import repeat
num = int(input())
inputList = list(map(int,input().split()))

result = [0]*100

for x in inputList:
  if x < 100:
    result[x] += 1
  
for i in range(len(result)):
  if result[i] != 0:
    for j in range(result[i]):
      print(i,end=" ")