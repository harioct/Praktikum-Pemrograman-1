#include <stdio.h>
int main(){
    float a,b,i,j,x,y,h;

    printf("Masukkan nilai a: ");scanf("%f",&a);
    printf("Masukkan nilai b: ");scanf("%f",&b);
    printf("Masukkan nilai i: ");scanf("%f",&i);
    printf("Masukkan nilai j: ");scanf("%f",&j);
    printf("Masukkan nilai x: ");scanf("%f",&x);
    printf("Masukkan nilai y: ");scanf("%f",&y);

    h=(a-b)*i/j-(x+y);
    printf("\nHasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah %.3f",h);
    return 0;
}