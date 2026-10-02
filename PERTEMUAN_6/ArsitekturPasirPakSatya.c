/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int h[105];
    for(int i=1; i<=n; i++) {
        scanf("%d", &h[i]);
    }
    
    for(int i=0; i<m; i++) {
        int p;
        scanf("%d", &p);
        
        h[p] -= 2; 
        
        if(p > 1) {
            h[p-1]++;
        }
        if(p < n) {
            h[p+1]++;
        }
    }
    
    for(int i=1; i<=n; i++) {
        if(i > 1) printf(" "); 
        printf("%d", h[i]);
    }
    printf("\n");
    
    return 0;
}