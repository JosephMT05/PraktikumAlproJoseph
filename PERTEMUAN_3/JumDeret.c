#include <stdio.h>

int main () {
    
    int i, n;

    printf("Masukkan nilai n dalam bilangan bulat: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i > 2) {
                printf("%d bukan bilangan prima\n", n);
            }
            else {
                printf("%d adalah bilangan prima\n", n);
            }
        }
    }
    return 0;
}