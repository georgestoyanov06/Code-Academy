/*Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum type{

    value_Int, value_Str
};

union Variable
{
   int iValue;
   char sValue[24];
};
void convert(union Variable *test,enum type test1){
   if(test1==value_Int){
            printf("strV=%d\n",test->iValue);

        }
        else if(test1==value_Str)
        {
            printf("intV=%s\n",test->sValue);
        }
};

int main(){

    union Variable myVar;
    strcpy(myVar.sValue,"hello");
    convert(&myVar,value_Str);

    myVar.iValue=1010;
    convert(&myVar, value_Int);

}