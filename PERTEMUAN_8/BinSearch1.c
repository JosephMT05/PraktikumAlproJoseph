/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <stdbool.h>

// KAMUS
int T[20] = {3, 8, 20, 23, 24, 30, 44, 45, 62, 69, 83, 88, 96, 101, 103, 132, 146, 162, 165, 202};
int i, N, X, Atas, Bawah, Tengah;
bool found;

// ALGORITMA
int main() {
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &N);
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &X);
    
    Atas = 1; 
    Bawah = N;
    found = false;

    while ((Atas <= Bawah) && (!found)) {
        Tengah = (Atas + Bawah) / 2;
        if (T[Tengah] == X) {
            found = true;
            i = Tengah;
        } else if (T[Tengah] < X) {
            Atas = Tengah + 1;
        } else {
            Bawah = Tengah - 1;
        }
    } 

    if (found) {
        printf("True, %d\n", i);
    } else {
        printf("False\n", i);
    }
    return 0;
}