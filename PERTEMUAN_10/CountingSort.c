/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>

// KAMUS
int i, j, K;

// ALGORITMA
int main() {
    int N;
    printf("\nMasukkan jumlah elemen: ");
    scanf("%d", &N);

    int T[N];
    for (i = 0; i < N; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &T[i]);
    }
    
    int max, min;
    printf("\nMasukkan nilai maksimum: ");
    scanf("%d", &max);
    printf("Masukkan nilai minimum: ");
    scanf("%d", &min);

    int TabCount[max + 1];
    for (i = 0; i < max + 1; i++) {
        TabCount[i] = 0;
    }

    for (i = 0; i < N; i++) {
        TabCount[T[i]] = TabCount[T[i]] + 1;
    }

    K = 0;
    for (i = 0; i < max + 1; i++) {
        if (TabCount[i] != 0) {
            for (j = 0; j < TabCount[i]; j++) {
                T[K] = i;
                K++;
            }
        }
    }

    printf("Hasil Counting Sort: ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
    
    return 0;
}