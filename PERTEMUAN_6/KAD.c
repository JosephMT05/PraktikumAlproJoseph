#include <stdio.h>

int main() {
    int t;
    
    // Membaca jumlah testcase
    scanf("%d", &t);
    
    while (t--) {
        int n;
        // Membaca jumlah warga dalam antrean
        scanf("%d", &n);
        
        if (n == 0) {
            printf("\n");
            continue;
        }
        
        int current_id;
        int last_kept;
        
        // Membaca warga pertama. 
        // Warga pertama di antrean dipastikan selalu selamat di awal.
        scanf("%d", &current_id);
        printf("%d", current_id); // Cetak ID warga pertama yang selamat
        last_kept = current_id;
        
        // Mengecek sisa warga di antrean
        for (int i = 1; i < n; i++) {
            scanf("%d", &current_id);
            
            // Jika ID warga saat ini >= ID terakhir yang selamat, dia selamat
            if (current_id >= last_kept) {
                printf(" %d", current_id);
                last_kept = current_id; // Update ID terakhir yang selamat
            }
        }
        // Pindah baris untuk testcase berikutnya
        printf("\n");
    }
    
    return 0;
}