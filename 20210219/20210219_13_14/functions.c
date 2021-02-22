#include<stdio.h>
#include"header.h"


void enterInformation(struct information *array)
{
    for(int index=0;index<listSize;index++ ){
    printf("Employee Informattion\n");
    printf("Enter employee number: ");
    scanf(" %d", &array[index].number);
    printf("Enter employee first name:");
    scanf("%s", &array[index].firstName);
    printf("Enter employee secomd:");
    scanf("%s", &array[index].secondName);
    printf("Enter employee third name:");
    scanf("%s", &array[index].thirdName);
    printf("Enter employee position:");
    scanf("%s", &array[index].position);
    printf("Enter employee work experience:");
    scanf("%d", &array[index].exp);
    printf("Enter employee salary:");
    scanf("%float", &array[index].salary);
    }

}
void printList(struct information *array)
{
    for (int i = 0; i < listSize; i++)
    {
        printf("=============================\n");
        printf("------Employee Details-------\n");
        printf("Employee number: %d\n", array[i].number);
        printf("Employee full name: %s %s %s\n", array[i].firstName, array[i].secondName, array[i].thirdName);
        printf("Employee position: %s\n", array[i].position);
        printf("Employee work experience: %d\n", array[i].exp);
        printf("Employee salary: %.2f\n", array[i].salary);
        printf("      Manager Details       \n");
        printf("Manager number: %d\n", array[i].m_manager->number);
        printf("Manager full name: %s %s %s\n", array[i].m_manager->firstName, array[i].m_manager->secondName, array[i].m_manager->thirdName);
        printf("Manager position: %s\n", array[i].m_manager->position);
        printf("Manager work experience: %d\n", array[i].m_manager->exp);
        printf("Manager salary: %.2f\n", array[i].m_manager->salary);
        
    }
}
void managerTeam(struct information teamManager,struct information *emploees){
    for (int i;i<listSize;i++){
        emploees[i].m_manager=&teamManager;
    }
}