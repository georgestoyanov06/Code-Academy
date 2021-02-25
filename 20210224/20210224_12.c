/*
Задача 12.
Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}

опитвма се да намеря информация в интернет с която да я аправя, но не ми се получава ще кача останалите задачи и ще се опитам да направвя тази
*/
#include <stdio.h>

#define GENERIC_MAX(type)
#define type type##_max(type x, type y)\
{   return x > y ? x : y;}


int main(){
    GENERIC_MAX(int);
    int a=5;
    int c=6;
    int d= int_max(a,c);
    printf("%d",d);
}