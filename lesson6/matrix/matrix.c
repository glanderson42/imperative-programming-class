#include "matrix.h"

void matrix_sum(int** n, int** m, int row, int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            n[row][col] += m[row][col];
        }
    }
}

void matrix_scalar_mult(int** n, int row, int col, int scalar) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            n[row][col] *= scalar;
        }
    }
}

void matrix_mult(int** n, int** m, int row, int col) {
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j) {
            n[row][col] *= m[row][col];
        }
    }  
}
