/* Nama : Joseph Marco Tanuwidjaja 
 NIM  : 24060125140145
 Lab  : E2
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void bacaInput(int *n, long long arr[]) {
    printf("Masukkan jumlah elemen (N): ");
    scanf("%d", n);
    
    printf("Masukkan %d bilangan bulat: ", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%lld", &arr[i]); 
    }
}

int main() {
    int n;
    long long dataAngka[100005]; 
    bacaInput(&n, dataAngka);
    for (int i = 0; i < n; i++) {
        if (isPrime(dataAngka[i])) {
            printf("T ");
        } else {
            printf("F ");
        }
    }
    return 0;
}