#include <stdio.h>

int main() {
    int* ptr;
    int val = 20;
    ptr = &val;

    printf("Value of ptr: %d\n", *ptr);

    return 0;
}
