N = int(input())

for i in range(N):
  a,b = input().split()
  try:
    c = int(a)//int(b)
    print (c)
  except ZeroDivisionError as e:
    print ("Error Code: {0}".format(e) )
  except ValueError as e:
    print ("Error Code: {0}".format(e))    