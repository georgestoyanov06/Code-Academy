/*Задача 3. Напишете функция, която връща резултат (а+в)*4.*/

#include <stdio.h>
int fun();

int main(void){
    int a,b;
    fun();

}

int fun(){
    int a,b;
    printf("Type two nubmers\n");
    scanf("%d %d",&a,&b);
    printf("(%d+%d)*4= %d",a,b,(a+b)*4);

}