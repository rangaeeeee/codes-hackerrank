from html.parser import HTMLParser
import re

class MyHTMLParser(HTMLParser):
  def handle_data(self,data):
    data = data.rstrip()
    if data != "":
      print(">>> Data")
      print(data)

    
  def handle_comment(self,data):
    if(re.search('\\n',data)):
      print(">>> Multi-line Comment")
    else:
      print(">>> Single-line Comment")
    print(data)
  
html = ""       
for i in range(int(input())):
    html += input().rstrip()
    html += '\n'
    
parser = MyHTMLParser()
parser.feed(html)
parser.close()