/*Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях.*/
int fun(int *a);

#include <stdio.h>

int main(){
    int arrayY[6]={523235,42324,3213233,63,6000000,2232};
    
    printf("%d",fun(arrayY));
}
int fun(int *a){
    int n=0;
    n=*a;
    for(;*a;a++){
        if(n>*a){
            
        }
        else{
            n=*a;
        }
           
    }
    return n; 
    
}