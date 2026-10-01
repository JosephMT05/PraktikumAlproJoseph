/* Nama File: jarakPBola.c*/
/* Deskripsi: Algoritma PBola*/
/* Pembuat: 24060125140145 - Joseph Marco Tanuwidjaja*/
/* Tgl Pembuatan: 24 Februari 2026*/

#include <stdio.h>

int main() {
    // KAMUS
    float v0, t, g;

    // ALGORITMA
    printf("Masukkan Kecepatan Awal(v0) dalam m/s: ");
    scanf("%f", &v0);
    printf("Masukkan Waktu(t) dalam detik: ");
    scanf("%f", &t);
    g = 9.8;

    float y = v0 * t + 0.5 * g * t * t;
    printf("Jarak PBola adalah: %f meter\n", y);
    return 0;
}