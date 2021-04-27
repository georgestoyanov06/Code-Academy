'''
Created on Apr 27, 2021

@author: Joro
'''



def my_sum1(a,b):
    if type(a)== int and type(b)== str or type(b)==int and type(a)== str:
            return a*b 
    return a+b


print(my_sum1(10, 35))
print(my_sum1("hello", "there"))
print(my_sum1('hello', 2))