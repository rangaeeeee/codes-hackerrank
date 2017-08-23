import numpy

A = list(map(float,input().split()))
AArray = numpy.array(A)
print(numpy.floor(AArray))
print(numpy.ceil(AArray))
print(numpy.rint(AArray))