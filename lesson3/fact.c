#include <stdio.h>

int factorial(int n) {
    int result = 1;
    int i;
    for(i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    printf("%d\n", factorial(10));
}
