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


Работя върху друго решение освен другото предоставено .
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

}cena;

cena teglo={0.46,0.69,1.02,1.75,2.13,2.44,3.20,4.27,5.03};
cena obem={0.01,0.11,0.22,0.33,0.56,1.5,3.11,4.89,5.79};
/*void funPratka(pratka *myPratka){
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
    
    
}  */


float funCena(pratka *myPratka){
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
    float sum;
    float sum2;
    int totalWeight=0;
    int totalSeize=0;
    int choice;
    for(int i=0;i<broiPratki;i++){
            
        totalWeight+=myPratka[i].teglo;
        totalSeize+=myPratka[i].obem;
        if(myPratka[i].teglo <=20){
               sum+=teglo.cenaT1;

        }
        else if(myPratka[i].teglo > 20 && myPratka[i].teglo <=50){
                sum+=teglo.cenaT2;}
        else if(myPratka[i].teglo >50 && myPratka[i].teglo <=100){
                sum+=teglo.cenaT3;
        } 
        else if(myPratka[i].teglo  > 100 && myPratka[i].teglo  <=200){
            sum+=teglo.cenaT4;
        }    
        else if(myPratka[i].teglo > 200 && myPratka[i].teglo  <= 350){
            sum+=teglo.cenaT5;
        }
        else if(myPratka[i].teglo  >350 && myPratka[i].teglo  <=500){
            sum+=teglo.cenaT6;
        }
        else if(myPratka[i].teglo > 500 && myPratka[i].teglo  <=100){
            sum+=teglo.cenaT7;
        }
        else if(myPratka[i].teglo  > 1000 &&myPratka[i].teglo  <=2000){
            sum+=teglo.cenaT8;
        }
        else if(myPratka[i].teglo >2000 & myPratka[i].teglo  <= 3000){
            sum+=teglo.cenaT9;
        }
        
        if(myPratka[i].obem <=10){
            sum+=obem.cenaT1;
        }
        else if(myPratka[i].obem > 10 && myPratka[i].obem <= 50){
            sum+=obem.cenaT2;
        }
        else if(myPratka[i].obem >50 && myPratka[i].obem <= 100){
            sum+=obem.cenaT3;
        }
        else if(myPratka[i].obem > 100 && myPratka[i].obem <= 150){
             sum+=obem.cenaT4;
        }
        else if(myPratka[i].obem > 150 && myPratka[i].obem <= 250){
            sum+=obem.cenaT5;
        }
        else if(myPratka[i].obem >250 && myPratka[i].obem <=400){
            sum+=obem.cenaT6;
        }
        else if(myPratka[i].obem > 400 && myPratka[i].obem <=500){
            sum+=obem.cenaT7;
        }
        else if(myPratka[i].obem >500 && myPratka[i].obem <=600){
            sum+=obem.cenaT8;
        }
        else{
            sum+=obem.cenaT9;
        }
}
if(totalSeize<=10){
    sum2+=obem.cenaT1;
}
else if(totalSeize<=50){
    sum2+=obem.cenaT2;
}
else if(totalSeize<=100){
    sum2+=obem.cenaT3;
}
else if(totalSeize<=150){
    sum2+=obem.cenaT4;
}
else if(totalSeize<=250){
    sum2+=obem.cenaT5;
}
else if(totalSeize<=400){
    sum2+=obem.cenaT6;
}
else if(totalSeize<=500){
    sum2+=obem.cenaT7;
}
else if(totalSeize<=600){
    sum2+=obem.cenaT8;
}
else{
    sum2+=obem.cenaT9;
}
if (totalWeight<=20){
    sum2+=teglo.cenaT1;
}
else if(totalWeight <=50){
    sum2+=teglo.cenaT2;
}
else if(totalWeight<=100){
    sum2+=teglo.cenaT3;
}
else if(totalWeight <=200){
    sum2+=teglo.cenaT4;
}
else if(totalWeight <=350){
    sum2+=teglo.cenaT5;
}
else if(totalWeight <=500){
    sum2+=teglo.cenaT6;

}
else if(totalWeight <=1000){
    sum2+=teglo.cenaT7;
}
else if(totalWeight <=2000){
    sum2+=teglo.cenaT8;
}
else if(totalWeight <=3000){
    sum2+=teglo.cenaT9;

}
else{
    sum2+=teglo.cenaT9;
}

if(sum>sum2){
    printf("Pratka s tejest : %d i obem %d e po=dobre da se pravqt pootdleno za cena ot %.2f.\n",totalWeight,totalSeize,sum);
}
else{
    printf("Pratka s tejest : %d i obem %d e po=dobre da se pravqt pootdleno za cena ot %.2f.\n",totalWeight,totalSeize,sum2);
}
free(myPratka);
}

int main(){
    
   pratka *testPratka;
   funCena(testPratka);

   free(testPratka);
}