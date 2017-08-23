import numpy
N = int(input())
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
print(numpy.dot(AArray,BArray))
#print(numpy.cross(AArray,BArray))