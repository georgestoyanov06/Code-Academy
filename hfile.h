#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CODSIZE 10

        
typedef struct excursion excursion;

typedef struct excursion{

    char cod[CODSIZE];
    int day;
    int month;
    int year;
    unsigned vacationLenght;
    double price;
    excursion *next;
}excursion;

extern excursion *start;
void print();
int  addData();
void printList();
void longestVac();
void outDated();
void deleteVac();
FILE menu(FILE *fp);
void* my_strcpy(char *from,char *to);
void writeBinary(FILE *fp);
void checkDate(int *flag,int yy,int mm ,int dd);
void init();