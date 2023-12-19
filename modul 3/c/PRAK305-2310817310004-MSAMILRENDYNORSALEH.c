#include <stdio.h>

int main() {
    int detik;
    
    printf("");
    scanf("%d", &detik);

    int hari = detik / 86400; 
    detik = detik % 86400;
    int jam = detik / 3600;
    detik = detik % 3600;
    int menit = detik / 60;
    detik = detik % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}
