#include "20210312_1.h"

extern node* start;


int main(){
     init();

    for(int i = 1; i <= 14; i++) {
        add(i);
    }
    int elementN=6;
    printf("%d",printN(elementN));/*6 element*/
}