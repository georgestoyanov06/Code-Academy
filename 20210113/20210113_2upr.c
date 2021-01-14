#include <stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main()
{
char z;
char a=10;
bin(a);
char b=255;
bin(b);
z=a+b;
bin(z);
printf("%d",z);

}
