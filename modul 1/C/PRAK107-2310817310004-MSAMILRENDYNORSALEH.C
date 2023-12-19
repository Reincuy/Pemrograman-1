#include <stdio.h>

int main() {
    float sisiX = 4, sisiY = 5, sisiZ = 7;
    float hargapermeter = 85000;
    float keliling = sisiX + sisiY + sisiZ;
    float biaya = keliling * hargapermeter;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %.0f, %.0f, dan %.0f\n", sisiX, sisiY, sisiZ);
    printf("Keliling Tanah Pak Dengklek adalah %.0f\n", keliling);
    printf("Harga tanah Per Meter adalah %.0f\n", hargapermeter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %.0f\n", biaya);

    return 0;
}
