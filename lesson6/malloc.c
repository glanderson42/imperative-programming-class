#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Give the size of array: ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size);
    
    printf("Give the elements of array: ");
    for(int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
        printf("%d inserted at index %d\n", arr[i], i);
    }

    free(arr);
}
