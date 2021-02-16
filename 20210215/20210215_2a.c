#include <stdio.h>
int main(int argc, char *argv[]){
    argv=argv+1;
    for( ; *argv; argv++){
        printf("%s ", *argv);
        printf("\n");}
    return 0;
}