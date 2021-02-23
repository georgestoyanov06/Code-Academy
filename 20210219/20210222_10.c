
/*Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/

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
struct tagValue{
    enum type m_Type;
    union Variable m_Var;
};
void printValue(struct tagValue* pValue){
   if(pValue->m_Type==value_Int){
            printf("int=%d\n",pValue->m_Var.iValue);

        }
        else if(pValue->m_Type==value_Str)
        {
            printf("str=%s\n",pValue->m_Var.sValue);
        }
};

int main(){
     struct tagValue value = {value_Int, 10031996};
    printValue(&value);
    strcpy(value.m_Var.sValue,"hello");
    value.m_Type =value_Str;
    printValue(&value);

    return 0;
}