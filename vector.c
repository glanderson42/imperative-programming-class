#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
    int* vec;
    int size;
    int capacity;
} vector;

void init_vector(vector* v, int size) {
    v->vec = (int*)malloc(size * sizeof(int));
    v->size = 0;
    v->capacity = size;
}

void append_to_vector(vector* v, int elem) {
    if(v->size + 1 <= v->capacity) {
        v->vec[v->size] = elem;
        ++(v->size);
    } else {
        v->capacity *= 2;
        v->vec = realloc(v->vec, v->capacity);
        ++(v->size);
        v->vec[v->size] = elem;
    } 
}

int at(vector* v, int idx) {
    if(idx > v->size || idx < 0) {
        printf("Wrong index\n");
        return -1;
    }
    return v->vec[idx]; 
}

void vector_dtor(vector* v) { free(v->vec); }

int main() {
    vector* vec = (vector*)malloc(sizeof(vector));
    init_vector(vec, 10);

    for(int i = 0; i < 10; ++i) {
        append_to_vector(vec, i);
    }

    for(int i = 0; i < 10; ++i) {
        printf("[%d] = %d\n", i, at(vec, i));
    }

    vector_dtor(vec);
    free(vec);
}
