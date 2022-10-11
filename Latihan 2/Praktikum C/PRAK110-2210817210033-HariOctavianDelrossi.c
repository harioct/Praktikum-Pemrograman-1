#include <stdio.h>
int main()
{
    float alas, tinggi, A, B, C, kel, L;
    alas=5;
    tinggi=12;
    A=alas;
    B=sqrt(alas*alas+tinggi*tinggi);
    C=tinggi;
    kel=A+B+C;
    L=A*C/2;
    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", A);
    printf("Sisi B = %.0f cm\n", B);
    printf("Sisi C = %.0f cm\n", C);
    printf("Keliling = %.0f cm\n", kel);
    printf("Luas = %.0f cm", L);
    return 0;
}