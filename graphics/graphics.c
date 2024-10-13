#include "graphics.h"

void clearScreen() {
    #ifdef _WIN32
        system("cls");  // Clears the screen on Windows
    #else
        system("clear");  // Clears the screen on Linux and macOS
    #endif
}

void displayMenu() {
    printf("=========================================================\n");
    printf("||                                                      ||\n");
    printf("||  M     M EEEEE DDDD  III  EEEEE V   V  AAAAA  L      ||\n");
    printf("||  MM   MM E     D   D  I   E     V   V A     A L      ||\n");
    printf("||  M M M M EEEEE D   D  I   EEEEE  V V  AAAAAAA L      ||\n");
    printf("||  M  M  M E     D   D  I   E      V V  A     A L      ||\n");
    printf("||  M     M EEEEE DDDD  III  EEEEE   V   A     A LLLLL  ||\n");
    printf("||                                                      ||\n");
    printf("||           A Fantasy Text Adventure                   ||\n");
    printf("||                                                      ||\n");
    printf("||            1. Start New Game                         ||\n");
    printf("||            2. Load Game                              ||\n");
    printf("||            3. Exit                                   ||\n");
    printf("||                                                      ||\n");
    printf("||                                                      ||\n");
    printf("=========================================================\n");
    printf("Enter your choice: ");
}

void medGraphic() {
    printf("=========================================================\n");
    printf("||                                                      ||\n");
    printf("||  M     M EEEEE DDDD  III  EEEEE V   V  AAAAA  L      ||\n");
    printf("||  MM   MM E     D   D  I   E     V   V A     A L      ||\n");
    printf("||  M M M M EEEEE D   D  I   EEEEE  V V  AAAAAAA L      ||\n");
    printf("||  M  M  M E     D   D  I   E      V V  A     A L      ||\n");
    printf("||  M     M EEEEE DDDD  III  EEEEE   V   A     A LLLLL  ||\n");
    printf("||                                                      ||\n");
    printf("||           A Fantasy Text Adventure                   ||\n");
    printf("||                                                      ||\n");
    printf("=========================================================\n");
}

void invGraphic() {
    printf("=======================================================+======\n");
    printf("||                                                           ||\n");
    printf("||   III  N   N V   V EEEEE N   N TTTTT OOOOO RRRR  Y     Y  ||\n");
    printf("||    I   NN  N V   V E     NN  N   T   O   O R   R  Y   Y   ||\n");
    printf("||    I   N N N  V V  EEEEE N N N   T   O   O RRRR     Y     ||\n");
    printf("||    I   N  NN   V   E     N  NN   T   O   O R  R     Y     ||\n");
    printf("||   III  N   N   V   EEEEE N   N   T   OOOOO R   R    Y     ||\n");
    printf("||                                                           ||\n");
    printf("||                Your Items and Equipment                   ||\n");
    printf("||                                                           ||\n");
    printf("==============================================================\n");
}
