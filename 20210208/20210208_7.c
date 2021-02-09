/*Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

#include <stdio.h>


int fun(int year,int month,int day);
extern int g_arr[][13];
int main(){
    int year;
    int month;
    int day;
    g_arr[1][13]=
    
    {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    }
       ;
       
       
    scanf("%d, %d ,%d",&year,&month,&day);
    fun(year,month,day);
}
int fun(int year,int month,int day){
    
    int i,j;
    int poredenDen=0;
        if (year % 400 == 0){
            j=1;
            
        }   
        else if (year % 100 == 0) {
            j=0;
   }
   
        else if (year % 4 == 0) {
            j=1;
   }
   
        else {
             j=0;
   }
    for(j,i=0;i<=month;i++){
        poredenDen+=g_arr[j][i];
    }
    printf("%d\n",poredenDen+=day);
}