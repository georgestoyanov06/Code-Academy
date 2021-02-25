/*Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)
*/

#include <stdio.h>

#define CONCAT(NAME1,NAME2) NAME1 ## NAME2


int main(){
    int CONCAT(NAME1,NAME2);
    NAME1NAME2=50;
    printf("NAME1NAME2 %d\n",NAME1NAME2);
    CONCAT(print,f)("TEST TEST TEST\n");
    return 0;
}   