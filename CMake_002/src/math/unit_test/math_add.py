from ctypes import *
 
#load the shared object file
math_add = CDLL('../../../Release/Debug/libmathLib.dll')
i=10
#Find sum of integers
res_int = math_add.my_add(i)
print ("Sum from 1 to" ,i," =", str(res_int))
 
# #Find sum of floats
# a = c_float(5.5)
# b = c_float(4.1)
 
# add_float = adder.add_float
# add_float.restype = c_float
# print "Sum of 5.5 and 4.1 = ", str(add_float(a, b))
 

