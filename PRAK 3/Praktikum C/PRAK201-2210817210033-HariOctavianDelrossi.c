#include <stdio.h>
int main(){
    char nama[15],nim[15],kel[10],ttl[30],alamat[50],hobi[10],nohp[15];

    printf("Nama                    : ");
    gets(nama);
    printf("NIM                     : ");
    gets(nim);
    printf("Kelas Paralel           : ");
    gets(kel);
    printf("Tempat/Tanggal Lahir    : ");
    gets(ttl);
    printf("Alamat                  : ");
    gets(alamat);
    printf("Hobby                   : ");
    gets(hobi);
    printf("No. HP                  : ");
    gets(nohp);
    return 0;
}