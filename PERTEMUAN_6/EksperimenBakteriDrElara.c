/*Nama: Joseph Marco Tanuwidjaja*/
/*NIM: 24060125140145*/
/*Lab: E2*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, b, x;
    
    scanf("%d %d %d", &b, &x, &t);
    for (int i = 1; i <= t; i++) {

        b = b * 2;

        if (i % 5 == 0) {
            if (b <= x) {
                b = 0;
            } else {
                b = b - x;
            }
        }
    }
    printf("%d\n", b);
    
    return 0;
}