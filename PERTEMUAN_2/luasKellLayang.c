/* Nama File: luasKellLayang.c*/
/* Deskripsi: Algoritma Luas dan Keliling Layang-layang*/
/* Pembuat: 24060125140145 - Joseph Marco Tanuwidjaja*/
/* Tgl Pembuatan: 24 Februari 2026*/

#include <stdio.h>

int main() {
    // KAMUS
    float d1, d2, s1, s2, luas, keliling;

    // ALGORITMA
    printf("Masukkan diagonal 1 (d1) dalam meter: ");
    scanf("%f", &d1);
    printf("Masukkan diagonal 2 (d2) dalam meter: ");
    scanf("%f", &d2);
    printf("Masukkan sisi 1 (s1) dalam meter: ");
    scanf("%f", &s1);
    printf("Masukkan sisi 2 (s2) dalam meter: ");
    scanf("%f", &s2);

    luas = 0.5 * (d1 * d2);
    keliling = 2 * (s1 + s2);

    printf("Luas Layang-layang adalah: %f meter persegi\n", luas);
    printf("Keliling Layang-layang adalah: %f meter\n", keliling);
    
    return 0;
}