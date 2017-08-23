A = set(input().split()) 
b = int(input())
strictSet = 0
for i in range(b):
  B = set(input().split())
  if(B.issubset(A) and len(A) > len(B)):
      strictSet += 1
if strictSet == b:
  print("True")
else:
  print("False")