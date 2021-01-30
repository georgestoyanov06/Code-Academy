#include "20210129_10.h"
#include <stdio.h>
#include <math.h>
unsigned int obshtoKratno(){
    unsigned int a,b;
    unsigned int biggerNumber;
    printf("Write two positive numbers\n");
    scanf("%d %d",&a,&b);
    if (a>b){
        biggerNumber=a;
    }
    else{
        biggerNumber=b;
    }
    while(1){
        if  ( biggerNumber%a==0 && biggerNumber%b==0){
                break;
        }
          biggerNumber++;
          
    }
    printf("obshtokratno=%d\n",biggerNumber);
}
float absolutnaStoinost(float c){
    if (c<0){
        return c=-1*c;
    }
    else{
        return c;
    }
    

}
float square(float c){
    printf("Give new value for c\n");
    scanf("%f",&c);
    if (c<0){
        printf("sqrt c= %f\n",sqrt(absolutnaStoinost(c)));
    }
    else{
        printf("sqrt c= %f\n",sqrt(c));
    }

    }      