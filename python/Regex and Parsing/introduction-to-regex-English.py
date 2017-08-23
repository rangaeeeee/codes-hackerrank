import re

N = int(input())

for i in range(N):
  st = input()
  if (re.match("^(\+\-)|(\-\+)",st)):
    print("False")
  elif ((re.fullmatch("^[0-9]*\.[0-9]+",st)) or (re.fullmatch("^\-[0-9]*\.[0-9]+",st)) or (re.fullmatch("^\+[0-9]*\.[0-9]+",st))):    
    print("True")
  else :
    print("False")