#include <stdio.h>

#ifdef SIZE

int main() {
    int arr[SIZE];
    #ifdef DEBUG
    printf("The size of array is %d\n", SIZE);
    #endif
    printf("Give the elements to fill the array\n");
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
        #ifdef DEBUG
        printf("You inserted value : %d at index %d\n", arr[i], i);
        #endif
    }
}

#endif // SIZE
