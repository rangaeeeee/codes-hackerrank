N,M = map(int,input().split())
inputValue = []
for i in range(N):
  temp = list(map(int,input().split()))
  inputValue.append(temp)
k = int(input()) 
result = sorted(inputValue,key=lambda inputVal :inputVal[k])
for x in result:
  for i in x:
    print (i,end=" ")
  print()