/*Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int teglo;
    int obem;
}pratka;

typedef struct {
    float cenaT1;
    float cenaT2;
    float cenaT3;
    float cenaT4;
    float cenaT5;
    float cenaT6;
    float cenaT7;
    float cenaT8;
    float cenaT9;

}cenaT;

typedef struct{
    float cenaO1;
    float cenaO2;
    float cenaO3;
    float cenaO4;
    float cenaO5;
    float cenaO6;
    float cenaO7;
    float cenaO8;
    float cenaO9;
}cenaO;
void funPratka(pratka *myPratka){
    int broiPratki=0;
    printf("vuvedete broq na pratkite\n");
    scanf(" %d",&broiPratki);
    myPratka=malloc(broiPratki*sizeof(pratka));
    for (int i=0;i<broiPratki;i++){
        printf("Vuvedete obem na pratka[%d]\n",i+1);
        scanf(" %d",&myPratka[i].obem);
        printf("Vuvedete teglo na pratkata[%d]\n",i+1);
        scanf(" %d",&myPratka[i].teglo);
    }
    
   


}
int main(){
    
    pratka *testPratka=NULL;
    cenaT *cenaTeglo=malloc(sizeof(cenaT));
    cenaO *cenaObem=malloc(sizeof(cenaO));
    
}