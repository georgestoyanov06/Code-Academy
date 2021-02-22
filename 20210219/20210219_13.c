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
#define listSize 3
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
void enterInformation(struct information *array, int index)
{
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
    scanf("%lf", &array[index].salary);
  /*  printf("Enter employee number: ");
    scanf(" %d", &array[index].manager->number);
    printf("Enter employee first name:");
    scanf("%s", &array[index].manager->firstName);
    printf("Enter employee secomd:");
    scanf("%s", &array[index].manager->secondName);
    printf("Enter employee third name:");
    scanf("%s", &array[index].manager->thirdName);
    printf("Enter employee position:");
    scanf("%s", &array[index].manager->position);
    printf("Enter employee work experience:");
    scanf("%d", &array[index].manager->exp);
    printf("Enter employee salary:");
    scanf("%lf", &array[index].manager->salary);*/
};

/*struct boss{
    int number;
    char firstName[20];
    char secondName[20];
    char thirdName[20];
    char position[15];
    char exp;
    double salary;
}*/

int main(){
    struct information list={1,"ivan","ivan","ivan","ceo",24,143};
    
    
   /* for (int i = 0; i < listSize+1; i++)
    {
        enterInformation(list,i);
        
    }*/

}