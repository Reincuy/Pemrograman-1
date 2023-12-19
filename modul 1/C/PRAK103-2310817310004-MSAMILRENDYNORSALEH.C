#include <stdio.h>

int main() {
    int a=9, b=6, x=10, y=7;
    float ab = a+b;
    float abx = ab*x;
    float abxy = abx/y;
    printf("variabel a bernilai %d\n",a);
    printf("variabel b bernilai %d\n",b);
    printf("variabel x bernilai %d\n",x);
    printf("variabel y bernilai %d\n",y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f",abxy);

    return 0;
}