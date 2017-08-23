import numpy

N = int(input())
inputMat = []
for i in range(N):
  temp = list(map(float,input().split()))
  inputMat.append(temp)

print(numpy.linalg.det(inputMat))