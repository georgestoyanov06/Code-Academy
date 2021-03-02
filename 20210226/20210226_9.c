#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10;
    int b=6;
    /*float res=a/b invalid  output 1(instead of 1.6667)*/
    float res=(float)a/b;
    printf("%f\n",res);


    short int siValue=105;
    int*pnValue=(int*)&siValue;
    *pnValue=23;
    printf("%d,%ld\n",siValue,*pnValue);
    char chValue = 'A'; 
    printf("ch=%c\n",chValue);
    double* pdValue =(double*)malloc(1000);
    pdValue = (double*) &chValue;
    *pdValue = 0.0; 
    printf("%c, %f", chValue, *pdValue);
    free(pdValue);
    }