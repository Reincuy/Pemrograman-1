#include <stdio.h>

int main() {
    double Angka1, Angka2;
    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &Angka1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &Angka2);
    double hasil = Angka1 + Angka2;
    printf("Hasil dari penjumlahan nilai pertama \"%.2lf\" dan nilai kedua \"%.2lf\" adalah \"%.2lf\"\n", Angka1, Angka2, hasil);

    return 0;
}
