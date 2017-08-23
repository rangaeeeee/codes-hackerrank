import numpy
arr = list(map(int,input().split()))
myArray = numpy.array(arr)
print(numpy.reshape(myArray,(3,3)))