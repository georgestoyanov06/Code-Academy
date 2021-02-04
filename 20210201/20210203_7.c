/*Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).*/
#include <stdio.h>
int my_swap(a,b);

int main(void){
    int a=10;
    int b=20;
    my_swap(10,20);
    printf("a=%d\n",a);
    printf("b=%d\n",b);

}
int my_swap(a,b){
 a=a+b;
 b=a-b;
 a=a-b;
 return a,b;
;
}