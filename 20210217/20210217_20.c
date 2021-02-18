/*Напишете програма, която да създаде стек (LIFO) от 16 елемента,
който има следното API
int pop()
void push()
int top()
int isFull()
Вариация: Пробвайте с опашка(FIFO), но вече вие предложете API
и го изпробвайте в main().

work in progress..
*/
#include <stdio.h>

int MAXSIZE = 16;
int queue[16];
int top = 0,
