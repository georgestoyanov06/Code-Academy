#include <stdio.h>

char *month_name(int n);
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"};
int main(){
    unsigned number;
    printf("write number of month\n");
    scanf(" %d",&number);
   printf("the %d month is %s\n",number ,month_name(number));
   return 0;
}

char *month_name(int n){
    if (n<1 || n>12){
        return name[0];
    }
    else{
        return name[n];
    }
}
