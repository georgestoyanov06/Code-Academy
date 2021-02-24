/*Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/


#include <stdio.h>
extern int g_arr[][13];
struct date{
    unsigned day:5;
    unsigned month : 4;
    unsigned year ;

};

int funLeapYear(struct date* date1){
    
    
    
        if (date1->year % 400 == 0){
            return 1;
            
        }   
        else if (date1->year% 100 == 0) {
            return 0;
   }
   
        else if (date1->year % 4 == 0) {
            return 1;
   }
   
        else {
             return 0;
   }
    
};
int funValidation(struct date* date1){
    if (date1->day>g_arr[0][date1->month] || date1->day<1){
        return 0;
    }
    else{
        return 1;
    }
};
void printDate(struct date* date1){
    if(funValidation(date1)){
        printf("%d/%d/%d\n", date1->day, date1->month, date1->year);
    }
    else{
        printf("Invalid  date");
    }
};

int main(){
    struct date test1={110,3,1996};
    printDate(&test1);
}
int g_arr[][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };