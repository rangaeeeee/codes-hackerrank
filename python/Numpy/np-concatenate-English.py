import numpy

N,M,P = map(int,input().split())
NList = []
for i in range(N):
  temp = list(map(int,input().split()))
  NList.append(temp)
MList = []
for i in range(M):
  temp = list(map(int,input().split()))
  MList.append(temp)
NArray = numpy.array(NList)
MArray = numpy.array(MList)
print(numpy.concatenate((NArray,MArray),axis = 0))