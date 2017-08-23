def print_formatted(number):
  binary = '{0:b}'.format(number)
  length = len(binary)
  # your code goes here
  for num in range(1,number+1):
    for base in 'doXb':
      print('{0:{align}{width}{base}}'.format(num, base=base, width=length,align='>'), end=' ')
    print()