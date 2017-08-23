import numpy

N,M = map(int,input().split())
InputList = []
for i in range(N):
  temp = list(map(int,input().split()))
  InputList.append(temp)
  
Input = numpy.array(InputList)
sumInput = numpy.sum(Input,axis = 0)
print(numpy.prod(sumInput,axis = None))