//
// Created by afcm on 29/01/24.
//
#include <stdio.h>

/**
 * @param temp_c Température en Celcius
 * @return Température en Farenheit
 */
float celsius2fahrenheit(float temp_c) {
    return temp_c * 9 / 5 + 32;
}

/**
 * @param temp_f Température en Farenheit
 * @return Température en Celcius
 */
float fahrenheit2celsius(float temp_f) {
    return (temp_f - 32) * 5 / 9;
}

int main() {
    int c;
    printf("Choisir la conversion c->f (1) ou f->c (2) :");
    scanf("%d", &c);

    switch (c) {
        case 1:
            printf("Conversion Celsius -> Farenheit\n");
            float temp_c;

            printf("Température en Celcius :");
            scanf("%f", &temp_c);
            printf("Température en Farenheit : %0.2f\n", celsius2fahrenheit(temp_c));
            break;
        case 2:
            printf("Conversion Farenheit -> Celsius\n");
            float temp_f;

            printf("Température en Farenheit :");
            scanf("%f", &temp_f);
            printf("Température en Celcius : %0.2f\n", fahrenheit2celsius(temp_f));
            break;
        default:
            printf("Choix invalide\n");
            return 1;
    }

    return 0;
}