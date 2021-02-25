/*Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

 #include <stdio.h>
 #include <math.h>

 #define AVG(x,y) (((x)/2) + ((y)/2))

 #define AVG1(a,b,res,p) for(float i=(a);i<=(b);i++,p++){  res+=i;}
 #define MY_POW(x,y) {\
            int temp = x;\
            while(y > 1){\
                x *= temp;\
                y--;\
            }\
            if(y == 0){\
                x = 1;\
            }\
        }

#define TOUPPER(u) (((u)>= 'a') && ((u) <= 'z')) ? (u - 32) : (u)

#define DISP(q) {\
    printf("sqrt (%g) = %g\n", q, sqrt(q));\
}/*не мисля,четова е нещото ,което се иска от условието, но само така работеше*/


 int main(){
     /*1*/
     int p=0;
     float res=0;
    int x=10;
      int y=20;
     printf("AVG %d\n",(AVG(x,y)));

    /*2*/
     float a=1;
     float b=3;
     
    AVG1(3,5,res,p)
    printf("AVG1 %f\n",res/p);

    /*3*/
    x=2;
    y=4;
    MY_POW(x,y);
   
     printf("MY_POW %d\n", x);


     char v= 'b';
     char V='B';
     printf("%c to %c\n",v,TOUPPER(v));
      printf("%c to %c\n",V,TOUPPER(V));

      float q=25;
      DISP(q);
 }
        
       

