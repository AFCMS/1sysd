//
// Created by afcm on 29/01/24.
//
#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i >= 1; i--) {
        printf("%s\n", argv[i]);
    }
    return 0;
}