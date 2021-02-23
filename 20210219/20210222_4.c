/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?*/

#include <stdio.h>

struct date{

    int day;
    int month;
    int year;
};

int main(){

    struct date contractdate={10,3,1996};
    
    struct date *ptr= &contractdate;
    

    contractdate.day = 1;
    contractdate.month = 4;
    contractdate.year = 1997;

    ptr->month = 10;
    printf("%d.%d.%d",contractdate.day,contractdate.month,contractdate.year);

}

