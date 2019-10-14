#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Give the size of array: ");
    scanf("%d", &size);

    int* arr = (int*)calloc(size, sizeof(int));
    for(int i = 0; i < size; ++i) {
        printf("%d\n", arr[i]);
    } 
    printf("Give the elements of array: \n");
    for(int i = 0; i < size; ++i) {
        printf("Give a value: ");
        scanf("%d", &arr[i]);
        printf("%d inserted at index %d\n", arr[i], i);
    }

    printf("Give the new size of array: ");
    int new_size;
    scanf("%d", &new_size);
    printf("Give the new elements of array: \n");
    arr = (int*)realloc(arr, size);
    for(int i = size; i < new_size; ++i) {
        printf("Give a value: ");
        scanf("%d", &arr[i]);
        printf("%d inserted at index %d\n", arr[i], i);
    }

    printf("Elements of array: \n");
    for(int i = 0; i < new_size; ++i) {
        printf("[%d] = %d\n", i, arr[i]);
    }

    free(arr);
}
