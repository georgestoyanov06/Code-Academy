#include <stdio.h>
int main(){
   char arrChar[3]={1,2,3};
   printf("Size of arrChar=%d\n",sizeof(arrChar));
   int  arrInt[3]={1,2,3};
   printf("size of int arrInt= %d\n",sizeof(arrInt));
   double arrdouble[3]={1.0,2.0,3.0};
   printf("size  of arrDouble=%d\n",sizeof(arrdouble)/sizeof(arrdouble[0]));
 
}

