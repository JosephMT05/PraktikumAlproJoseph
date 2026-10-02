/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

// KAMUS
int T[20] = {3, 8, 20, 23, 24, 30, 44, 45, 62, 69, 83, 88, 96, 101, 103, 132, 146, 162, 165, 202};
int i, N, X, IX;

// ALGORITMA
int main() {
    printf("Masukkan elemen yang dicari: ");
    scanf("%d", &X);
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &N);

    i = 1;

    while (i <= N && T[i] < X) {
        i = i + 1;
    }

    if (T[i] == X) {
        IX = i;
        printf("%d\n", IX);
    } else {
        IX = 0;
        printf("%d\n", IX);
    }
    return 0;
}