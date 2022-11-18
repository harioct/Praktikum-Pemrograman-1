#include <stdio.h>
int main()
{
    int a, b, c;
    a=4;
    b=8;
    c=3;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    if(a==b){
        printf("Apakah a sama dengan b? Jawabannya adalah 1\n");}
    else{
        printf("Apakah a sama dengan b? Jawabannya adalah 0\n");}
    if(b>c){
        printf("Apakah b lebih besar dari c? Jawabannya adalah 1\n");}
    else{
        printf("Apakah b lebih besar dari c? Jawabannya adalah 0\n");}
    if(a!=c){
        printf("Apakah a tidak sama dengan c? Jawabannya adalah 1\n");}
    else{
        printf("Apakah a tidak sama dengan c? Jawabannya adalah 0\n");}
    return 0;
}