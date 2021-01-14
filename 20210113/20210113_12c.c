#include <stdio.h>
int main() 

{
int i;
    int zvezdichki= 11;
printf("          ");
   for (i=12;i>zvezdichki;--i)
   {printf("# ");}
   printf("\n");
   zvezdichki=zvezdichki-2;
   printf("        ");
   for (i=12;i>zvezdichki;--i )
   {printf("# ");}
    printf("\n");
  printf("      ");
   zvezdichki=zvezdichki-2;
   for (i=12;i>zvezdichki;--i)
   {printf("# ");}
    printf("\n");
   zvezdichki=zvezdichki-2;
   printf("    ");
    for (i=12;i>zvezdichki;--i)
   {printf("# ");}
    printf("\n");
   zvezdichki=zvezdichki-2;
   printf("  ");
    for (i=12;i>zvezdichki;--i)
   {printf("# ");}
    printf("\n");
   zvezdichki=zvezdichki-2;
   printf("");
    for (i=12;i>zvezdichki;--i)
   {printf("# ");}
   printf("\n");
   printf("  ");
   /* тук слагам нова стойност 9, тъй като ако сложа като в горната ще имаме два реда с 6 диеса# */
  zvezdichki=9;
    for(i=1;i<=zvezdichki;++i)
    {printf("# ");}
    printf("\n");
    printf("    ");
    zvezdichki=zvezdichki-2;
    for(i=1;i<=zvezdichki;++i)
    {printf("# ");}

printf("\n");
    printf("      ");
    zvezdichki=zvezdichki-2;
    for(i=1;i<=zvezdichki;++i)
    {printf("# ");}
    printf("\n");
    printf("        ");
    zvezdichki=zvezdichki-2;
    for(i=1;i<=zvezdichki;++i)
    {printf("# ");}
printf("\n");
    printf("          ");
    zvezdichki=zvezdichki-2;
    for(i=1;i<=zvezdichki;++i)
    {printf("# ");}

}