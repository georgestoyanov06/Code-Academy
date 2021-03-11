/*Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

void handle_sigint(int sig) 
{ 
    printf("Caught signal %d\n", sig); 
} 
  
int main() 
{ 
    signal(SIGINT, handle_sigint); 
    while (1) ; 
    return 0; 
} 