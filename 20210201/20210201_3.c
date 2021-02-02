/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата*/
#include <stdio.h>
int atof(char *s);
void isDiggit();

int main(){
    char s[]="-1a1ea43323D2adaav233dadaa.12aaa33d1ecca3";
   atof(s);

}

int atof(char *s){
    double n;
    double power=1.0;
    int i=0;
    n=0.0;
    if(s[0]=='-'){
       i+=1;
    }
    for (i;s[i]>='0' && s[i]<='9';i++){
        n=10.0*n +(s[i]-'0');
        
            while((s[i+1]>='a' && s[i+1]<='z')||(s[i+1]>='A'&& s[i+1]<='Z'&&s[i+1]!='.')){
                i++;
        
            
        }   
    }
    
    
    if(s[i]=='.'){
            i++;}
    for(power=1.0;s[i]>='0' && s[i]<='9';i++) {
                n=10.0*n+(s[i]-'0');
                power=power*10;
                
                    while((s[i+1]>='a' && s[i+1]<='z')||(s[i+1]>='A'&& s[i+1]<='Z')){
                        i++;
        
      
           }   
              }
    if(s[0]=='-'){
        n=n*(-1);
    }
    printf("power %f\n",power);
    printf("to float %lf \n",n/power);
}