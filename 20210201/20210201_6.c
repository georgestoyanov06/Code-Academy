/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>

unsigned long long int   fun(int a);
int main(){
    int a=1;
    fun(a);
}  

unsigned long long int fun(int a){
   
    unsigned long long int total=1;
    while (a<21){
        total=a*total;
        a++;
    }
    printf("total=%lld",total);
}