from html.parser import HTMLParser
from html.entities import name2codepoint

class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):        
        print("Start :", str(tag).strip())
        for attr in attrs:
            print("-> " + str(attr[0]).strip() + " > " + str(attr[1]).strip())

    def handle_endtag(self, tag):
        print("End   :", str(tag).strip())
        
    def handle_startendtag(self,tag, attrs):
      print("Empty :", str(tag).strip())
      for attr in attrs:
            print("-> " + str(attr[0]).strip() + " > " + str(attr[1]).strip())      

# instantiate the parser and fed it some HTML
html = ""       
for i in range(int(input())):
    html += input().rstrip()
    html += '\n'
    
parser = MyHTMLParser()
parser.feed(html)
parser.close()