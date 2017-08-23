from functools import reduce
def average(array):
    # your code goes here
    setVal = list(set(array))
    return(reduce(lambda x,y:x+y,setVal)/len(setVal))