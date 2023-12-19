#include <stdio.h>
#include <math.h>

int main() {
    float alas = 5, tinggi = 12;
    float sisiA = tinggi;
    float sisiB = sqrt((alas * alas) + (tinggi * tinggi));
    float sisiC = alas;
    float keliling, luas;
    keliling = sisiA + sisiB + sisiC;
    luas = 0.5 * alas * tinggi;
    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", sisiA);
    printf("Sisi B = %.0f cm\n", sisiB);
    printf("Sisi C = %.0f cm\n", sisiC);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}
