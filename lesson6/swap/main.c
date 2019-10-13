#include <stdio.h>

#include "swap.h"

int main() {
    int x = 10;
    int y = 20;
    printf("Before swap [ x = %d ] [ y = %d ]\n", x, y);
    swap(&x, &y);
    printf("After swap [ x = %d ] [ y = %d ]\n", x, y);
    return 0;
}
