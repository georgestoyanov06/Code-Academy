/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна*/
#include <stdio.h>
unsigned long long funRec(unsigned long long a);
int main(){
    unsigned long long a=1;
    printf("%lld",funRec(a));
}

unsigned long long funRec(unsigned long long a){
    
    
    if (a>20)
    {
        return 1;
    }
    else {
        return  a*funRec(a+1);
    }

}