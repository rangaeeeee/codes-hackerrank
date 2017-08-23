DEBUG = 1
if __name__ == '__main__':
    N = int(input())
    
    lListResult = []
    iList = []
    for i in range (N) :
      str = input()
      iList = str.split(' ')      
      if iList[0] == 'insert' :
        lListResult.insert(int(iList[1]),int(iList[2]))
      if iList[0] == 'print' :
        print(lListResult)
      if iList[0] == 'remove' :
        lListResult.remove(int(iList[1]))
      if iList[0] == 'append' :
        lListResult.append(int(iList[1]))
      if iList[0] == 'sort' :
        lListResult.sort()
      if iList[0] == 'pop' :
        lListResult.pop()
      if iList[0] == 'reverse' :
        lListResult.reverse()