#include <stdio.h>
int main()
{
    int A, B, DiscA, DiscB;
    A=400000;
    B=350000;
    DiscA=A-(A*0.13);
    DiscB=B-(B*0.21);
    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", DiscA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", DiscB);
    return 0;
}