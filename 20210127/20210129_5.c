/*Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/
#include <stdio.h>

int oddOrNot();

int main(void){
    oddOrNot();
}

int oddOrNot(){
    int number;
    printf("Type number=");
    scanf("%d",&number);
    if((number%2)>0){
        printf("Your number is odd");
    }
    else{
        printf("Your number is even");
    }
}