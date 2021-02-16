/* Напишете функция, която сортира лексикографски масив от символи (char[]) използвайки qsort.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare( const void* a, const void* b )
{
   return *(char *)a - *(char *)b;
}


int main(){
    int i=0;
    char str[] = "oakeaod";
   
    qsort(str, strlen(str), sizeof str[0], compare);
    printf("%s",str);
}
