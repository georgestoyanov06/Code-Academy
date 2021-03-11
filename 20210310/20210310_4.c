/*Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата*/
#include <errno.h>
#include <stdio.h>
#include <string.h>
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

FILE *fp;
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
if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }

free(myPratka);
}

int main(){
    
    fp=fopen("log.txt","w");
    if(fp==NULL){
        perror("failed to open");
        exit(1);
    }

   pratka *testPratka;
   funCena(testPratka);

   free(testPratka);
}