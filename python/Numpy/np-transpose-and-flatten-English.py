import numpy
N,M = map(int,input().split())
result = []
for i in range(N):
  temp = list(map(int,input().split()))
  result.append(temp)
myArray = numpy.array(result)
print(numpy.transpose(myArray))
print(myArray.flatten())