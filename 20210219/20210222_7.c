/*Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/

#include <stdio.h>

union tagTest{
    int iValue;
    float fValue;
    char cValue[24];
    };


    int main(){

        union tagTest test1;
    
        test1.fValue=1.5;
        printf("size of test1 :%d\n",sizeof(test1));

        printf("iValue %d,fValue=%f,Text=%s\n",test1.iValue,test1.fValue,test1.cValue);
    }