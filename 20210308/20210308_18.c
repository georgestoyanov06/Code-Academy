/*Направете сериализация и десериализация на структурата
typedef struct Person{
char name[20];
int age;
char gender;
}t_person;
 в XML формат по показания в лекцията начин.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


 typedef struct Person{
char name[20];
int age;
char gender;
}t_person;

int main(){


    t_person georgi={
        .name="georgi",
        .age=25,
        .gender='M'
    };
    t_person dgeorgi;
FILE *fp;
fp=fopen("test18.xml","w+");
fprintf(fp,"%s %d %c\n", georgi.name, georgi.age, georgi.gender);
fseek(fp, 0, SEEK_SET);
fscanf(fp, "%s %d %c\n", dgeorgi.name, &dgeorgi.age, &dgeorgi.gender);
printf("%s, %d, %c\n", dgeorgi.name, dgeorgi.age, dgeorgi.gender);
fclose(fp);
}