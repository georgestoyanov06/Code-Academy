/*Задача 9. Напишете три функции, 
които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл*/

#include <stdio.h>
#include "20210129_9.h"

int main(void){
    int a,b;
    printf("Type a and b\n");
    scanf("%d %d",&a,&b);
    fun1(a,b);
}