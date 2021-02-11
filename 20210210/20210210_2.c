#include <stdio.h>
void reverse(char *arr);
int main(){
    char arr[1000];
    reverse(arr);
    
    
    
}

void reverse(char *arr){
    
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
        putchar(*p);
        i++;
    }
}