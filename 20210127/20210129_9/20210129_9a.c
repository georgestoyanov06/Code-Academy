#include <stdio.h>
#include "20210129_9.h"

int fun1(int a,int b){
    printf("a*b=%d\n",a*b);
    fun2(a,b);
}

int fun2(int a,int b){
    printf("a/b=%d \n",a/b);
    fun3(a,b);
}


int fun3(int a,int b){
printf("a*b-a/b=%d\n",a*b-a/b);
}