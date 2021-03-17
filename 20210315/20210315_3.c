#include "stack.h"
treeNode_t *root=NULL,*z;
#define SIZE 13

int main(){
    int arr[SIZE]={7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    for(int i=0;i<SIZE;i++){
        insert(arr[i]);
    };

    z=root;
    printf("\n%d\n",z->data);
    preorder(z);
    
}