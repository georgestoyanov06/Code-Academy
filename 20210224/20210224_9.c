/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/

#include <stdio.h>
#define STR(testToMakeString) #testToMakeString
int main() {
 int commonVarialble = 2000;
 printf(STR(commonVarialble));
 

 return 0;
}