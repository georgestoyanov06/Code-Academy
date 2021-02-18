/*Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare( const void* a, const void* b )
{
   return *(char *)a - *(char *)b;
}
char funAnagram(char *str1,char *str2);

int main(){
    char a []="chiv";
    char b []="inch";
    
    funAnagram(a,b);

    
}

char funAnagram(char *str1,char *str2){
    int i;
    qsort(str1, strlen(str1), sizeof str1[0], compare);
    qsort(str2,strlen(str2), sizeof str2[0], compare);
    if(strlen(str1)!=strlen(str2)){
        printf("they are not anagrams\n");
                return 0;
            }

        for(i = 0; str1[i]; i++) {
      if(str1[i] != str2[i]) {    
         printf("Strings are not anagrams! \n");
         return 0;
      }
   }

   printf("Strings are anagrams! \n");
   return 0;
}