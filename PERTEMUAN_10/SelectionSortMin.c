/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

int i, Pass, Temp, IMin;

int main() {
    int N;
    printf("\nMasukkan jumlah elemen: ");
    scanf("%d", &N);

    int T[N];
    for (i = 0; i < N; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &T[i]);
    }

    for (Pass = 0; Pass < N - 1; Pass++) {
        IMin = Pass;

        for (i = Pass + 1; i < N; i++) {
            if (T[IMin] > T[i]) {
                IMin = i;
            }
        }

        Temp = T[Pass];
        T[Pass] = T[IMin];
        T[IMin] = Temp;
    }

    printf("\nHasil Selection Sort: ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}