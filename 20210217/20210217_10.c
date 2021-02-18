/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.*/
#include <stdio.h>

int prime(int n);

int main(){
    int(*chekprime)(int)=NULL;
    chekprime=prime;
    printf("%d",chekprime(991));
}

int prime(int n){
    int arr[n+1];
    int i,j;
    for(i=1;i<=n;i++){
        arr[i]=i;
        
    }
    for (i=2;i*i<=n;i++){
        if(arr[i]!=-1){
            for(j=2*i;j<=n;j+=i){
                arr[j]=-1;
            }
        }
    }
    
        /*check if n is prime or not*/
		if(arr[n]==n){
            return 1;
        }
        return 0;
}