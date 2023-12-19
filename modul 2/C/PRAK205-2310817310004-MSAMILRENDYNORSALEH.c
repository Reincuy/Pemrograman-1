#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("");
    scanf("%lf %lf", &a, &b);
    float c = sqrt(b * b - a * a);
    float tinggi = a;
    float keliling = a + b + c;
    float luas = 0.5 * c * a;
    printf("Alas = %.0lf cm\n", c);
    printf("Tinggi = %.0lf cm\n", tinggi);
    printf("Keliling = %.0lf cm\n", keliling);
    printf("Luas = %.0lf cm^2\n", luas);

    return 0;
}
