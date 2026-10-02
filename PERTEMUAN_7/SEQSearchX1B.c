/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

// KAMUS
int T[20] = {65, 24, 56, 138, 15, 45, 11, 28, 202, 23, 78, 67, 44, 83, 193, 96, 69, 25, 42, 70};
int N, X, i, IX, Found;

// ALGORITMA
int main() {
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &N);

    printf("Masukkan elemen yang dicari: ");
    scanf("%d", &X);

    Found = 0;
    i = 1;

    while (i < N && T[i] != X) {
        i = i + 1;
    }

    if (T[i] == X) {
        Found = 1;
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}