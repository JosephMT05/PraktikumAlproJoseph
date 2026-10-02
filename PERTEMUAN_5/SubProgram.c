// Nama : Joseph Marco Tanuwidjaja
// NIM : 24060125140145
// Kelas : E

#include <stdio.h>

float hitung(float a, float b, int c) {
  if (c == 1) {
    return a + b;
  } else if (c == 2) {
    return a - b;
  } else if (c == 3) {
    return a * b;
  } else if (c == 4) {
    if (b != 0) {
      return a / b;
    } else {
      printf("Pembagi tidak boleh nol!\n");
    }
  } else {
    printf("Nilai C tidak valid! Harus antara 1 dan 4.\n");
  }
}

int main() {
  int N, C;
  float A, B;

  printf("\nMasukkan nilai N (banyaknya perhitungan yang diinginkan): ");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++) {
    printf("\nMasukkan nilai bilangan real A: ");
    scanf("%f", &A);

    printf("Masukkan nilai bilangan real B: ");
    scanf("%f", &B);

    printf("Masukkan nilai C (\n");
    printf("1 = Penjumlahan, \n");
    printf("2 = Pengurangan, \n");
    printf("3 = Perkalian, \n");
    printf("4 = Pembagian): ");
    scanf("%d", &C);

    printf("Hasil Perhitungan: %.1f\n" , hitung(A, B, C));
  }

  return 0;
}