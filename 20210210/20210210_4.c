/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    char choice='1';
    int i;
    int p;
    
   
    char passSymbols[52]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char pass[7];
    
    
    while(choice!='2'){
        
       
        if(choice=='1'){
        
            srand(time(NULL));
            p=0;
            while(p<6){
            
                i = rand()%52;
                pass[p]=passSymbols[i];
                p++;
             
             }
            printf("Yor password is %s\n",pass);
        
            }
        else if(choice=='2'){
            break;
        }
       
        printf("if you want new password pres 1\n");
        printf("for exit pres 2\n");
        scanf(" %c",&choice);
    }
}