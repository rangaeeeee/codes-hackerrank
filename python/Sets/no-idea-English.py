happiness = 0
N,M = map(int,(input().split()))
array = list(map(int,input().split()))
aSet = set(map(int,input().split()))
bSet = set(map(int,input().split()))
for x in array:
  if x in aSet:
    happiness += 1
  if x in bSet:
    happiness -= 1
print(happiness)