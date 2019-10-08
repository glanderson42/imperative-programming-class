#include <stdio.h>


#ifdef SIZE

int main() {
    int arr[SIZE]; 
    #ifdef DEBUG
    printf("From file: %s, from line: %d : \nArray size: %d\n", __FILE__, __LINE__, SIZE);        
    #endif // DEBUG
    printf("Enter values to fill the array.\n");
    for(int i = 0; i < SIZE; ++i) {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
        #ifdef DEBUG
        printf("From file: %s, from line: %d : \nInserted value: %d at index: %d\n", __FILE__, __LINE__, arr[i], i);
        #endif
    }
}

#endif // SIZE
