#include <stdio.h>
int main(){
    int arr[10]={23,91,36,4,9,99,87,11,2,33};
    int *p=arr;
    /* p++; */
    int rez=0;
    for(;*p;p++){
        rez+=*p;
        printf("rez=%d\n",rez);
    }
   printf("%d\n",rez);
}