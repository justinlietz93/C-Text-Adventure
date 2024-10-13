#include <stdio.h>
#include <string.h>
#include "player.h"
#include "../races/races.h"


// Function to create a player
void createPlayer(struct Player *p) {
    printf("Enter player name: ");
    fgets(p->name, sizeof(p->name), stdin); // fgets for strings to prevent buffer overflow
    p->name[strcspn(p->name, "\n")] = '\0';
    
    printf("Enter player age: ");
    scanf("%d", &p->age);  // Get the player's age
    
    p->health = MAX_HEALTH;  // Default health is MAX_HEALTH
    p->xp = MIN_XP;          // Default XP is MIN_XP

    // Let the player choose a race
    int raceChoice;
    do {
        printf("Choose your race (1-4):\n1. Human\n2. Elf\n3. Dwarf\n4. Orc\n");
        if (scanf("%d", &raceChoice) != 1 || raceChoice < 1 || raceChoice > 4) {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);

    // Set player race based on choice
    struct Race r = getRace(raceChoice);

    // printf("Debug: Race Retrieved - Name: %s, Health: %d, Str: %d, Agi: %d, Dex: %d, Wis: %d, Mag: %d\n",
    //     r.name, r.health, r.str, r.agi, r.dex, r.wis, r.mag);

    strcpy(p->race, r.name);

    p->health = r.health;
    p->str = r.str;
    p->agi = r.agi;
    p->dex = r.dex;
    p->wis = r.wis;
    p->mag = r.mag;
}

// Function to display player details
void displayPlayer(struct Player *p) {
    printf("\n--- Player Details ---\n");
    printf("Name: %s\n", p->name); // %s is for string
    printf("Age: %d\n", p->age);   // %d is for decimal
    printf("Race: %s\n", p->race); 
    printf("Health: %d\n", p->health);
    printf("XP: %d\n", p->xp);
    printf("\n--- Player Levels ---\n");
    printf("Strength: %d\n", p->str); 
    printf("Agility: %d\n", p->agi); 
    printf("Dexterity: %d\n", p->dex); 
    printf("Wisdom: %d\n", p->wis); 
    printf("Magic: %d\n", p->mag); 

}

void levelUp(struct Player *p) {
    p->xp += 100;     // Add 100 XP for leveling up
    p->health += 20;  // Increase health by 20 when leveling up
    printf("\n%s leveled up! XP is now %d, Health is now %d.\n", p->name, p->xp, p->health);
}
