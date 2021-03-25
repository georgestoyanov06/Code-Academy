#include "BattleField.h"
#include "Vector.h"
#include "Defines.h"
#include <stdio.h>
#include <stdlib.h>
void initAirship(char c, Airship* ship){
   if(c == 'v'){
      ship->type = VIKING;
      ship->health =(int) VIKING_HEALTH;
      ship->shield = 0;
      ship->shieldRegenerateRate = 0;
      ship->demage =(int)VIKING_DAMAGE;
    }
    else if (c =='b'){
      ship->type = BATTLE_CRUSER;
      ship->health = (int)BATTLE_CRUSER_HEALTH;
      ship->shield = 0;
      ship->shieldRegenerateRate = 0;
      ship->demage = (int)BATTLE_BRUSER_DAMAGE;
    }
    else if(c == 'p'){
      ship->type = PHOENIX;
      ship->health = (int)PHOENIX_HEALTH;
      ship->shield = (int)PHOENIX_SHIELD;
      ship->shieldRegenerateRate =(int)PHOENIX_SHIELD_REGENERATE_RATE;
      ship->demage = (int)PHOENIX_DAMAGE;
    }
    else if (c == 'c'){
      ship->type = CARRIER;
      ship->health =(int)CARRIER_HEALTH;
      ship->shield = (int)CARRIER_SHIELD;
      ship->shieldRegenerateRate = (int)CARRIER_SHIELD_REGENERATE_RATE;
      ship->demage = (int)CARRIER_DAMAGE;
    }

}
void generateTerranFleet(BattleField *battleField, const char *terranFleetStr) {
  vectorInit(&battleField->terranFleet, sizeof(Vector));
  int i = 0;
  while (terranFleetStr[i] != '\0')
  {
    Airship* ship;
    ship = malloc(sizeof(Airship));
    initAirship(terranFleetStr[i],ship);
    vectorPush(&battleField->terranFleet, (void*)ship);
    i++;
  }
  
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr) {
  vectorInit(&battleField->protossFleet, sizeof(Vector));
  int i = 0;
  while (protossFleetStr[i] != '\0')
  {
    Airship* ship;
    ship = malloc(sizeof(Airship));
    initAirship(protossFleetStr[i],ship);
    vectorPush(&battleField->protossFleet, (void*)ship);
    i++;
  }
}

/*void startBattle(BattleField *battleField) {
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
   for (int i = 0; i < battleField.terranFleet.size; i++)
  {
    Airship* currShip = (Airship*)vectorGet(&battleField.terranFleet,i);
    Airship* currShip1 = (Airship*)vectorGet(&battleField.protossFleet,battleField.protossFleet.size-1);
    currShip1->health-=currShip->demage;
    printShip(currShip1);
    
  }
  return true;
}

bool processProtossTurn(BattleField *battleField) {
  return false;
}

*/