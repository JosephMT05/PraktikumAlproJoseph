/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

// KAMUS
int T[20] = {65, 24, 56, 138, 15, 45, 11, 28, 202, 23, 78, 67, 44, 83, 193, 96, 69, 25, 42, 70};
int N, X, i, IX;
int found = 0;

// ALGORITMA
int main() {
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &N);

    printf("Masukkan elemen yang dicari: ");
    scanf("%d", &X);

    i = 0;

    while (i < N && !found) {
        if (T[i] == X) {
            found = 1;
            printf("%s\n", "True");
        } else {
            i = i + 1;
        }
    }

    if (found == 1) {
        IX = i + 1;
        printf("%d\n", IX);
    } else {
        IX = 0;
        printf("%s\n", "False");
        printf("%d\n", IX);
    }
    return 0;
}