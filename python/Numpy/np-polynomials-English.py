import numpy

polyCoeff = list(map(float,input().split()))
x = float(input())
print(numpy.polyval(polyCoeff,x))