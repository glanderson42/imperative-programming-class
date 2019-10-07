#include "reverse.h"

int reverse(int num) {
    int reversed_num = 0;
    int remainder = 0;

    while(num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    return reversed_num;
}
