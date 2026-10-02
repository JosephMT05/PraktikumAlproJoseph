/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a[55][55], b[55][55];
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d", &a[i][j]);
            
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d", &b[i][j]);
            
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int sum = 0;
            
            for(int m=1; m<=n; m++)
                sum += a[i][m] * b[m][j];
            
            sum += ((i + j) % 2 == 0) ? (i + 2) : (j + 3);
            
            if(j > 1) printf(" ");
            printf("%d", sum);
        }
        printf("\n");
    }
    return 0;
}