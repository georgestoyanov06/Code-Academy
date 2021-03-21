
#include <stdio.h>
#include "hfile.h"

void init(){

start = NULL;

}

excursion *start;
void readBinary(FILE *fp){

};
void print(){
            excursion *ptr;
             printf("#######################################\n");
            printf("The unique code is  %s\n",ptr->cod);
            printf("%02d.%02d.%02d\n",ptr->day,ptr->month,ptr->year);
            printf("The lenght of the excursion is  %d",ptr->vacationLenght);
            printf("The price of the excursion is %ld",ptr->price);
            printf("#######################################\n");
        
}
void writeBinary(FILE *fp){
    excursion *ptr=start;
    while(ptr!=NULL){
        fwrite(&ptr,sizeof(ptr),1,fp);
        ptr=ptr->next;
    }
}
void*  my_strcpy(char *from,char *to){
    for(;*from!='\0';from++,to++){
        *to=*from;
        
    }
    *to='\0';
    return to;
    
}

int addData(){
    
    excursion *p = start;
    start = (excursion*)malloc(sizeof(excursion));
    int dd;
    int mm;int yy; int vac;double price;
    int flag=1;
    
    printf("Enter unique 10 digit code\n");
    fflush(stdin);
    scanf("%s",start->cod);


   while(flag){
    //check year
     printf("Enter date of leave (DD.MM.YYYY format): ");
     fflush(stdin);
    scanf("%d.%d.%d",&dd,&mm,&yy);
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
                printf("Date is valid.\n");
                flag=0;}
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11)){
                printf("Date is valid.\n");
                  flag=0;}
            else if((dd>=1 && dd<=28) && (mm==2)){
                printf("Date is valid.\n");
                  flag=0;}
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0))){
                printf("Date is valid.\n");
                  flag=0;}
            else{
                printf("Day is invalid.\n");
                flag=1;
                }
        }
        else
        {
            printf("Month is not valid.\n");
             flag=1;
        }
    }
    else
    {
        printf("Year is not valid.\n");
         flag=1;
    }
    }
    
    printf("enter lenght of the excursion\n");
    fflush(stdin);
    scanf("%d",&vac);
    printf("enter the price of the excursion \n");
    fflush(stdin);
    scanf("%ld",&price);


    if (!start){ 
        return -1;}
  
    



    start->day=dd;
    start->month=mm;
    start->year=yy;
    start->vacationLenght=vac;
    start->price=price;
    start->next = p;





}

void printList(){
    excursion *ptr = start;
    while(ptr != NULL){
         printf("====================================\n");
        printf("The unique code is  %s\n",ptr->cod);
        printf("%02d.%02d.%02d\n",ptr->day,ptr->month,ptr->year);
        printf("The lenght of the excursion is  %d\n",ptr->vacationLenght);
        printf("The price of the excursion is %ld\n",ptr->price);
           printf('\n');
        
        ptr = ptr->next;
        
    }
}


void longestVac(){
    int max=0;
    int dd,yy,mm;
    char *ptr1;
    ptr1=malloc(9);
    double price;
   
     excursion *ptr = start;
    
    while(ptr != NULL){
        if(ptr->vacationLenght>max){

            max=ptr->vacationLenght;
          dd=ptr->day;
            mm=ptr->month;
            yy=ptr->year;
            /*strcpy(cod,ptr->cod);*/
            my_strcpy(ptr->cod,ptr1);
            price=ptr->price;


            
        }
        ptr=ptr->next;

    }   printf("====================================\n");
     printf("%s\n",ptr1);
     printf("Start date of the excursion %02d.%02d.%02d\n",dd,mm,yy);
     printf("The lenght of longest excursion %d\n",max);
     printf("The price of the excursion is %ld\n",price);
    printf('\n');
     free(ptr1);
     
}
/*abcd1234a1*/

void outDated(){
    int flag=1;
    int dd,mm,yy;
    printf("What date is today\n");
    while(flag){
    //check year
     printf("Enter date (DD.MM.YYYY format): ");
     fflush(stdin);
    scanf("%d.%d.%d",&dd,&mm,&yy);
    if(yy>=1900 && yy<=9999)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
                printf("Date is valid.\n");
                flag=0;}
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11)){
                printf("Date is valid.\n");
                  flag=0;}
            else if((dd>=1 && dd<=28) && (mm==2)){
                printf("Date is valid.\n");
                  flag=0;}
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0))){
                printf("Date is valid.\n");
                  flag=0;}
            else{
                printf("Day is invalid.\n");
                flag=1;
                }
        }
        else
        {
            printf("Month is not valid.\n");
             flag=1;
        }
    }
    else
    {
        printf("Year is not valid.\n");
         flag=1;
    }
    }
    excursion *ptr = start;    
    while(ptr!=NULL){
        if((yy>ptr->year) || (yy==ptr->year && mm>ptr->month) || (yy==ptr->year && mm==ptr->month && dd>ptr->day) ){
             printf("===================================\n");
            printf("The unique code is  %s\n",ptr->cod);
            printf("%02d.%02d.%02d\n",ptr->day,ptr->month,ptr->year);
            printf("The lenght of the excursion is  %d\n",ptr->vacationLenght);
            printf("The price of the excursion is %ld\n",ptr->price);
               printf('\n');
        }
         ptr=ptr->next;
    }
    }

    void DEL(){
        char cod[10];
        int lenght;
        int year;
         excursion *ptr = start; 
         excursion *prev; 
        printf("enter information of the data you want to delete \n");
        printf("enter the cod of the excursion :");
        scanf("%s",cod);
        printf("enter how long is the excursion ");
        scanf("%d",&lenght);
        printf("enter the year of the excursion ");
        scanf("%d",&year);
        while(ptr->year!=year && ptr->vacationLenght!=lenght && strcmp(cod,ptr->cod) ){    
              
            prev=ptr;
            ptr=ptr->next;
            }
            
            /*prev->next=ptr->next;*/
            
            if(ptr->next==NULL){
                prev->next=NULL;
            }
            else{
                prev->next=ptr->next;
            }

            free(ptr);
    
        }
    
    
   FILE menu(FILE *fp){
        int choice;
        int choice1=1;
        while(choice1){
            printf("======Main Menu======\n");
            printf("To add new excursion in the file type 1\n");
            printf("To chek the longest excursion type 2\n");
            printf("To check excursion with expired date type 3\n");
            printf("To delete excursion by given date type 4\n");
            printf("To see all the date in the file type 5\n");
            printf("To exit press 6\n");
            printf("=====================\n");
            scanf("%d", &choice);

            switch (choice){
                case 1:
                    addData();
                    break;
                case 2:
                    longestVac();
                    break;
                case 3:
                    outDated();
                    break;
                case 4:
                    DEL();
                    break;
                case 5:
                printList();
                    break;
                case 6:
                    choice1=0;
                    break;
                default:
                    printf("Please enter the number again\n");
                    break;
            }
            fp=fopen("file.bin","wb+");
            writeBinary(fp);
            
        }
        fclose(fp);
    }