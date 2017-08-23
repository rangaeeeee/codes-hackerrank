from collections import Counter

# Number of shoes
X = int(input())

#list of shoes
shoeList = list(map(int,input().split()))

#Number of customers
N = int(input())
amount = 0
shoes = Counter(shoeList)
for i in range(N):
  size,rate = map(int,input().split())
  if shoes[size] > 0 :
    shoes[size] -= 1
    amount += rate

print(amount)