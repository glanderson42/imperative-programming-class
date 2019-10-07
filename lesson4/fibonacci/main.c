#include <stdio.h>
#include "fibonacci.h"

int main() {
    int n;
    printf("Give the number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i) {
        printf("%d. fib number: %d\n", i, fibonacci(i));
    }
}
