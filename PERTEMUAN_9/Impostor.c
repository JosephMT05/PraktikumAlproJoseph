/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, i, j = 0, IP;

    scanf("%d", &N);
    
    int T[N];
    scanf("%d", &T);

    while (j < N) {
        if (T[j + 1] - T[j] == T[j + 2] - T[j + 1]) {
            j = j + 1;
        }
    }

    if (T[j + 1] - T[j] > T[j + 2] - T[j + 1]) {
        IP = T[j + 1];
        printf("%d\n", IP);
    } else {
        IP = T[j + 2];
        printf("%d\n", IP);
    }

    return 0;
} 