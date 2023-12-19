#include <stdio.h>

int main() {
    char Nama[100];
    char NIM[100];
    char KelasParalel[100];
    char TTL[100];
    char Alamat[100];
    char Hobby[100];
    char NoHP[100];

    printf("Nama                  : ");
    fgets(Nama, sizeof(Nama), stdin);
    printf("NIM                   : ");
    fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel         : ");
    fgets(KelasParalel, sizeof(KelasParalel), stdin);
    printf("Tempat/Tanggal Lahir  : ");
    fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat                : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    printf("Hobby                 : ");
    fgets(Hobby, sizeof(Hobby), stdin);
    printf("No. HP                : ");
    fgets(NoHP, sizeof(NoHP), stdin);

    printf("Nama                  : %s", Nama);
    printf("NIM                   : %s", NIM);
    printf("Kelas Paralel         : %s", KelasParalel);
    printf("Tempat/Tanggal Lahir  : %s", TTL);
    printf("Alamat                : %s", Alamat);
    printf("Hobby                 : %s", Hobby);
    printf("No. HP                : %s", NoHP);

    return 0;
}
