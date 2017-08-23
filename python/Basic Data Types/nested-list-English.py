if __name__ == '__main__':
  inputValue = []
  for _ in range(int(input())):
#    print(_)
    name = input()
    score = float(input())
    temp = [name,score]
    inputValue.append(temp)
  
  inputVal = sorted(inputValue, key=lambda e: e[1])
  mark = inputVal[0][1]
  test = []
#  print(inputVal)
#  print(mark)
  for i in inputVal:
    if i[1] == mark:
      continue
    else:
      secondMark = i[1]
      break
  for i in inputVal:
    if i[1] == secondMark:
      test.append(i[0])
  test = sorted(test) 
#  print(secondMark)
#  print(inputVal) 
  for x in test:
    print(x)