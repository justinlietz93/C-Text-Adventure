#ifndef PLAYER_H
#define PLAYER_H
#include "../races/races.h"
#include "../config.h"
#include "../utility/utils.h"
#include "../graphics/graphics.h"


// Constants
#define MAX_HEALTH 10
#define MIN_HEALTH 0
#define MIN_XP 0

// Macro to check if the player is alive
#define IS_ALIVE(health) ((health) > MIN_HEALTH)

// Player struct definition
struct Player {
    char name[50];      // Name of the player
    char race[25];      // Race of the player (make sure it's not 'races')
    int age;            // Player age
    int health;         // Player health
    int xp;             // Player experience points
    int str;            // Player strength
    int agi;            // Player agility
    int dex;            // Player dexterity
    int wis;            // Player wisdom
    int mag;            // Player magic power
};


void createPlayer(struct Player *p);
void displayPlayer(struct Player *p);
void levelUp(struct Player *p);

#endif  // PLAYER_H
