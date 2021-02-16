/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/

#include <stdio.h>

int main(){
    char A[]="123456789";
    char *ptrA=A;
    int count=0;
    for(;*ptrA;ptrA++)
    count++;
    printf("lenght=%d",count);
    return 0;
}