#include <stdio.h>

int main(){
    double luxRoomPrice = 180;
    double standartRoomPrice = 120;

    printf("Welcome to hotel Sunrise!\n");
    printf("In our hotel we have luxury and standard rooms\n");
    printf("Please make your choice!\n");

    
    char choice = 0;
    unsigned short int roomsLuxury=0;
    unsigned short int roomsLuxuryTottal=0;
    unsigned short int nightsLuxury = 0;
    unsigned short int nightsLuxuryTottal=0;
    unsigned short int roomStandart=0;
    unsigned short int roomStandartTottal=0;
    unsigned short int nightsStandart=0;
    unsigned short int nightsSttandartTotattl=0;
    double subTotal = 0;  
    
    while(choice!='3'){
        printf("For standart room type 1\n");
        printf("For luxury room type 2\n");
        printf("For exit type 3\n");
        scanf("%s",&choice);
        if(choice=='1'){
            printf("Your choice is Luxury room.\n");
            printf("How many nights you are going to stay?\n");
            scanf("%d", &nightsLuxury);
            printf("hom many rooms of this do you want\n");
            scanf("%d",&roomsLuxury);
            subTotal = (subTotal + (nightsLuxury * luxRoomPrice*roomsLuxury));
            roomsLuxuryTottal=roomsLuxury + roomsLuxuryTottal;
            nightsLuxuryTottal= nightsLuxury+nightsLuxuryTottal;
            printf("Your bill is  %.2f\n%u standart rooms for %u nights\n%u Luxury rooms for %u nights",subTotal,roomStandartTottal,nightsSttandartTotattl,roomsLuxuryTottal,nightsLuxuryTottal);} 
        else if (choice=='2'){
            printf("Your choice is Standart room.\n");
            printf("How many nights you are going to stay?\n");
            scanf("%d", &nightsStandart);
            printf("hom many rooms of this do you want\n");
            scanf("%d",&roomStandart);
            subTotal = (subTotal + (nightsStandart *standartRoomPrice*roomStandart));
            roomStandartTottal=roomStandart+roomStandartTottal;
            nightsSttandartTotattl=nightsStandart+nightsSttandartTotattl;
            printf("Your bill is  %.2f\n%u standart rooms for %u nights\n%u Luxury rooms for %u nights",subTotal,roomStandartTottal,nightsSttandartTotattl,roomsLuxuryTottal,nightsLuxuryTottal);}
        else if( choice=='3')
        {break;}
        else 
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}