#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int a;
    struct node* m_Node;
}node;

int main(){
        typedef node* ptr;
        ptr test=(ptr)malloc(1000);
        printf("size of %d",sizeof(test));
       /* test.a=55;
        test->m_Node.a=105;
        printf("%d %d",test.a,test->m_Node.a);*/
        free(test);
}