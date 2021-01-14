#include <stdio.h>
int main()
{
float priceDomati=4.50;
float fTomatoWight;

float priceBrashno=1.80;
float fBrashnoWeight;
float priceMlqko=0.50;
unsigned short int broiMleka;
float priceSladoled=0.60;
unsigned short int broiSladoledi;
float priceBonboni=1.50;
float fBonboniWeight;
float priceBlizalki=0.15;
unsigned short int broiBlizalki;
printf("Kolko kilograma domati jelaete\n");

scanf("%f",&fTomatoWight);
printf("%10.3f\n",fTomatoWight);
float fTomatoTotal=fTomatoWight*priceDomati;

printf("%10.2f\n",fTomatoTotal);

printf("kolko kilograma bonboni jelaete\n");
scanf("%f",&fBonboniWeight);
float fBonboniTotal=fBonboniWeight*priceBonboni;
printf("%.2f\n",fBonboniTotal);

printf("kolko broq blizalki jelaete\n");
scanf("%u",&broiBlizalki);
float fBlizalkiTotal=priceBlizalki*broiBlizalki;
printf("%.2f",fBlizalkiTotal);

}