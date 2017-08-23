import numpy

N,M = map(int,input().split())
AList = []
for i in range(N):
  temp = list(map(int,input().split()))
  AList.append(temp)

AArray = numpy.array(AList)  
print(max(numpy.min(AArray,axis=1)))