#include <stdio.h>

int main() {
    int a=4;
    int b=8;
    int c=3;
    float ab = a*b;
    float abc = ab/c;
    printf("variabel a bernilai %d\n",a);
    printf("variabel b bernilai %d\n",b);
    printf("variabel c bernilai %d\n",c);
    printf("Jumlah hasil tersebut adalah %.6f",abc);

    return 0;
}