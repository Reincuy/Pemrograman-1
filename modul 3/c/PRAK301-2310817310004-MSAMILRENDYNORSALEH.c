#include <stdio.h>

int main() {
    int n;
    printf("");
    scanf("%d", &n);

    if (n == 2) {
        int angka1, angka2;
        printf("");
        scanf("%d %d", &angka1, &angka2);

        if (angka1 > angka2) {
            int hasil = angka1;
            angka1 = angka2;
            angka2 = hasil;
        }

        printf("%d %d\n", angka1, angka2);
    } else if (n == 3) {
        int angka1, angka2, angka3;
        printf("");
        scanf("%d %d %d", &angka1, &angka2, &angka3);

        if (angka1 > angka2) {
            int hasilUrut = angka1;
            angka1 = angka2;
            angka2 = hasilUrut;
        }
        if (angka2 > angka3) {
            int hasilUrut = angka2;
            angka2 = angka3;
            angka3 = hasilUrut;
        }
        if (angka1 > angka2) {
            int hasilUrut = angka1;
            angka1 = angka2;
            angka2 = hasilUrut;
        }
        printf("%d %d %d\n", angka1, angka2, angka3);
    }

    return 0;
}
