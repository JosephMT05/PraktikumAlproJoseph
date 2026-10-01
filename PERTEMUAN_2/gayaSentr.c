/* Nama File: gayaSentr.c*/
/* Deskripsi: Algoritma Gaya Sentripetal*/
/* Pembuat: 24060125140145 - Joseph Marco Tanuwidjaja*/
/* Tgl Pembuatan: 24 Februari 2026*/

#include <stdio.h>

int main(){
    // KAMUS
    float m, v, r, F;

    // ALGORITMA
    printf("Masukkan massa (m) dalam kg: ");
    scanf("%f", &m);
    printf("Masukkan kecepatan (v) dalam m/s: ");
    scanf("%f", &v);
    printf("Masukkan jari-jari lintasan (r) dalam meter: ");
    scanf("%f", &r);

    F = (m * v * v) / r;
    printf("Gaya Sentripetal adalah: %f Newton\n", F);
    return 0;
}