def my_sum1(a,b):
    if type(a) == int and type(b)== str or type(b)==int and type(a)== str:
        print(a*b)  
    else:
        print(a+b)



my_sum1(10,20)
my_sum1("hello ", "there")
my_sum1("hello", 2)
