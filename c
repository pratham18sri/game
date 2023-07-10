#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int roadLength = 20;
    int bikePosition = roadLength / 2;
    int gameover = 0;
    char input;

    while (!gameover) {
        system("cls");

        // Print the road
        for (int i = 0; i < roadLength; i++) {
            if (i == bikePosition) {
                printf("B");
            } else {
                printf("-");
            }
        }

        // Get user input
        if (_kbhit()) {
            input = _getch();

            // Move the bike
            if (input == 'a' && bikePosition > 0) {
                bikePosition--;
            } else if (input == 'd' && bikePosition < roadLength - 1) {
                bikePosition++;
            } else if (input == 'q') {
                gameover = 1;
            }
        }

        // Delay for smoother animation
        for (int i = 0; i < 10000000; i++);

    }

    printf("\nGame over!\n");
    return 0;
}
