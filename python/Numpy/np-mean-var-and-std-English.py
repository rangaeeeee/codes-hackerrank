import numpy

N,M = map(int,input().split())
AList = []
for i in range(N):
  temp = list(map(int,input().split()))
  AList.append(temp)

AArray = numpy.array(AList)  
print(numpy.mean(AArray,axis=1))
print(numpy.var(AArray,axis=0))
print(numpy.std(AArray,axis=None))