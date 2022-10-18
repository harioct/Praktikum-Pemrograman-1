#include <stdio.h>
#include <math.h>
int main(){
    int A,B,C,K,L;

    printf("Masukkan nilai A: ");scanf("%d",&A);
    printf("Masukkan nilai B: ");scanf("%d",&B);
    printf("\n");

    C=sqrt((B*B)-(A*A));
    printf("Alas= %d cm\n",C);

    printf("Tinggi= %d cm\n",A);

    K=A+B+C;
    printf("Keliling= %d cm\n",K);

    L=0.5*C*A;
    printf("Luas= %d cm^2",L);
    return 0;
}