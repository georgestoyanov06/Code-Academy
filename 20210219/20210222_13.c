/*Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата*/

#include <stdio.h>

union tagUnion{
    int  iValue: 6;
    char cValue: 6;
    int iValue1: 6;
};

int main(){
    union tagUnion test;
    test.iValue1=27;
    printf("iValue1=%d\nsize of iValue1=%d",test.iValue1,sizeof(test));
}