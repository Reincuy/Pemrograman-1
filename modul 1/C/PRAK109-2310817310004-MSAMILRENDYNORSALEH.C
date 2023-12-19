#include <stdio.h>

int main() {
    int pasukanYZ = 958730, hero = 5;
    int pasukanvshero = pasukanYZ / hero;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukanYZ);
    printf("Jumlah pahlawan = %d\n", hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukanvshero);

    return 0;
}
