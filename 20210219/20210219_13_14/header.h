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

void enterInformation(struct information *array);
void printList(struct information *array);
void managerTeam(struct information teamManager,struct information *emploees);