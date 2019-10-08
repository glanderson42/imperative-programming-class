#include <stdio.h>

#define SQR(x) ((x) * (x))
#define SQR_WRONG(x) (x * x) // ha pl meghivjuk a 2 + 3 ertekre a kovetkezo keppen ertekelodik ki: 2 + 3 * 2 + 3 = 2 + 6 + 3 = 11

int main() {
    printf("%d\n", SQR(5));
    printf("%d\n", SQR_WRONG(2 + 3));
}
