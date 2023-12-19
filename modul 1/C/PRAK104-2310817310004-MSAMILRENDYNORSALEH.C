#include <stdio.h>

int main() {
    int sepatuA = 400000, sepatuB = 350000;
    float diskonA = 0.13, diskonB = 0.21;
    int hargadiskonA = sepatuA - (sepatuA * diskonA);
    int hargadiskonB = sepatuB - (sepatuB * diskonB);
    printf("Harga sepatu A adalah %d\n", sepatuA);
    printf("Harga sepatu B adalah %d\n", sepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", hargadiskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", hargadiskonB);

    return 0;
}
