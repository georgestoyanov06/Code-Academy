
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main( ) {
 FILE* fpIn = NULL;
 FILE* fpOut = NULL;
 
 fpIn = fopen("test1.txt", "r");
 fpOut = fopen("text2.txt", "w"); 
  
 for(;;) {
 int nValue = 0;
 fscanf(fpIn, "%d", &nValue);
 if (feof(fpIn)){
     
      break;}
 fprintf(fpOut, "%d  ",nValue);
 
 }
 if (NULL != fpIn) fclose(fpIn);
 if (NULL != fpOut) fclose(fpOut);
 return 0;
}