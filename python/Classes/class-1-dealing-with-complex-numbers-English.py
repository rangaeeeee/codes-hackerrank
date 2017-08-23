#Operator 	Expression 	Internally
#Addition 	p1 + p2 	p1.__add__(p2)
#Subtraction 	p1 - p2 	p1.__sub__(p2)
#Multiplication 	p1 * p2 	p1.__mul__(p2)
#Power 	p1 ** p2 	p1.__pow__(p2)
#Division 	p1 / p2 	p1.__truediv__(p2)
#Floor Division 	p1 // p2 	p1.__floordiv__(p2)
#Remainder (modulo) 	p1 % p2 	p1.__mod__(p2)
#Bitwise Left Shift 	p1 << p2 	p1.__lshift__(p2)
#Bitwise Right Shift 	p1 >> p2 	p1.__rshift__(p2)
#Bitwise OR 	p1 | p2 	p1.__or__(p2)
#Bitwise XOR 	p1 ^ p2 	p1.__xor__(p2)
#Bitwise NOT 	~p1 	p1.__invert__()

class Complex(object):
    def __init__(self, real, imaginary):
      self.real = real
      self.imaginary = imaginary
        
    def __add__(self, no):
      real      = self.real + no.real
      imaginary = self.imaginary + no.imaginary
      return Complex(real,imaginary)
        
    def __sub__(self, no):
      real      = self.real - no.real
      imaginary = self.imaginary - no.imaginary
      return Complex(real,imaginary)
    
    def __mul__(self, no):
      real      = self.real * no.real
      real     -= self.imaginary * no.imaginary
      imaginary = self.real * no.imaginary
      imaginary += self.imaginary * no.real
      return Complex(real,imaginary)
    
    def __truediv__(self, no):
      conjugateNo = Complex(no.real,-no.imaginary)
      c = self * conjugateNo
      denom = pow(no.real,2) + pow(no.imaginary,2)
      return Complex(c.real/denom,c.imaginary/denom)
    
    def mod(self):
      real      = math.sqrt(pow(self.real,2) + pow(self.imaginary,2))
      imaginary = 0
      return Complex(real,imaginary)
    
    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result