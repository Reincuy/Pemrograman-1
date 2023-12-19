#include <stdio.h>

int main() {
    int N;

    printf("");
    scanf("%d", &N);

    if (1 <= N && N <= 9) {
        printf("Satuan\n");
    } else if (11 <= N && N <= 19) {
        printf("Belasan\n");
    } else if (10 <= N && N <= 99) {
        printf("Puluhan\n");
    } else if (N >= 100) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else {
        printf("Nol\n");
    }

    return 0;
}