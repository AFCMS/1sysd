//
// Created by afcm on 08/01/24.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        return 1;
    }

    double num1 = strtof(argv[1], NULL);
    double num2 = strtof(argv[2], NULL);
    char op = argv[3][0];

    switch (op) {
        case '+':
            printf("%f", num1 + num2);
            break;
        case '-':
            printf("%f", num1 - num2);
            break;
        case '*':
            printf("%f", num1 * num2);
            break;
        case '/':
            printf("%f", num1 / num2);
            break;
        default:
            printf("Error");
            break;
    }

    return 0;
}