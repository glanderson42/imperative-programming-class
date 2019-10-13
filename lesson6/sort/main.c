#include <stdio.h>

#include "sort.h"

#define ARRAY_SIZE(arr) sizeof(arr) / sizeof(arr[0])

int main() {
    int arr[] = {1, 45, 6, 2, 533, 5652, 666, 42, 7450};
    sort(arr, ARRAY_SIZE(arr));
    for(int i = 0; i < ARRAY_SIZE(arr); ++i) {
        printf("Value : %d at [%d]\n", arr[i], i);
    }
}
