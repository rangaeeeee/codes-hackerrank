import time
import datetime

monthDict = {'Jan':1, 'Feb':2, 'Mar':3, 'Apr':4, 'May':5, 'Jun':6, 
            'Jul':7, 'Aug':8, 'Sep':9, 'Oct':10, 'Nov':11, 'Dec':12}

testcase = int(input())
for i in range(testcase):
  date1 = datetime.datetime.strptime(str(input()), "%a %d %b %Y %H:%M:%S %z")
  date2 = datetime.datetime.strptime(str(input()), "%a %d %b %Y %H:%M:%S %z")
  difftime = int(abs((date2-date1).total_seconds()))
  print (difftime)