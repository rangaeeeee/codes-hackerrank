n = int(input())
s = set(map(int, input().split())) 
N = int(input())
for i in range(N):
  command = list(input().split())
  if command[0] == 'remove':
    s.remove(int(command[1]))
  if command[0] == 'pop':
    s.pop()
  if command[0] == 'discard':
    s.discard(int(command[1]))
print(sum(s))