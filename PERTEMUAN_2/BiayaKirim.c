/* Nama File: BiayaKirim.c*/
/* Deskripsi: Algoritma Biaya Kirim*/
/* Pembuat: 24060125140145 - Joseph Marco Tanuwidjaja*/
/* Tgl Pembuatan: 24 Februari 2026*/

#include <stdio.h>

int main() {
    // KAMUS
    float berat, jarak, biaya;
    const float biayaPerKg = 5000;
    const float biayaPerKm = 2000;
    const float biayaDasar = 10000;

    // ALGORITMA
    printf("Masukkan berat barang (kg): ");
    scanf("%f", &berat);
    printf("Masukkan jarak pengiriman (km): ");
    scanf("%f", &jarak);

    biaya = biayaDasar + (biayaPerKg * berat) + (biayaPerKm * jarak);

    printf("Biaya Kirim adalah: %f Rupiah\n", biaya);
    
    return 0;
}