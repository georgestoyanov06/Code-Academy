#include <stdio.h>

int fnPlus(int nA, int nB) { return(nA+nB);}
int fnMinus(int nA, int nB) { return(nA - nB);}
int multi(int nA,int nB) {return (nA * nB);}
int divide(int nA, int nB){return (nA/nB);}
int (*fun_ptr[4])(int nA,int nB)={fnPlus,fnMinus,multi,divide};

int main(){
   /* int (*fun_ptr[4])(int nA,int nB)={fnPlus,fnMinus,multi,divide};*/
    char choice;
    int a,b;
    printf("what calc do you want ? \n For add press 1,minus 2,multi 3,divide 4\n");
    choice=getchar();
    if (choice=='1'){
        printf("write down value for a and b\n");
        scanf(" %d",&a);
        scanf(" %d",&b);
       printf("result= %d",(*fun_ptr[0])(a,b));

    }
    else if(choice=='2'){
        printf("write down value for a and b\n");
        scanf(" %d",&a);
        scanf(" %d",&b);
       printf("result= %d",(*fun_ptr[1])(a,b));
    }

    else if(choice=='3'){
        printf("write down value for a and b\n");
        scanf(" %d",&a);
        scanf(" %d",&b);
       printf("result= %d",(*fun_ptr[2])(a,b));
    }
    else if(choice=='4'){
        printf("write down value for a and b\n");
        scanf(" %d",&a);
        scanf(" %d",&b);
       printf("result= %d",(*fun_ptr[3])(a,b));
    }
    else{
        printf("invalid choice");
    }
}