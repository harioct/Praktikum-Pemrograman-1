#include <stdio.h>
int main(){
    float r,t,v,l,k;
    float pi=3.142857;
    printf("Masukkan jari-jari: ");scanf("%f",&r);
    printf("Masukkan tinggi: ");scanf("%f",&t);
    printf("\n");
    v=pi*r*r*t;
    printf("Volume= %.2f\n",v);
    l=2*pi*r*(r+t);
    printf("Luas= %.2f\n",l);
    k=2*pi*r;
    printf("Keliling= %.2f\n",k);
    return 0;
}