#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int val;
    int choice = -1;
    srand(time(NULL));
    val = rand() % 100;

    while (val != choice) {
        printf("Guess the number: \n");
        scanf("%d", &choice);
        if (choice > val) {
            printf("Too high!\n");
        } else if (choice < val) {
            printf("Too low!\n");
        } else {
            printf("You got it!\n");
        }
    }
    return 0;
}