#include <stdio.h>

#include "matrix.h"

int main() {
    int x[2][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}};
    int y[2][4] = {{2, 3, 4, 5}, {3, 4, 5, 6}};

    matrix_sum(x, y, 2, 4);
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 2; ++j) {
            printf("Array: %d\n", x[i][j]);
        }
    }  
}
