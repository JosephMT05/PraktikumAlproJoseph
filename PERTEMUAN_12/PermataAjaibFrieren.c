/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int T[], int N) {
    int max_val = T[0];
    for (int i = 1; i < N; i++) {
        if (T[i] > max_val) {
            max_val = T[i];
        }
    }
    return max_val;
}

int main() {
    int N;
    scanf("%d", &N);

    int T[N], i;
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    int max_val = max(T, N);
    int TabCount[max_val + 1];
    for (i = 0; i < max_val + 1; i++) {
        TabCount[i] = 0;
    }
    
    for (i = 0; i < N; i++) {
        TabCount[T[i]] = TabCount[T[i]] + 1;
    }

    int j = 0;
    int T2[N];
    for (i = 0; i < max_val + 1; i++) {
        if (TabCount[i] == 1) {
            T2[j] = i;
            j++;
        }
    }

    if (j == 0) {
        printf("KOSONG");
    }
    for (i = 0; i < j; i++) {
        printf("%d ", T2[i]);
    }


    return 0;
}