/*Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int sig) {
    printf("\nNatisnete 2 puti za da izod \n", sig);
}

int main() {

    for(;;) {
        signal(SIGINT, handle_signal);

        signal(EOF, handle_signal);
       
        sleep(10);
    }

    return 0;
}