/*Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe

компилира, но като се опитам да подкарам ехе тата дава грешка 

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define listSize 3

typedef struct participant{
    
 unsigned numOfPart;
 char *firstName;
 char *secondName;
 int age;
}participant;
void myFree(participant *participant0);
void addPart(participant* participant0);

void myPrint(participant* participant0,int count);

int main(){
 participant *participant0;
 participant0=malloc(listSize*sizeof(participant));
 addPart(participant0);
/* myFree(participant0);
 free(participant0);*/
}

void addPart(participant* participant0){
    int i;
 int count=0;
 char choice='1';
 for(i=0;choice!='0';i++){
    printf("enter the participant number\n");
    scanf(" %d",&participant0[i].numOfPart);
    printf("enter  the participant name : \n");
    participant0[i].firstName=malloc(20);
    scanf("%s",&participant0[i].firstName);
    printf("enter the participant second name : \n");
    participant0[i].secondName=malloc(20);
    scanf("%s",&participant0[i].secondName);
    printf("enter the participant age : \n");
    scanf(" %d",&participant0[i].age);
    count++;
    printf("do you have another participant to add.Press 1 or pres 0 for exit. \n");
    scanf(" %c",&choice);
   
}


   
}
void myPrint(participant* participant0,int count){
    for(int i=0;i<count;i++){
    printf("Num of part:%d\n",participant0[i].numOfPart);
    printf("First name:%s\n",&participant0[i].firstName);
    printf("Second name:%s\n",&participant0[i].secondName);
    printf("age : %d\n",participant0[i].age);
}
}

void myFree(participant *participant0){

    for(int i=0;i<listSize;i++){
        free(participant0[i].firstName);
        free(participant0[i].secondName);
    }
}