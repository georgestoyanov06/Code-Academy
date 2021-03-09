#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н*/
int main(){
    FILE *fp;
    fp=fopen("test1.txt","w+");
    fprintf(fp,"%s","HELLOthere");
    fclose(fp);

}