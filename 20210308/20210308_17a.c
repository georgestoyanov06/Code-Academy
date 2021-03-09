#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct participant{
    
 unsigned numOfPart;
 char *firstName;
 char *secondName;
 int age;
}participant;

void myPrint(participant* participant0,int count);

int main(){

    participant* participant0;
    char *temp = NULL;
    int Number, i, j;
    int count;
    for(i = 0; i < count; i++){
        for(j = i + 1; j < count; j++){

            if(strncmp(&participant0[i].firstName, &participant0[j].firstName, 1) > 0){
                
                temp = participant0[j].firstName;
                participant0[j].firstName = participant0[i].firstName;
                participant0[i].firstName = temp;

                temp = participant0[j].secondName;
                participant0[j].secondName = participant0[i].secondName;
                participant0[i].secondName = temp;

                temp = participant0[j].numOfPart;
                participant0[j].numOfPart = participant0[i].numOfPart;
                participant0[i].numOfPart = temp;

                temp = participant0[j].age;
                participant0[j].age = participant0[i].age;
                participant0[i].age= temp;
            
        }
    }
}

myPrint(participant0,count);
}
void myPrint(participant* participant0,int count){
    for(int i=0;i<count;i++){
    printf("Num of part:%d\n",participant0[i].numOfPart);
    printf("First name:%s\n",&participant0[i].firstName);
    printf("Second name:%s\n",&participant0[i].secondName);
    printf("age : %d\n",participant0[i].age);
}
}