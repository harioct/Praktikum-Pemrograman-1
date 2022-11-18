#include <stdio.h>
int main()
{
    float a,b,h;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f",&a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f",&b);

    h=a+b;
    printf("\nHasil dari penjumlahan nilai pertama \"%.1f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"",a,b,h);
    printf("\n+======================================================================================+\n");

    float x,y,j;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f",&x);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f",&y);

    j=x+y;
    printf("\nHasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",x,y,j);
    return 0;
}