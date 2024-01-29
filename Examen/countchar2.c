//
// Created by afcm on 29/01/24.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int count_char(char *str, char o) {
    int c = 0;

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == o) {
            c++;
        }
        i++;
    }

    return c;
}

int main(int argc, char *argv[]) {
    if (argc < 3 || argc > 4) {
        printf("Utilisation: <string> <char> [-i]\n");
        return 1;
    }

    if (strlen(argv[2]) != 1) {
        printf("Le second argument doit être un caractère à rechercher\n");
        return 1;
    }

    int case_sensitive = 1;
    if (argc == 4 && strcmp(argv[3], "-i") == 0) {
        case_sensitive = 2; // Désactive la sensibilité à la casse
    }

    switch (case_sensitive) {
        case 1:
            printf("Nombre d'occurences: %d\n", count_char(argv[1], argv[2][0]));
            break;
        case 2:
            for (int c = 0; argv[1][c]; c++) {
                argv[1][c] = tolower(argv[1][c]);
            }

            argv[2][0] = tolower(argv[2][0]);

            printf("Nombre d'occurences: %d\n", count_char(argv[1], argv[2][0]));
            break;
        default:
    }

    return 0;
}