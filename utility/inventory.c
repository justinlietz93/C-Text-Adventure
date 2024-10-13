#include "inventory.h"


int checkInventory(struct Player *p){
    int option;
    int query = 0;
    int invScrn = 1;
    
    while (invScrn == 1) {
        if (query == 0){
            clearScreen();
            invGraphic();
            printf("\nYou chose to view Inventory.\n");
            printf("\nWhat would you like to do? (1-4):\n");
        }else{
            clearScreen();
            invGraphic();
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
        printf("1. Items\n");
        printf("2. Equip\n");
        printf("3. Craft\n");
        printf("4. Stats\n");
        printf("5. Back\n");
        printf("Enter your choice: ");

        if (scanf("%d", &option) != 1 || option < 1 || option > 5) {
            query = 1; // Invalid choice
            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            switch (option) {
                case 1:
                    clearScreen();
                    printf("\nItems.\n");
                    pause(false, 0);
                    break;
                case 2:
                    clearScreen();
                    printf("\nEquipment.\n");
                    pause(false, 0);
                    break;
                case 3:
                    clearScreen();
                    printf("\nCraft.\n");
                    pause(false, 0);
                    break;
                case 4:
                    clearScreen();
                    displayPlayer(p);
                    break;
                case 5:
                    invScrn = 0;
                    break;
            }
            // Clear the input buffer to remove any leftover characters
            while (getchar() != '\n');
        }
    }
    return option;
}