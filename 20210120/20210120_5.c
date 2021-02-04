#include<stdio.h>
int main(){
    int nValue=13;
    do{
        printf("Value: %d\n",nValue);
        nValue++;
    }while(nValue<20);
    
    printf("nValue= %d",nValue);
    return 0;
}