/*Nama: Joseph Marco Tanuwidjaja*/
/*NIM: 24060125140145*/
/*Lab: E2*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// KAMUS
int T, N, current, last;


// ALGORITMA
int main() {
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        int Antrian[1000000];
        for (int i = 0; i < N; i++) {
            scanf("%d", &Antrian[i]);
        }

        int last = Antrian[0];
        printf("%d", last);

        for (int i = 1; i < N; i++) {
            if (Antrian[i] >= last) {
                printf(" %d", Antrian[i]);
                last = Antrian[i];
            }
        }

        printf("\n"); 
    }

    return 0;
}