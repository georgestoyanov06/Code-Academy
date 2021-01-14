#include <stdio.h>
int main()
{
    char x=8;
    /* tuk x prisvoqva stoinst 8 */
    printf("%d\n",x);
    x=x-2;
    /* x prisvoqva nova stoinost 6 */
    printf("%d\n",x);

    x=x+6;
    /* x prisvoqva stonost 6+6=12 , a ne 8+6 */
    printf("%d\n",x);

    x=x-10+2;
    printf("%d\n",x);


}