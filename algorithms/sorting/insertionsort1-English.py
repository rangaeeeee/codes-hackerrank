def printList(listValue):
  for x in listValue:
    print(x,end=" ")
  print()

num = int(input())

inputList = list(map(int,input().split()))

lastNum = inputList[-1]

if num != 1:
  for i in range(num-2,-1,-1):
#    print(" i : " + str(i))
    if inputList[i] > lastNum:      
      inputList[i+1] = inputList[i]
      printList(inputList)      
    else:
      inputList[i+1] = lastNum
      printList(inputList)
      break
elif num == 1:
  print(inputList[0])
if inputList[0] > lastNum:
  inputList[0] = lastNum
  printList(inputList)