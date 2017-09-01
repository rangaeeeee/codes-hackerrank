num = int(input())
inputList = list(map(int,input().split()))

result = [0]*100

for x in inputList:
  if x < 100:
    result[x] += 1
  
for i in result:
  print(i,end=" ")