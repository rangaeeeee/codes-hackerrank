import numpy

N, M = map(int,input().split())

AList = []
for i in range(N):
  temp = list(map(int,input().split()))
  AList.append(temp)
BList = []
for i in range(N):
  temp = list(map(int,input().split()))
  BList.append(temp)
AArray = numpy.array(AList)
BArray = numpy.array(BList)
print(AArray + BArray)
print(AArray - BArray)
print(AArray * BArray)
print(AArray // BArray)
print(AArray % BArray)
print(AArray ** BArray)