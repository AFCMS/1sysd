#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int found = 0, secret, guess;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("J'ai choisi un nombre entre 1 et 100, devinez lequel !\n");

    while (!found) {
        printf("Devine le nombre: \n");
        scanf("%d", &guess);
        if (guess > secret) {
            printf("Trop haut!\n");
        } else if (guess < secret) {
            printf("Trop bas!\n");
        } else {
            printf("Trouvé!\n");
            found = 1;
        }
    }
    return 0;
}