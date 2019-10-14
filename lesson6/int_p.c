#include <stdio.h>

int main() {
    int* ptr;
    int val = 20;
    ptr = &val;
    int* ptr2 = &val;
    printf("ptr = %d | ptr2 = %d | val = %d\n", *ptr, *ptr2, val);

    *ptr = 10;
    printf("ptr = %d | ptr2 = %d | val = %d\n", *ptr, *ptr2, val);
    *ptr2 = 42;
    printf("ptr = %d | ptr2 = %d | val = %d\n", *ptr, *ptr2, val);
    return 0;
}
