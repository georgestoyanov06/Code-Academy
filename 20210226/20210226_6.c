#include <stdio.h>
#define SIZEOFSTR 255

typedef struct{
    char p[SIZEOFSTR];
    int a;
}key_t;

int main(){

    key_t testT={"hello",SIZEOFSTR};
    printf("size of testT %d\n",sizeof(testT));
    printf("%s %d",testT.p,testT.a);
    return 0;
}