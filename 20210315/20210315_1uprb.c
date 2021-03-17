#include "stack.h"
    treeNode_t *root=NULL,*z;
    node_t *first=NULL;
    node_t *last=NULL;
int main(void){
    
    int n = 1;
    while (n){
        printf("Enter a digit:\n");
        scanf("%d", &n);
        write(n);
    }
while(read(&n)){
    printf("%d ", n);
}
printf("\n");


 n = 1;
    while (n){
        printf("Enter a digit:\n");
        scanf("%d", &n);
        push(n);
    }
while(pop(&n)){
    printf("%d ", n);
}


    return 0;
}

