#include <stdio.h>

int main() {
    double a, b, i, j, x, y;
    scanf("%lf %lf", &a, &b);
    scanf("%lf %lf", &i, &j);
    scanf("%lf %lf", &x, &y);
    double hasil = (a - b) * (i / j) - (x + y);
    printf("\n%.3lf\n", hasil);
    return 0;
}
