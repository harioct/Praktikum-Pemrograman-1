#include <stdio.h>
int main()
{
    int s1, s2, s3, keliling, harga, biaya;
    s1=4;
    s2=5;
    s3=7;
    keliling=16;
    harga=85000;
    biaya=keliling*harga;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", s1,s2,s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
    return 0;
}