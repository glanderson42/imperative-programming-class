#include <stdio.h>
#include "config.h"

int main() {
    int arr[20];

    for(int i = 0; i < 20; ++i) {
        int tmp;
        scanf("%d", &tmp);
        arr[i] = tmp;
        #ifdef DEBUG
        printf("You inserted value: %d at index: %d\n", tmp, i);
        #endif
    }
}
