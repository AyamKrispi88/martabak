#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define btsTgs 1000;


/*
Ini buat deskripsi




*/

typedef struct{
    int jam;
    char hari;
    int menit;
    char deskripsi [10000];
}konTaiNer;
void menu(){
    printf("\nMenu\n==========\n");
    printf("1. Tambah jadwal tugas\n");
    printf("2. Lihat tugas\n");
    printf("3. Hapus tugas\n");
    printf("4. Jalankan penjadwal\n");
    printf("5. Keluar\n");
}
int main(){
int menuPilihan;
menu();
printf("Pilih berdasarkan nomor: ");
scanf("%d", &menuPilihan);
switch(menuPilihan){
        case 1:
            printf("========================\nTambah jadwal tugasssss\n========================\n");
            tambahTugas();
            break;
        case 2:
            printf("=========================\nLihat Tugas\n=========================\n");
            break;
        case 3: 
            printf("=========================\nHapus Tugas\n=========================\n");
            break;
        case 4:
            printf("=========================\nJalankan penjadwalan\n=========================\n");
            break;
        case 5:
            printf("Su keluar\nMaaci sudah memakai >//<\n");
            break;
        default: 
        printf("Ga ada di menu\n");
        printf("Maaci udh mau make, aw>//<");
        break;
    
}
}
void tambahTugas() {
    konTaiNer Task1;
    printf("Deskripsi :");
    scanf("%s", &Task1.deskripsi);

   printf("%s\n", Task1.deskripsi);
    tambahTugas2();
}
void tambahTugas2() {
    konTaiNer Task1;
    printf("hapus tugas");
    printf("Ketik 'hapus': ");
    scanf("%s", &Task1.deskripsi);

    printf("             \n");

} 

