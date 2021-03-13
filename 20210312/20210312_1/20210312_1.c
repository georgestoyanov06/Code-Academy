#include "20210312_1.h"

void init(void) {
    start = NULL;
}

int add(int data) {
    node *pStart = start;
    start = (node*)malloc(sizeof(node)); 

    if(!start) return -1;
    start->data = data;
    start->next = pStart;

    return 0; 
}
void printlist(void)
{
    node* pStart = start;
    while(pStart != NULL) {
        printf("%d ", pStart->data);
        pStart = pStart->next;
    }
    printf("\n");
}

int dellFirst(int *n) {
    node *pStart = start;
    if(start) {
        *n = start->data;
        start = start->next;
        free(pStart);
        return 1;
    } else {
        return 0; 
    }
}

int printN(int n) {
    node* pStart= start;
    while(pStart != NULL && n > 1) {
        pStart = pStart->next;
        n--;
    }

    if(n > 1)
        return -1;
    else
        return pStart->data;
}
