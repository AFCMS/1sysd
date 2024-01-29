//
// Created by afcm on 29/01/24.
//
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i >= 1; i--) {
        for (int j = strlen(argv[i]) - 1; j >= 0; j--) {
            putchar(argv[i][j]);
        }
        printf("\n");
    }
    return 0;
}