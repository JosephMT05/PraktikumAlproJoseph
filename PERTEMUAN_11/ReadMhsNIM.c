/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int nim;
    char nama[50];
    int nilai;
} Rekaman;

int main() {
    /* Kamus */
    FILE *ArsipMhs;
    Rekaman RekMhs;

    /* Algoritma */
    ArsipMhs = fopen("mahasiswa.txt", "r");
    if (ArsipMhs == NULL) {
        printf("File gagal dibuat.\n");
        return 1;
    }
    
    fscanf(ArsipMhs, "%d,%49[^,],%d", 
            &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    
    int cari;
    printf("Masukkan 3 digit NIM terakhir: ");
    scanf("%d", &cari);
    
    bool found = false;
    while (RekMhs.nim != 99999) {
        if (cari == RekMhs.nim) {
            found = true;
            break;
        }
        fscanf(ArsipMhs, "%d,%49[^,],%d", 
                &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    }

    if (found) {
        printf("Mahasiswa: %d,%s, %d\n", RekMhs.nim, RekMhs.nama, RekMhs.nilai);
    } else {
        printf("Tidak Ditemukan.\n");
    }
    
    fclose(ArsipMhs);
    
    return 0;
}