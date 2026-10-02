// Nama : Joseph Marco Tanuwidjaja
// NIM : 24060125140145
// Kelas : E

#include <stdio.h>

typedef struct{
    float x;
    float y;
} titik;

int main() {
    titik t1, t2;
    float m, c;

    printf("\nInput Titik 1 (x, y): ");
    scanf("%f, %f", &t1.x, &t1.y);

    printf("Input Titik 2 (x, y): ");
    scanf("%f, %f", &t2.x, &t2.y);   

    m = (t2.y - t1.y) / (t2.x - t1.x);
    c = t1.y - (m * t1.x);  

    printf("Hasil: ");

    if (c >= 0) {
        printf("y = %.1fx + %.1f\n", m, c);
    } else {
        printf("y = %.1fx - %.1f\n", m, -c);
    }

    return 0;
}