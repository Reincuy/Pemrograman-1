#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 3;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    int AsamadenganB = (a == b);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", AsamadenganB);
    int BlebihbesardariC = (b > c);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", BlebihbesardariC);
    int is_a_not_equal_to_c = (a != c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", is_a_not_equal_to_c);

    return 0;
}
