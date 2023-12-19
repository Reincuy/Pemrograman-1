#include <stdio.h>

int main() {
    float j, t;
    float pi = 3.142857;
    printf("");
    scanf("%f", &j);
    printf("");
    scanf("%f", &t);
    float volume = pi * j * j * t;
    float luas = 2 * pi * j * (j + t);
    float keliling = 2 * pi * j;
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}
