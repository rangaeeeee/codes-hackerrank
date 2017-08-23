M       = int(input())
MValues = set(map(int,input().split()))
N       = int(input())
NValues = set(map(int,input().split()))
result = list((MValues.difference(NValues)).union(NValues.difference(MValues)))
result.sort()
for x in result:
  print(x)