#include <stdio.h>
int main(void)
{
unsigned short int priceKaravana=90;

unsigned short int priceKemper=100;
unsigned short int broiKaravani=3;
unsigned short int broiKepmperi=3;
int jelanie;
unsigned short int smetka;
char exit;

printf("Dobre doshli v Karavani Kempeti pod naem\n");
while(exit!='E'){
printf("Ako zelaete karavana natisnete 1\n");
printf("Ako zelaete kemper natisnete 2\n");

scanf("%d", &jelanie);
if(jelanie==1)
{
    printf("Vie duljite %d leva\n",priceKaravana);
    smetka=smetka+priceKaravana;
    broiKaravani--;
    printf(" Ima oshte %d karavani i %d Kemperi v nalichnost\n",broiKaravani,broiKepmperi);
    
}
 else if (jelanie==2)
{
    printf("Vie duljite %d  leva\n",priceKemper);
    smetka=smetka+priceKemper;
broiKepmperi--;
printf(" Ima oshte %d  Kempera i %d Karavani v nalichnost\n",broiKepmperi,broiKaravani);
}
else 
{ printf(   "Nevaliden izbor\n ");
}
printf("natisnete E ako ne jelaete neshto drugo i P za drugo jelanie  \n");
scanf("%s",&exit);
if(exit=='e'){
break;}

}




printf("Vashata smetka e %d",smetka);



 
}   