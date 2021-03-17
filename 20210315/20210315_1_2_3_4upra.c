#include "stack.h"


int pop(int *n){
    if(start){
    *n = start->data;
    node_t *p = start;
    start = start->next;
    free(p);
    return 1;
    }else{
    return 0;   
    }
}
int push(int n){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));
    if(!start)return 1;
    start->data = n;
    start->next = p;
    return 0;
}

int write(int n){
    node_t *p = last;
    last = (node_t*)malloc(sizeof(node_t));
    if(!last){
        return 1;}
    last->data = n;
    last->next = NULL;
    if(p != NULL){
        p->next = last;}
    if(first == NULL){
        first = last;}
    return 0;
}
int read(int *n){
    if(first){ 
        *n = first->data;
        node_t *p = first;
        first = first->next;
        free(p);
        return 1;
    }else
        return 0;
}

treeNode_t *insert(int d){
    treeNode_t *tmp = (treeNode_t*)malloc(sizeof(treeNode_t));
    treeNode_t *current= NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if(NULL == root){
        root = tmp;
    }
    else{
        current = root;
        while(1){
            parent = current;
            if(d < parent->data){
                current = current->left;
                    if(current == NULL){
                         parent->left = tmp;
                         return tmp;
                    }   
}           else{
                current = current->right;
                if(current == NULL){
                    parent->right = tmp;
                    return tmp;
                }
             }
        }
    }
}


void preorder(treeNode_t *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

treeNode_t *search_iter(treeNode_t *t, int n){
    while ((t != NULL)&&(t->data != n)){
        if(t->data < n)
            t = t->right;
        else
            t = t->left;
    }
return t;
}

treeNode_t *search(int d){
    treeNode_t *current = root;
    printf("Visiting elements: ");
    while (current->data != d){
        if(current != NULL)
            printf("%d ", current->data);
        if(current->data > d)
            current = current->left;
        else
            current = current->right;
        if(current == NULL)
            return NULL;
}
    return current;
}

int del(int n){
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if(current->right == NULL && current->left != NULL){
        printf("del =%d\n", current->left->data);
        current = current->left;
      
        free(current);
        parent->left = NULL;
 }  else if(current->right != NULL && current->left == NULL){
        current = current->right;
        free(current);
        parent->right = NULL;
    }
}

void insertKey(int data, tree **T)
{

    if (*T == NULL)
    {
        *T = (tree *)malloc(sizeof(tree));
        (*T)->data = data;
        (*T)->left = NULL;
        (*T)->right = NULL;
    }
    else if (data > (*T)->data)
    {
        insertKey(data, &(*T)->right);
    }
    else
    {
        insertKey(data, &(*T)->left);
    }
}

void preorder(tree *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

tree *delElement(int x,tree *T){ 

    if (T == NULL)
        return T;
    if (x < T->data)
        T->left = delElement(x,T->left);

    else if (x > T->data)
    {
        T->right = delElement(x,T->right);
    }
    else
    {
        if (T->left == NULL)
        {
            tree *temp = T->right;
            free(T);
            return temp;
        }
        else if (T->right == NULL)
        {
           tree *temp = T->left;
            free(T);
            return temp;
        }
    }
    return T;
}