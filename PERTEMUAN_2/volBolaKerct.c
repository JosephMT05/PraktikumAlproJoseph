/* Nama File: volBolaKerct.c*/
/* Deskripsi: Algoritma Volume Bola Kerucut*/
/* Pembuat: 24060125140145 - Joseph Marco Tanuwidjaja*/
/* Tgl Pembuatan: 24 Februari 2026*/

#include <stdio.h>

int main() {
    // KAMUS
    float r, t, volBola, volKerucut;
    const float pi = 3.1415;

    // ALGORITMA
    printf("Masukkan jari-jari (r) dalam meter: ");
    scanf("%f", &r);
    printf("Masukkan tinggi (t) dalam meter: ");
    scanf("%f", &t);

    volBola = (4.0/3.0) * pi * r * r * r;
    volKerucut = (1.0/3.0) * volBola;

    printf("Volume Bola adalah: %f meter kubik\n", volBola);
    printf("Volume Kerucut adalah: %f meter kubik\n", volKerucut);
    
    return 0;
}