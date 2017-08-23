def wrapper(f):
    def fun(l):
        # complete the function
        for i in range(0,len(l)):
          if l[i].startswith('0'):
            l[i]= l[i][1:]
          elif l[i].startswith('+91'):
            l[i]= l[i][3:]
          elif l[i].startswith('91') and len(l[i]) == 12:
            l[i]= l[i][2:]   
          l[i] = "+91 "+l[i][0:5]+ " " + l[i][5:]
        f(l)
          
    return fun