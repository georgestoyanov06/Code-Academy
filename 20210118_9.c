#include <stdio.h>
int main(){
    float iX = 13;
    float iY = 44;
    float iResult = 0;
    iResult = iX - iY;/*ляво дясно*/
    printf("%f - %f = %f \n", iX, iY, iResult);
    iResult = iY / iX;/*ляво дясно*/
    printf("%f / %f = %f \n", iY, iX, iResult);
    iResult = iX * iY;/*ляво дясно*/
    printf("%f * %f = %f \n", iX, iY, iResult);
    iX=25.6;
    iY=0.354;
    iResult = iX + iY; /*ляво дясно*/
    printf("%f + %f = %f \n", iX, iY, iResult);

  /*  iResult = iY % iX; при дори една от стойностите да е от тип Float ни гърми  
    printf("%d / %d Remainder: %d\n", iY, iX, iResult); */

}
