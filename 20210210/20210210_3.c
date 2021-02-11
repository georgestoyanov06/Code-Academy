/*Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.*/
#include <stdio.h>
char polidrome(char *arr);

int main(){
    char arr[1000];
    printf("%d",polidrome(arr));
    
    
    
}

char polidrome(char *arr){
    
    char *p=arr;
    int i=0;
    char symbol;
    
    while((symbol = getchar()) !='\n'){
            arr[i++] = symbol;
            p++;
           
    }
    i=0;
    while (arr[i]){
        --p;
        if(arr[i]!=*p){
            return 0;
        }
        else{
            return 1;
        }
        
        i++;
    }
    
}  
