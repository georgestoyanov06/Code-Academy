#include <stdio.h>
int main(){
    int i=0;
    char arrChar[3]={'a' , 'b' ,'c'};
   printf("Size of arrChar=%d\n",sizeof(arrChar));
   printf("Posleden element %c\n",arrChar[2]);
   int  arrInt[3]={1,2,3};
    printf("Posleden element= %d\n", arrInt[2]);
    char arr[10]={0};
    arr[0]='a';
    arr[1]='b';
    arr[3]='c';
    while(arr[i++]!='\0'){
        printf("%c\n",arr[i]);
        i++;
    }
   double arrdouble[3]={1.5,2.3,3.4};
   printf("Posleden element=%lf\n",arrdouble[2]);
 
}