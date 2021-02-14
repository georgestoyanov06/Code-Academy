/*Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

#include <stdlib.h>
#include <stdio.h>

int main(){

   char *allocaTest;
   unsigned uSize=5;
   allocaTest=(char*)alloca(uSize*sizeof(char));
}