#include "header.h"
#include <stdio.h>
struct information Ivan={1,"ivan","georgiev","ivanov","ceo",23,25000};
int main(){

    struct information list[listSize];
    enterInformation(list);
    managerTeam(Ivan,list);
    printList(list);

    
}