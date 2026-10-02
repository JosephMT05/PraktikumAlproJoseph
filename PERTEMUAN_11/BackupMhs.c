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
    FILE *ArsipMhs, *ArsipMhs2;
    Rekaman RekMhs;

    /* Algoritma */
    ArsipMhs = fopen("mahasiswa.txt", "r");
    if (ArsipMhs == NULL) {
        printf("File gagal dibuat.\n");
        return 1;
    } else {
        ArsipMhs2 = fopen("mahasiswa_backup.txt", "w");
        while (1) {
            fscanf(ArsipMhs, "%d,%49[^,],%d", 
                    &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
            if (RekMhs.nim == 99999) {
                break;
            }
            fprintf(ArsipMhs2, "%d,%s, %d\n", RekMhs.nim, RekMhs.nama, RekMhs.nilai);
        }
        fclose(ArsipMhs2);
    }

    fscanf(ArsipMhs, "%d,%49[^,],%d", 
            &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    
    while (RekMhs.nim != 99999) {
        printf("Nilai %s (%d) adalah %d.\n", 
                RekMhs.nama, RekMhs.nim, RekMhs.nilai);
        fscanf(ArsipMhs, "%d,%49[^,],%d", 
                &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    }
    
    fclose(ArsipMhs);
    
    return 0;
}