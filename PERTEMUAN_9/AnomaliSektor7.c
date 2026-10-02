/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, K, i, j, temp, M = 1;
    scanf("%d %d", &N, &K);

    int A[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    while (i < N) {
        temp = A[i];
        for (j = 1; j <= N ; j++) {
            if (temp != A[i + 1]) {
                i = i + 1;
            } else if (temp == A[i + 1]) {
                M += 1;
                i = i + 1;
            } 
        } 
        if (M > K) {
            break;
        } else {
        i = i + 1;
        }
    }

    if (M <= K) {
        printf("AMAN");
    } else {
        for (j = 1; j <= N; j++) {
            printf("%d ", temp);
        }
    }
    return 0;
}
