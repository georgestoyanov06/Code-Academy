/*Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum type{

    value_Int, 
    value_Str
};

union Variable
{
   int iValue;
   char sValue[24];
};

void printVariable(union Variable *test,enum type test1){
        if(test1==value_Int){
            printf("strV=%d\n",test->iValue);

        }
        else if(test1==value_Str)
        {
            printf("intV=%s\n",test->sValue);
        }
};

int main(){
    union  Variable test;
    union  Variable *ptr=&test;
    strcpy(test.sValue,"hellothere");
    printVariable(ptr,value_Str);
    test.iValue=1500;
    printVariable(ptr,value_Int);
    

    
    

}