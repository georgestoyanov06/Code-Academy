/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат */

#include <stdio.h>
#define listSize 3

enum isMale{
    MALE=1
    ,FEMALE

};

struct tagStruc {
    int iVar;
    char sVar[10];
    double dVar;
    enum isMale g ;
};

void enterValues(struct tagStruc *info){
    printf("enter your number\n");
    scanf(" %d",&info->iVar);
    printf("enter your job\n");
    scanf(" %s",info->sVar);
    printf("enter your salary\n");
    scanf(" %lf",&info->dVar);
    printf("write your gende for MALE:1 for FEMALE:2\n");
    scanf(" %d",&info->g);


}
void printValues(struct tagStruc *info){
   /*искам да принтирам само мъжки пол*/
    for(int i=0;i<listSize;i++){
        if(info[i].g==MALE){
            printf("number %d job %s salary %lf\n",info[i].iVar,info[i].sVar,info[i].dVar);
        }
        else{
            continue;
        }
    }
};

int main(){

    struct tagStruc list[listSize];
        for(int i=0; i< listSize;i++){
            enterValues(&list[i]);
        };

        printValues(list);

}