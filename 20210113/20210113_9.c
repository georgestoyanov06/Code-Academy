#include <stdio.h>
int main()
{

double a=4.9876543;
printf("%.7f\n",a);
long double b=7.123456789012345678890;
__mingw_printf("%1.21Lf\n",b);
/* мисля,че това трябва да е правилният запис 
тъй като "double" ни дава до 15 символа след запетаята,
но 
 If you are using MinGW, the problem is that by default,
  MinGW uses the I/O resp. formatting functions from the Microsoft C runtime, which doesn't support
   80 bit floating point numbers (long double == double in Microsoft land). */

long double c=18398458438583853.28;
__mingw_printf("%21.2Lf\n",c);
long double d=18398458438583853.39875937284928422;
__mingw_printf("%21.19Lf\n",d);



}