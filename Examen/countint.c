//
// Created by afcm on 29/01/24.
//
#include <stdio.h>

/**
 *
 * @param t Tableau d'entiers
 * @param n Taille du tableau
 * @param val Valeur à compter
 * @return Nombre de fois que val apparaît dans t
 */
int compte_int(const int *t, int n, int val) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (t[i] == val) {
            count++;
        }
    }
    return count;
}

int main() {
    int t1[5] = { 2, 42, 1, 42, 9 };
    int t2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


    printf("%d dans t1 : %d fois.\n", 42, compte_int(t1, 5, 42));
    printf("%d dans t1 : %d fois.\n",  2, compte_int(t1, 5,  2));
    printf("%d dans t2 : %d fois.\n", 10, compte_int(t2, 10, 10));
    printf("%d dans t2 : %d fois.\n", 42, compte_int(t2, 10, 42));
}