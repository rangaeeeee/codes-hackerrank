import numpy
N = list(map(int,input().split()))
M = list(map(int,input().split()))
NArray = numpy.array(N)
MArray = numpy.array(M)
print(numpy.inner(NArray,MArray))
print(numpy.outer(NArray,MArray))