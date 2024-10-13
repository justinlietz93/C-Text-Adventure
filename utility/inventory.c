#include "inventory.h"


int checkInventory(struct Player *p){
    int option;
    int query = 0;
    clearScreen();
    while (1) {
        if (query == 0){
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
            // Clear the input buffer to remove any leftover characters
            while (getchar() != '\n');
            break;
        }
    }
    return option;
}