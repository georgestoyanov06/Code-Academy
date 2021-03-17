#include <stdio.h>
#include <stdlib.h>
typedef struct node_t node_t;

typedef struct node_t {
    int data;
    node_t *next;
} node_t;


typedef struct  treeNode_t treeNode_t;
typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

treeNode_t *root;
node_t *start;
node_t *first;
node_t *last;

int del(int n);
treeNode_t *insert(int d);
treeNode_t *search_iter(treeNode_t *t, int n);
treeNode_t *search(int d);
void preorder(treeNode_t *n);
int pop(int *n);
int push(int n);
int write(int n);
int read(int *n);

/*4*/
typedef struct tree {
    int data;
    struct tree *left;
    struct tree *right;
} tree;

extern tree* root;

void insertKey(int data, tree **T);
void preorder(tree *n);
tree *delElement(int x,tree *T);