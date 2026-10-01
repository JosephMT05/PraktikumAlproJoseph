/* Nama File: jarakGLBB.c*/
/* Deskripsi: Algoritma GLBB*/
/* Pembuat: 24060125140145 - Joseph Marco Tanuwidjaja*/
/* Tgl Pembuatan: 24 Februari 2026*/

#include <stdio.h>

int main() {
    // KAMUS
    float v0, a, t, s;

    // ALGORITMA
    printf("Masukkan kecepatan awal (v0) dalam m/s: ");
    scanf("%f", &v0);
    printf("Masukkan percepatan (a) dalam m/s^2: ");    
    scanf("%f", &a);
    printf("Masukkan waktu (t) dalam detik: ");
    scanf("%f", &t);

    s = v0 * t + 0.5 * a * t * t;

    printf("Jarak GLBB adalah: %f meter\n", s);
    return 0;
}