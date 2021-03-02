#include <stdio.h>

typedef struct{
    int a;
    float b;
    char c;
} testStruct;

int main(){
    testStruct test={1,1.5,'T'};
    printf("%d %0.2f %c",test.a,test.b,test.c);
    return 0;
}