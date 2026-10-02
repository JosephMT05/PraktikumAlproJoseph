/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int T[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    int j = 0;
    int T2[N];
    int K;
    for (int i = 0; i < N; i++) {
        if (T[i] % M == 0) {
            K = i;
            for (int j = i + 1; j < N; j++) {
                if (T[j] % M == 0 && T[j] < T[K]) {
                    K = j;
                } 
            }
            
        int Temp;
        Temp = T[i];
        T[i] = T[K];
        T[K] = Temp;
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    
    return 0;
}