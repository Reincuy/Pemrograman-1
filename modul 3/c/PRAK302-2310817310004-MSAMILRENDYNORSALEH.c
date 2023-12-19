#include <stdio.h>

int main() {
    int Huruf;

    printf("");
    scanf("%d", &Huruf);

    if (Huruf >= 80) {
        printf("A\n");
    } else if (70 <= Huruf && Huruf <= 79) {
        printf("B\n");
    } else if (60 <= Huruf && Huruf <= 69) {
        printf("C\n");
    } else if (50 <= Huruf && Huruf <= 59) {
        printf("D\n");
    } else if (Huruf < 50) {
        printf("E\n");
    }
    return 0;
}