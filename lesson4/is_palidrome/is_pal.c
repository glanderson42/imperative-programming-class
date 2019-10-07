#include "is_pal.h"

int is_pal(int n) {
    int reversed_num = 0;
    int remainder = 0;
    int original = n;

    while(n != 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n /= 10;
    }

    return (original == reversed_num) ? 0 : -1;
}
