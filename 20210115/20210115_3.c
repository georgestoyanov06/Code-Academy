#include<stdio.h>
int main(void){

    printf("Character literals: '%c' , '%c , '%c' \n",'\041', '\x3a','Z');
    printf("Integer literals: %d, %d , %lld \n", 123, 0xFFF,12345678901234ULL);
    printf("Floating-point literals: %lf , %Lf , %lg ,%lg\n",1.23,1234.5678,123E-12,123E+28);
    printf("String literals: \"%s\" , \"%s\" \"%s\" \n", "xxx", "yyy","zzz" );
    return 0;
}