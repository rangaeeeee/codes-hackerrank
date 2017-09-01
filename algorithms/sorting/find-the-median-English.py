import statistics

num = int(input())

iList = list(map(int,input().split()))
print(statistics.median(iList))