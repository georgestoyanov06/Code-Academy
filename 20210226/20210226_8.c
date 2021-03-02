/*Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void)*/
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 3


struct Stack{
    int *contents;
    int top;

};

int isFull(struct Stack* stack)
{
    return stack->top == MAXSIZE - 1;
};
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
};
   
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->contents[++stack->top] = item;
    printf("%d pushed to stack\n", item);
};
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->contents[stack->top--];
};
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->contents[stack->top];
};




int main(){
    struct Stack Stack1;
    struct Stack *myStack=&Stack1;
    myStack=malloc(MAXSIZE*sizeof(struct Stack)); 
    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);
 
    printf("%d popped from stack\n", pop(myStack));
    free(myStack);
}