/*Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/
#include <stdio.h>

int main(){
    int a=10;
    int *ptra=&a;
    printf("%d\n",*ptra);
    float fA=10.5;
    float *ptrfA=&fA;
    
    printf("%f\n",*ptrfA);
    char cA='a';
    char *ptrcA=&cA;
    printf("%c\n",*ptrcA);
 


}