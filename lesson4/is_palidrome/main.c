#include <stdio.h>

#include "is_pal.h"

int main() {
    int n = 100;
    int is_palidrome = is_pal(n);
    if(is_palidrome == 0) {
        printf("%d is palidrome\n", n);
    } else {
        printf("%d is not palidrome\n", n);
    }
}
