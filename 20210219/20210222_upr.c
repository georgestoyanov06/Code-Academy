#include <stdio.h>

/*struct test{
    char m_char;
    unsigned short m_unsginged;
};

int main(){
    struct test Test={'c',255};
    printf("size of %d\n",sizeof(Test.m_char));
    printf("size of %d\n",sizeof(Test.m_unsginged));
    printf("size of %d\n",sizeof(Test));




}*/
enum bool{false, true};

int main(){
    enum bool b=12;
   printf("%d\n",b);
    switch (b)
    {
    case true:
        printf("True");
        break;
    
    case false:
        printf("False");
        break;
    }

    return 0;
}