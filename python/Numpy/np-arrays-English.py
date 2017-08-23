def arrays(arr):
    # complete this function
    # use numpy.array
    arr = map(float,arr)
    arr = sorted(arr,key=abs,reverse = True)
    result = numpy.array(arr,float)
#    result = [str(x)+str(".") for x in result]
#    result = map(int,result)
    return result
#    for x in result:
#      print(x,end=". ")