def count_substring(string, sub_string):
  count = 0
  subLen = len(sub_string)
  strLen = len(string)
  strLen -= subLen
  for i in range(0,strLen+1):
    if (sub_string == string[i:i+subLen]):      
      count += 1
  return count