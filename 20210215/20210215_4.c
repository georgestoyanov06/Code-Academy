/*Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/
#include <stdio.h>
int main(){
int a=123;
    int *ptra=&a;
    int **ptraa=&ptra;
   
    **ptraa=15;
   
    printf("ptra=%p\n",ptra);/*addres of a*/
    printf("ptraa=%p\n",&ptraa);
    printf("ptra=%d\n",*ptra);
    printf("ptraa=%p\n",*ptraa);/*addres of a */
}