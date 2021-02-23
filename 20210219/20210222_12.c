/*Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};*/

#include<stdio.h>
#pragma pack(1)

struct tagStruct {
    short iValue : 3;
    char  cValue :  6;

};

struct tagStruct1{

    char cVar;
    char cVar1;
    short iValue;
    short iValue1;
};

int main(){
  /*  struct tagStruct test1 = {7,'c'};/* няма как да принтира 7 с три бита*/
    printf("ivalue=%d\n",test1.iValue);
    printf("cvalue=%c\n",test1.cValue);
    printf("The size of the structure is: %d\n", sizeof(test1));

    struct tagStruct1 test2={'y','a',3,1232};
    printf("cVar=%c\n",test2.cVar);
    printf("size of test2=%d",sizeof(test2));
}