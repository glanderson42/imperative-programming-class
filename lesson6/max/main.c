#include <stdio.h>

#include "max.h"

#define ARRAY_SIZE(array) sizeof(array) / sizeof(array[0])

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max_element = max(arr, ARRAY_SIZE(arr));
    printf("Max element of the array: %d\n", max_element);
    return 0;
}
