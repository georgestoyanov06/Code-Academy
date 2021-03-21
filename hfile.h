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
void init();
int addData();
void printList();
void longestVac();
void outDated();
void DEL();
FILE menu(FILE *fp);
void* my_strcpy(char *from,char *to);
void writeBinary(FILE *fp);
void readBinary(FILE *fp);