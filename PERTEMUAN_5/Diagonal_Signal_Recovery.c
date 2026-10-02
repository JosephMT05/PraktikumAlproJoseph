/* Nama : Joseph Marco Tanuwidjaja
 NIM  : 24060125140145
 Lab  : E2
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char grid[2005][2005];

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (grid[i][i] == '#') {
            int freq[26] = {0}; 
            
            if (i < n / 2) { 
                for (int j = i + 1; j < n; j++) {
                    if (grid[i][j] >= 'A' && grid[i][j] <= 'Z') {
                        freq[grid[i][j] - 'A']++;
                    }
                }
                for (int j = i + 1; j < n; j++) {
                    if (grid[j][i] >= 'A' && grid[j][i] <= 'Z') {
                        freq[grid[j][i] - 'A']++;
                    }
                }
            } else {
                for (int j = 0; j < i; j++) {
                    if (grid[i][j] >= 'A' && grid[i][j] <= 'Z') {
                        freq[grid[i][j] - 'A']++;
                    }
                }
                for (int j = 0; j < i; j++) {
                    if (grid[j][i] >= 'A' && grid[j][i] <= 'Z') {
                        freq[grid[j][i] - 'A']++;
                    }
                }
            }
            
            int maxFreq = -1;
            char bestChar = 'A';
            
            for (int k = 0; k < 26; k++) {
                if (freq[k] > maxFreq) {
                    maxFreq = freq[k];
                    bestChar = 'A' + k;
                }
            }
            
            grid[i][i] = bestChar;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}