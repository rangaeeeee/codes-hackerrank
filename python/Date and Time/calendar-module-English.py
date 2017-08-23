from calendar import *
import calendar
month, day, year = map(int,input().split())
result = weekday(year,month,day)
print((calendar.day_name[result]).upper())