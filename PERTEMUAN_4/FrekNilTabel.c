#include <stdio.h>

int main() {
    int n;

    printf("Masukkan panjang tabel > 2: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Panjang tabel harus lebih dari 2.\n");
        return 1;
    }

    printf("Masukkan %d bilangan integer > 0: \n", n);
    
    int T[n];

    for (int i = 0; i < n; i++) {
       printf("Elemen ke-%d: ", i + 1);
       scanf("%d", &T[i]);
    }

    int F = 0;
    for (int i = 0; i < n - 1; i++) {
        if (T[i] == T[i + 1]) {
            F++;
        } 
    }
}