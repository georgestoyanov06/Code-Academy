/*Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp,*fp1;
    int counter;
    char c,c1;
    char *buf=malloc(60);
    int i=0;
    char *buf1=malloc(60);
    fp=fopen("text1.txt","r");
    fp1=fopen("text2.txt","r");
    if(fp==NULL || fp1==NULL){
        perror("Failed to open the file");

    }

    else{
        for(;;){
           
            c=fgetc(fp);
            c1=fgetc(fp1);
            if(c== '\n' && c1=='\n'){
                counter++;
                
                
            }
            if(c!=c1){
                printf("There is diference in line %d\n",counter+1);
             
             
                break;
            }
            if(feof(fp1)&&feof(fp)){
                break;
            }
        }

    }
    fseek(fp,0,SEEK_SET);
    fseek(fp1,0,SEEK_SET);
    while (1)
    {
        fgets(buf,40,fp);
        fgets(buf1,40,fp1);
        if(i==counter){
            printf("%s\n",buf);
            printf("%s\n",buf1);
            break;
        }
        
        i++;
    }
    free(buf1);
    free(buf);
    fclose(fp1);
    fclose(fp);
}