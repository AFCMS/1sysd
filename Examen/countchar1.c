//
// Created by afcm on 29/01/24.
//
#include <stdio.h>
#include <string.h>

int count_char(const char *str, char o) {
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
    if (argc > 3) {
        printf("Utilisation: <string> <char>\n");
        return 1;
    }

    if (strlen(argv[2]) != 1) {
        printf("Le second argument doit être un caractère à rechercher\n");
        return 1;
    }

    printf("%d\n", count_char(argv[1], argv[2][0]));

    return 0;
}