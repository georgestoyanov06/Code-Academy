#include <stdio.h>
#include <stdlib.h>
typedef struct node node;

typedef struct node {
    int data;
    node *next;
} node;

node *start;

void init(void);
int add(int data);
void printlist(void);
int dellFirst(int *n);
int printN(int n);/* 3 zadacha*/