/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

int i, K, Pass, Temp;

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
        for (K = N - 1; K >= Pass; K--) {
            if (T[K] < T[K - 1]) {
                Temp = T[K];
                T[K] = T[K - 1];
                T[K - 1] = Temp;
            }
        }
    }

    printf("Hasil Bubble Sort: ");
    for (K = 0; K < N; K++) {
        printf("%d ", T[K]);
    }
    printf("\n");
    
    return 0;
}