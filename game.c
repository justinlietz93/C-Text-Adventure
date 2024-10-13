// game.c
#include "game.h"

int running = 1;

void startGame() {

    struct Player player1;
    int startOption;
    
    while (1) {
        clearScreen();
        displayMenu(); // Main menu

        if (scanf("%d", &startOption) != 1 || startOption < 1 || startOption > 3) {
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            while (getchar() != '\n');
            break;
        }
    }

    switch (startOption) {
        case 1:
            // Start a new game
            if (remove("save.dat") == 0) 
                printf("Previous save file deleted.\n");
            createPlayer(&player1);
            break;
        case 2:
            // Load game
            if (loadGameBinary(&player1, "save.dat")) {
                printf("Loaded existing save file.\n");
            } else {
                printf("Failed to load save file. Starting a new game.\n");
                createPlayer(&player1);
            }
            break;
        case 3:
            // Quit
            printf("Quitting the game. Goodbye!\n");
            return; // Exit the function (and program)
    }

    while (running){
        setAction(&player1);
        // Future expansion: Call other functions based on the story
    }

    // Save the game upon exiting
    saveGameBinary(player1, "save.dat");
    printf("Game saved successfully.\n");
}


// Function to set and handle user actions
void setAction(struct Player *p) {
    int option;
    int query = 0;

    clearScreen();
    medGraphic();
    // displayPlayer(p);

    while (1) {
        if (query == 0){
            printf("\nWhat would you like to do? (1-4):\n");
        }else{
            clearScreen();
            medGraphic();
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
        
        printf("1. Explore\n");
        printf("2. Rest\n");
        printf("3. Inventory\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &option) != 1 || option < 1 || option > 4) {
            query = 1;
            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            query = 0;
            // Clear the input buffer to remove any leftover characters
            while (getchar() != '\n');
            break;
        }
    }

    execAction(option, p);
}

// Function to execute actions based on user choice
void execAction(int option, struct Player *p) {
    clearScreen();
    switch (option) {
        case 1:
            printf("\nYou chose to Explore.\n");
            pause(false, 0);
            break;
        case 2:
            printf("\nYou chose to Rest.\n");
            pause(false, 0);
            // rest logic
            break;
        case 3:
            checkInventory(p);
            // inventory logic
            break;
        case 4:
            printf("\nYou chose to Quit the game.\n");
            running = 0;
            break;
        default:
            printf("Invalid option!\n");
    }
}


void forestPath() {
    printf("You walk into the forest...\n");
    // forest logic
}

void cavePath() {
    printf("You enter the cave...\n");
    // cave logic
}

void fightMonster() {
    printf("You fight the monster...\n");
    // fight logic
}

void runAway() {
    printf("You run away...\n");
    // escape logic
}
