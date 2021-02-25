#include <stdio.h>
#include <math.h>
#define PI (3.14)
#define r (1.5)

#define  swap(t,x,y){\
   t (i)= (x);\
   (x)=(y) ;\
   (y)=(i) ;\
   }
   


int main(){

printf("%f\n",PI*r*r);

char c='c';
char z='z';
swap(char,c,z);
printf("c: %c\nz: %c\n",c,z);
}