if __name__ == '__main__':
  count = [None]*5
  s = input()
  for i in range(len(s)):
    if s[i].isalnum():
      count[0] = True
    if s[i].isalpha():
      count[1] = True
    if s[i].isdigit():
      count[2] = True
    if s[i].islower():
      count[3] = True
    if s[i].isupper():
      count[4] = True
  for i in count:
    if i :
      print ("True")
    else:
      print("False")