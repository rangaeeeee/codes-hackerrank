n = int(input())
s = set(map(int, input().split())) 
N = int(input())
for i in range(N):
  command,num = input().split()
  value = list(map(int,input().split()))
  if command == 'intersection_update':
    s.intersection_update(value)
  if command == 'update':
    s.update(value)
  if command == 'symmetric_difference_update':
    s.symmetric_difference_update(value)
  if command == 'difference_update':
    s.difference_update(value)
print(sum(s))