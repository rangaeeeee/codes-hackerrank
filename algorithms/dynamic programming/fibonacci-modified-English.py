# Enter your code here. Read input from STDIN. Print output to STDOUT

t1,t2,n = map(int,input().split())

result = [None] * (n+1)

result[1] = t1
result[2] = t2

for i in range(3,n+1,1):
  if result[i] == None:
    result[i] = result[i-2] + result[i-1]**2
    
print(result[n])