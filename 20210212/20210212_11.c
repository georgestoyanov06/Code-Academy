/*Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>




int main(){

 unsigned numOfPart[10000] ;
 char *firstName[10000];
 char *secondName[10000] ;
 char data[40];
 char data2[40];
 int age[10000];
 int i;
 int count=0;
char choice='1';
for(i=0;choice!='0';i++){
    printf("enter the participant number\n");
    scanf(" %d",&numOfPart[i]);
    printf("enter  the participant name : \n");
    scanf("%s",&data);
    firstName[i] = (char*)malloc(strlen(data) + 1);
     strcpy(firstName[i], data);
    printf("enter the participant second name : \n");
    scanf("%s",&data2);
    secondName[i] = (char*)malloc(strlen(data2) + 1);
    strcpy(secondName[i], data2);
    printf("enter the participant age : \n");
    scanf(" %d",&age[i]);
    count++;
    printf("do you have another participant to add.Press 1. \n");
    scanf(" %c",&choice);


}

for(i=0;i<count;i++){
    printf("Num of part:%d\n",numOfPart[i]);
    printf("First name: %s\n",firstName[i]);
    printf("Second name %s\n",secondName[i]);
    printf("age : %d\n",age[i]);
    
}

}