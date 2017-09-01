def insertionSort(sortList):
  num = len(sortList)
#  print("num : " + str(num))
  lastNum = sortList[-1]
  if num != 1:
    for i in range(num-2,-1,-1):
      if sortList[i] > lastNum:
        sortList[i+1] = sortList[i]
#        printList(sortList)
      else:
        sortList[i+1] = lastNum
#        printList(sortList)
        break
  if sortList[0] > lastNum:
    sortList[0] = lastNum
  return sortList
#    printList(sortList)
  

def printList(listValue):
  for x in listValue:
    print(x,end=" ")
  print()

def copyList(sourceList,targetList):
  for i in range(len(sourceList)):
    targetList[i] = sourceList[i]
  return targetList  
  

num = int(input())

inputList = list(map(int,input().split()))

for i in range(2,num+1,1):
  sortedList = insertionSort(inputList[:i])
  inputList = copyList(sortedList,inputList)
  printList(inputList)