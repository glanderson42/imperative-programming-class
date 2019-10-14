#include "sort.h"

void swap(int* n, int* m) {
    int temp = *n;
    *n = *m;
    *m = temp;
}

void sort(int arr[], int size) {
    for(int i = 0; i < size - 1; ++i) {
        for(int j = 0; j < size - i - 1; ++j) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
