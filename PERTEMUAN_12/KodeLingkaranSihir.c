/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int T[N], i;
    for (i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    int Pass, K, Temp;
    for (Pass = 1; Pass <= N - 1; Pass++) {
        for (K = N - 1; K >= Pass; K--) {
            if (T[K] < T[K - 1]) {
                Temp = T[K];
                T[K] = T[K - 1];
                T[K - 1] = Temp;
            }
        }
    }

    int jumlah_angka;
    jumlah_angka = div(N, 2).quot;

    int jumlah;
    jumlah = 0;
    for (K = 1; K < N; K++) {
        if (K % 2 != 0) {
            jumlah = jumlah + T[K];
            jumlah_angka = jumlah_angka - 1;
        }
        if (jumlah_angka == 0) {
            break;
        }
    }

    printf("%d\n", jumlah);

    return 0;
}