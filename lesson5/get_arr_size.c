#include <stdio.h>

#define GET_ARRAY_SIZE(x) sizeof(x) / sizeof(x[0])

int main() {
    int arr[20];
    printf("Array size: %d\n", GET_ARRAY_SIZE(arr));
}
