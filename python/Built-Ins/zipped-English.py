N,X = map(int,input().split())
subject = []
for i in range(X):
  marks = list(map(float,input().split()))
  subject.append(marks)
  
student = list(zip(*subject))
for x in student:
  print('{0:.1f}'.format(float(sum(x)/X)))