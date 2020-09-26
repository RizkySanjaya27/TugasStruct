#include <stdlib.h>
#include <stdio.h> /* Libary untuk mengambil fungsi printf, gets */

// Membuat Struct
//Membuat tipe data baru
typedef struct
{
    char nama[100];
    char alamat[100];
    char nik[11];
    char agama[10];
} ktp;

//Deskripsi
int main()
{
    //deklarasi variabel
    ktp ktpku; //ktp nama ADT
    //ktpku nama variabel

    // Operasi Menginputkan Data
    //printf berfungsi print/menampilkan output
    printf("Nama = ");
    gets(ktpku.nama);
    printf("Alamat = ");
    gets(ktpku.alamat);
    printf("Agama = ");
    gets(ktpku.agama);
    printf("NIK = ");
    gets(ktpku.nik);
    printf("==============================================================");

    // Operasi Menampilkan Data
    printf("\n");
    printf("=========================DATA KTP==========================");
    printf("\n");
    // pada printf terdapat simbol %s\n berfungsi sebagai format teks
    printf("NIK: %s\n", ktpku.nik);
    printf("\n");
    printf("NAMA: %s\n", ktpku.nama);
    printf("\n");
    printf("ALAMAT: %s\n", ktpku.alamat);
    printf("\n");
    printf("AGAMA: %s\n", ktpku.agama);

    return 0;
}