#include <stdio.h>
#include <math.h>

int main() {
    int putaran = 5;
    float jaraktempuh = 14;
    float jarijari;
    jarijari = jaraktempuh / (2 * M_PI * putaran);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jaraktempuh);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);

    return 0;
}
