/*Решете задачата за генериране на 6 буквена парола с
пойнтери
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
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    char choice='1';
    int i;
    int p;
    int c=0;
   
    char passSymbols[52]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char pass[7];
    char *ptrPass=pass;
    
    
    
    while(choice!='2'){
        
        srand(time(NULL));
        if(choice=='1'){
        
           

            while(c<6){
                
                i = rand()%52;
                c++;
                *ptrPass=*(passSymbols+i);
                ptrPass++;
                
             
             }
             
            printf("Yor password is %s\n",pass);
              ptrPass=ptrPass-c;
            c=0;
            }
        else if(choice=='2'){
            break;
        }
       
        printf("if you want new password pres 1\n");
        printf("for exit pres 2\n");
        scanf(" %c",&choice);
    }
}