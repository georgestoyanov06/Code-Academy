#include<stdio.h>
int main()
{
    char cValue = 'b';
    printf("\n%d\n",sizeof(cValue));
    int iValue=100;
    printf("\n%d\n", sizeof(iValue));
    long int l1Value=10000;
    printf("\n%d\n",sizeof(l1Value));
    long long int lValue = 1111111;
    printf("\n%d\n",sizeof(lValue));
    return 0;
}