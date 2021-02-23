/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
*/
#include <stdio.h>
#define list 10

struct date{

    int day;
    int month;
    int year;
};

void add(struct date* arr){
    int i;
    for ( i = 0;i<list ; i++){
        printf("Enter a date\n:");
        scanf(" %d %d %d",&arr[i].day,&arr[i].month,&arr[i].year);
    }
};
int main(){
    int i=0;
    struct date arr[list];
    add(arr);
   

}