/*Nama File: NilMax2Tabel.c*/
/*Deskripsi: Menentukan nilai maksimum kedua dari sebuah tabel bilangan integer > 0*/
/*Pembuat File: 24060125140145 - Joseph Marco Tanuwidjaja*/
/*Tanggal Pembuatan: 10 Maret 2026*/

#include <stdio.h>

int main() {
    // KAMUS
    int n;

    // ALGORITMA
    printf("Masukkan panjang tabel: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Panjang tabel harus lebih dari 2.\n");
        return 1;
    }

    // Deklarasi tabel dengan panjang n
    int T[n];

    // Input elemen-elemen tabel
    printf("Masukkan %d bilangan integer > 0: \n", n);

    for (int i = 0; i < n; i++) {
       printf("Elemen ke-%d: ", i + 1);
       scanf("%d", &T[i]);
    }

    // Inisialisasi nilai maksimum pertama dan kedua
    int max1 = 0;
    int max2 = 0;
    int i;

    // Menentukan nilai maksimum pertama dan kedua
    for (int i = 0; i < n; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i]; 
        } 
        else if (T[i] > max2 && T[i] != max1) {
            max2 = T[i];
        }
    }
    
    printf("Nilai maksimum kedua: %d\n", max2);
    return 0;
}