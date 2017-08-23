if __name__ == '__main__':
    n = int(input())
    arr = input().split(' ')
    iList = [int(x) for x in arr]
    iList.sort()
    maximum = max(iList)    
    index = iList.index(maximum)
    if index != 0:
      print(iList[index-1])