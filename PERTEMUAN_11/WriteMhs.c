/* Nama: Joseph Marco Tanuwidjaja */
/* NIM: 24060125140145 */
/* Lab: E2 */

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
    Rekaman RekMhs;

    /* Algoritma */
    ArsipMhs = fopen("mahasiswa.txt", "w");
    
    if (ArsipMhs == NULL) {
        printf("File gagal dibuat.\n");
        return 1;
    }
 
    printf("Masukkan NIM, 99999 untuk berhenti: ");
    scanf("%d", &(RekMhs.nim));
    getchar();
 
    while (RekMhs.nim != 99999) {
        printf("Masukkan nama: ");
        fgets(RekMhs.nama, sizeof(RekMhs.nama), stdin);
        RekMhs.nama[strlen(RekMhs.nama) - 1] = '\0';
 
        printf("Masukkan nilai: ");
        scanf("%d", &(RekMhs.nilai));
        getchar();
 
        fprintf(ArsipMhs, "%d, %s, %d\n",
            RekMhs.nim, RekMhs.nama, RekMhs.nilai);
 
        printf("Berhasil dimasukkan %s (%d) dengan nilai %d.\n----\n",
                RekMhs.nama, RekMhs.nim, RekMhs.nilai);
 
        printf("Masukkan NIM, 99999 untuk berhenti: ");
        scanf("%d", &(RekMhs.nim));
        getchar();
        }
 
        fprintf(ArsipMhs, "%d, %s, %d\n", 99999, "MARK", 0);
        fclose(ArsipMhs);
 
    return 0;
}