/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, M, i, j, temp, K = 0, L = 0;
    scanf("%d %d", &N, &M);

    int P[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }

    while (i < N) {
        temp = P[i];
        for (j = 1; j <= N ; j++) {
            if (temp == P[i + 1]) {
                i = i + 1;
                K += 1;
            } else if (temp == P[i + 1]) {
                i = i + 1;
            } 
        }
    }
}