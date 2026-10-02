/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    int k;
    scanf("%d", &k);
    
    int lubang[9][9] = {0}; 
    
    for (int i = 0; i < k; i++) {
        int r_lubang, c_lubang;
        scanf("%d %d", &r_lubang, &c_lubang);
        lubang[r_lubang][c_lubang] = 1; 
    }
    
    int m;
    scanf("%d", &m);
    
    int jatuh = 0; 
    
    for (int i = 0; i < m; i++) {
        char move;
        scanf(" %c", &move);
        
        if (jatuh == 1) {
            continue;
        }
        
        int next_r = r;
        int next_c = c;
        
        if (move == 'U') next_r++;
        else if (move == 'D') next_r--;
        else if (move == 'L') next_c--;
        else if (move == 'R') next_c++;
        
        if (next_r >= 1 && next_r <= 8 && next_c >= 1 && next_c <= 8) {
            r = next_r;
            c = next_c;
            
            if (lubang[r][c] == 1) {
                jatuh = 1; 
            }
        }
    }
    
    if (jatuh == 1) {
        printf("JATUH\n");
    } else {
        printf("%d %d\n", r, c);
    }
    
    return 0;
}