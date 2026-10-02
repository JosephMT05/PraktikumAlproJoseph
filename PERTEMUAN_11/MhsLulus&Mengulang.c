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
    FILE *ArsipMhsLulus;
    FILE *ArsipMhsUlang;
    Rekaman RekMhs;

    /* Algoritma */
    ArsipMhs = fopen("mahasiswa.txt", "r");
    if (ArsipMhs == NULL) {
        printf("File mahasiswa.txt gagal dibuka.\n");
        return 1;
    }

    ArsipMhsLulus = fopen("mahasiswa_lulus.txt", "w");
    if (ArsipMhsLulus == NULL) {
        printf("File mahasiswa_lulus.txt gagal dibuat.\n");
        fclose(ArsipMhs); 
        return 1;
    }

    ArsipMhsUlang = fopen("mahasiswa_mengulang.txt", "w");
    if (ArsipMhsUlang == NULL) {
        printf("File mahasiswa_mengulang.txt gagal dibuat.\n");
        fclose(ArsipMhs);     
        fclose(ArsipMhsLulus);
        return 1;
    }

    fscanf(ArsipMhs, "%d,%49[^,],%d",
                        &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);

    while (RekMhs.nim != 99999) {
        if (RekMhs.nilai >= 75) {
            fprintf(ArsipMhsLulus, "%d,%s, %d\n",
                    RekMhs.nim, RekMhs.nama, RekMhs.nilai);
            printf("Berhasil memasukkan %s (%d) nilai %d ke file LULUS\n",
                   RekMhs.nama, RekMhs.nim, RekMhs.nilai);
        } else {
            fprintf(ArsipMhsUlang, "%d,%s, %d\n",
                    RekMhs.nim, RekMhs.nama, RekMhs.nilai);
            printf("Berhasil memasukkan %s (%d) nilai %d ke file MENGULANG\n",
                   RekMhs.nama, RekMhs.nim, RekMhs.nilai);
        }

        fscanf(ArsipMhs, "%d,%49[^,],%d",
                            &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    }

    fprintf(ArsipMhsLulus, "%d,%s, %d\n", 99999, "MARK", 0);
    fprintf(ArsipMhsUlang, "%d,%s, %d\n", 99999, "MARK", 0);

    fclose(ArsipMhs);
    fclose(ArsipMhsLulus);
    fclose(ArsipMhsUlang);

    return 0;
}