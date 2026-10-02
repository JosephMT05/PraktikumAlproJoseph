/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, D, i, j, temp, M = 0;
    scanf("%d %d", &N, &D);

    int W[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &W[i]);
    }

    while (i < N) {
        temp = W[i];
        for (j = 1; j <= N ; j++) {
            if (temp - W[i + 1] > D) {
                i = i + 1;
                M += 1;
            } else if (temp == W[i + 1]) {
                i = i + 1;
            } 
        }
    }
}