/*Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/
#include <stdio.h>
int toBinary();

int main(void){
    toBinary();
}

int toBinary(){
    int number;
    char bin[64];
    int i;
    printf("Type number ");
    scanf("%d",&number);
    printf("Number %d in binary is ",number);
    while(number>0){
        if(number%2>0){
             bin[i]='1';
        }
        else{
             bin[i]='0';

        }
    i++;
    number/=2;
    }
    
    while(i>0){
        printf("%c",bin[i-1]);
        i--;
    }
}