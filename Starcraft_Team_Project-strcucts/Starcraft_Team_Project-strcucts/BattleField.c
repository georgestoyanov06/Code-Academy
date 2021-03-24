#include "BattleField.h"
#include "Vector.h"
#include "Defines.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Carrier.h"
#include "BattleCruser.h"
#include "Viking.h"
#include "Phoenix.h"
void deleteLastShipFromString(char* str){
  str[strlen(str)-1] = '\0';
}

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr) {
  vectorInit(&battleField->terranFleet, strlen(terranFleetStr));
  int i = 0;
  while (terranFleetStr[i] != '\0')
  {
    if(terranFleetStr[i] == 'v'){
      Viking* viking;
      initViking(&viking);
      vectorPush(&battleField->terranFleet,viking);
    }
    else if(terranFleetStr[i] == 'b'){
      BattleCruser* battleCruser;
      initBattleCruser(&battleCruser);
      vectorPush(&battleField->terranFleet,battleCruser);
    }
    i++;
  }
  
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr) {
  vectorInit(&battleField->protossFleet, strlen(protossFleetStr));
  int i = 0;
  while (protossFleetStr[i] != '\0')
  {
    if(protossFleetStr[i] == 'p'){
      Phoenix* phoenix;
      initPhoenix(&phoenix);
      vectorPush(&battleField->protossFleet,phoenix);
    }
    else if(protossFleetStr[i] == 'c'){
      Carrier* carrier;
      initCarrier(&carrier);
      vectorPush(&battleField->protossFleet,carrier);
    }
    i++;
  }
}

void startBattle(BattleField *battleField) {
  while (true) {
    if (processTerranTurn(battleField)) {
      printf("TERRAN has won!\n");
      break;
    }

    if (processProtossTurn(battleField)) {
      printf("PROTOSS has won!\n");
      break;
    }
  }
}

void deinit(BattleField *battleField) {
}

bool processTerranTurn(BattleField *battleField) {
  int i;
 /* Ship* lastOfEnemy = vectorBack(&battleField->protossFleet);
  for (i = 0; i < battleField->terranFleet.size; i++)
  {
    Ship* ship = (Ship*)vectorGet(&battleField->terranFleet,i);
    if(ship->type == VIKING){
        Viking* viking = (Viking*)vectorGet(&battleField->terranFleet,i);

        if(lastOfEnemy->type == PHOENIX){
          Phoenix* phoenix = (Phoenix*)vectorGet(&battleField->terranFleet,i);
          VikingAtackPhoenix(viking,phoenix);
        }

        if(lastOfEnemy->type == CARRIER){
          Carrier* carrier = (Carrier*)vectorGet(&battleField->terranFleet,i);
          VikingAtackCarrier(viking,carrier);
        }

      }
      if(ship->type == BATTLE_CRUSER){
        BattleCruser* battleCruser = (BattleCruser*)vectorGet(&battleField->terranFleet,i);
      }*/
      for(i=0;i<battleField->terranFleet.size;i++){
    TerranAirship *currShip1=vectorGet(&battleField->terranFleet,i);
    ProtossAirship *currShip=vectorGet(&battleField->protossFleet,battleField->protossFleet.size-1);
    printf("I =%d  terranfleet size%d \n",i,battleField->terranFleet.size);
    currShip->health-=currShip1->demage;
    printf("Curship health of protosfleet %d\n",currShip->health);
     if(currShip->health<=0){
      
    battleField->protossFleet.size-=1;
    if(battleField->protossFleet.size==0){
      return true;
      break;
      }
   
     }
      }
     return false;
}
    
bool processProtossTurn(BattleField *battleField) {
  int i=0;
  for(i;i<battleField->protossFleet.size;i++){
    ProtossAirship *currShip=vectorGet(&battleField->protossFleet,i);
    TerranAirship *currShip1=vectorGet(&battleField->terranFleet,battleField->terranFleet.size-1);
    
    printf("I =%d  protosfleet size %d \n",i,battleField->protossFleet.size);
    currShip1->health-=currShip->demage;
     printf("Curship health1  terranFleet %d\n",currShip1->health);
    if(currShip1->health<=0){

      battleField->terranFleet.size-=1;
      if(battleField->terranFleet.size==0){
        return true;
        break;
      }
    
  }
  }
    return false;
  

}