/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

int i, Pass, Temp;

int main() {
    int N;
    printf("\nMasukkan jumlah elemen: ");
    scanf("%d", &N);

    int T[N];
    for (i = 0; i < N; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &T[i]);
    }

    for (Pass = 1; Pass <= N - 1; Pass++) {
        Temp = T[Pass];
        i = Pass - 1;

        while (Temp < T[i] && i >= 0) {
            T[i + 1] = T[i];
            i = i - 1;
        }

        T[i + 1] = Temp;
    }

    printf("\nHasil Insertion Sort: ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}