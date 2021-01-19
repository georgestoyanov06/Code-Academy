#include<stdio.h>
int main() {
int i = 0, j = 0;
printf("i = %d, j = %d\n", i, j);
printf("j=i++: %d\n", j=i++); //j=0 /*  имаме суфиск ляво дясно*/
printf("i = %d, j = %d\n", i, j);// i=1, j=0
printf("j = ++i: %d\n", j=++i);// j=2/*префикс (дясно ляво) и ни беше 1 увеличаваме с 1 и даваме нова стойност на j*/
printf("i = %d, j = %d\n", i, j);//i=2, j=2
printf("i--: %d\n", i--);// i=2
printf("i = %d, j = %d\n", i, j);// i=1, j=2
return 0;
}
