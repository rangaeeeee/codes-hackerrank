import re
def fun(s):
    # return True if s is a valid email, else return False
    if re.match("^[\w\-]+@[A-Za-z0-9]+\.(\w){1,3}$",s):
      return True
    else:
      return False