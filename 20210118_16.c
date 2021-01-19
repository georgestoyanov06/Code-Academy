#include <stdio.h>
int main()
{
int iA = 13;
printf("Address of iA variable: %x\n", &iA );
int* pValue = NULL; /* pointer to int */
pValue = &iA; /* adres na promenluvata
*/
printf("\nAddress of variable iA is: %p\n", pValue);
printf("\nValue of variable iA is: %d\n", *pValue);
return 0;
}
