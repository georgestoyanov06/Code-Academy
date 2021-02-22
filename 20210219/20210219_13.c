/*Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник

In progresss..................


*/

#include <stdio.h>
#define listSize 10
struct information{
    int number;
    char firstName[20];
    char secondName[20];
    char thirdName[20];
    char position[15];
    int exp;
    float salary;
    struct information* m_manager;


};
struct information Ivan={1,"ivan","georgiev","ivanov","ceo",23,25000};

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

};
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
};
void managerTeam(struct information teamManager,struct information *emploees){
    for (int i;i<listSize;i++){
        emploees[i].m_manager=&teamManager;
    }
}
int main(){

    struct information list[listSize];
    enterInformation(list);
    managerTeam(Ivan,list);
    printList(list);

    
}