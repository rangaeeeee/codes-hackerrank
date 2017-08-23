cube = lambda x:x**3 # complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    t1 = 0
    t2 = 1
    num = []
    for i in range(n):
      tn = t1 + t2
      num.append(t1)
      t1 = t2
      t2 = tn
    return num