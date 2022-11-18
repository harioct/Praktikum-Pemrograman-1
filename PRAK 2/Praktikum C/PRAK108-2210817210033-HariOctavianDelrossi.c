#include <stdio.h>
int main()
{
    float mengelilingi, jarak, k, phi, r;
    mengelilingi=5;
    jarak=14;
    k=jarak/mengelilingi;
    phi=3.14;
    r=k/(2*phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", mengelilingi);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    return 0;
}