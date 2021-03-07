/*Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F

work in progress...
остават да се сложи опция за връщане на ходове и край на играта 
*/

#include <stdlib.h>
#include <stdio.h>
    
    
    int pi[3]={0,0};
    int pj[3]={0,0};
    char p1=3;
    char p2=4;
void funPrint(int maze[][7]){
    
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
        if(maze[i][j]=='F'){
            printf("%c\t",maze[i][j]);
        }
        else if(pi[1]==i && pj[1]==j && pi[0]==i && pj[0]==j){
            printf("%c%d%c\t",p1,maze[i][j],p2);
        }
        else if(pi[0]==i&&pj[0]==j){
            printf("%c%d\t",p1,maze[pi[0]][pj[0]]);
        }
        else if(pi[1]==i&&pj[1]==j){
            printf("%d%c\t",maze[pi[1]][pj[1]],p2);
        }
        
       
        
        else{
         printf("%d\t",maze[i][j]);}
    }
    printf("\n");
}
}
void funMain(int choice,int maze[][7],int player){
    printf("chose your path Player%d\n",player+1);
    scanf(" %d",&choice);
    
    
    switch(choice){
    case 1:/*nadolu*/
        if((pi[player]+maze[pi[player]][pj[player]])>6){
            printf("choose different path\n");
        }
        else{
        pi[player]=pi[player]+maze[pi[player]][pj[player]];
        }

        break;
  
  
    case 2:/*nadqsno*/
    if(pj[player]+maze[pi[player]][pj[player]]>6){
        printf("choose different path\n");
    }   
    else{
        pj[player]=pj[player]+maze[pi[player]][pj[player]];}
        break;
   case 3:/*nalqvo*/
   if(pj[player]-maze[pi[player]][pj[player]]<0){
         printf("choose different path\n");}
         else{
        pj[player]=pj[player]-maze[pi[player]][pj[player]];
        }
        break;
    case 4:/*nagore*/
    if(pi[player]-maze[pi[player]][pj[player]]<0){
         printf("choose different path\n");
    }
    else{
       pi[player]=pi[player]-maze[pi[player]][pj[player]];
       }
        break;
    }
    funPrint(maze);

}  


int main(){
    int choicep1=0;
    int choicep2=0;
    int players=0;
    int maze[7][7]={{3,3,2,4,3,1,2},
                    {2,4,2,3,2,4,3},
                    {4,2,3,2,4,2,1},
                    {4,4,1,2,2,3,4},
                    {3,2,3,3,4,2,2},
                    {3,2,4,2,3,2,1},
                    {1,1,3,3,4,2,70,} };
    funPrint(maze);
  printf("how manny players do you have\n");
    scanf(" %d",&players);
while(2){
    for(int i=0;i<players;i++){
    funMain(choicep1,maze,i);
    }
    
    
  }
}
