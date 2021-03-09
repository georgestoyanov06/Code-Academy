/*Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[] ){
    FILE *fp;
    fp=fopen(argv[1],"rw");
    if(argv[1]==NULL){
        printf("nqma sudurjanie\n");

    }
    else{
            for(;;){
        char *value=malloc(30);
        fscanf(fp,"%s",value);
        if(feof(fp)){
            break;
        }
        printf("%s\n",value);
    }
    }
    fclose(fp);
    
}