/*Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1.*/

#include <stdio.h>

int funFib(int *arr,int n);
int main(){
    int fib[60];
    int i;
    int n=20;
    funFib(fib,n);
    for(i=0;i<=n;i++){
        printf("fib[%d]=%d\n",i,fib[i]);
    }

}

int funFib(int arr[],int n){
    int i;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
}