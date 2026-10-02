#include <stdio.h>
#include <string.h>

typedef struct {
   int nim;
   char nama[50];
   int nilai;
} Rekaman;

int main() {
    /* Kamus */
    FILE *ArsipMhs;
    FILE *lulus;
    FILE *mengulang;
    Rekaman RekMhs;
    /* Algoritma */
    lulus = fopen("Mahasiswa_lulus.txt", "w");
    mengulang = fopen("Mahasiswa_mengulang.txt", "w");
    ArsipMhs = fopen("mahasiswa.txt", "r");

    
    if (ArsipMhs == NULL) {
        printf("File gagal dibuat.\n");
        return 1;
    }
    if (mengulang == NULL) {
        printf("File mengulang gagal dibuat.\n");
        return 1;
    }
    if (lulus == NULL) {
        printf("File lulus gagal dibuat.\n");
        return 1;
    }
    fscanf(ArsipMhs, "%d,%49[^,],%d", &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    while (RekMhs.nim != 99999) {
        if(RekMhs.nilai >= 75){

            fprintf(lulus, "%d,%s,%d\n", RekMhs.nim, RekMhs.nama, RekMhs.nilai);
            printf("berhasil memasukan %s %d %d. pada file LULUS \n ", &RekMhs.nama, RekMhs.nim, RekMhs.nilai);

        }
        else{

            fprintf(mengulang, "%d,%s,%d\n", RekMhs.nim, RekMhs.nama, RekMhs.nilai);
            printf("berhasil memasukan %s %d %d. pada file MENGULANG \n ", &RekMhs.nama, RekMhs.nim, RekMhs.nilai);
        }    
        fscanf(ArsipMhs, "%d,%49[^,],%d", &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    }
    fprintf(lulus, "%d,%s,%d\n", 99999, "MARK", 0);
    fprintf(mengulang, "%d,%s,%d\n", 99999, "MARK", 0);
    fclose(ArsipMhs);
    fclose(lulus);
    fclose(mengulang);
    return 0;
}