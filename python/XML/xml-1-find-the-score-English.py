def get_attr_number(node):
  count = 0
  # your code goes here
  count += len(node.attrib)
  for i in node:
    for x in i.iter():
#      print(len(node))
#      print(x)
#      print (len(x.attrib))
      count += len(x.attrib)
  return count