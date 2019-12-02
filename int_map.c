#include <stdio.h>
#include <stdlib.h>

typedef struct pair {
    int key;
    int value;
} pair;

typedef struct int_map {
    pair* pairs;
    int size;
} int_map;

void init_int_map(int_map* map, const int size) {
    map->pairs = (pair*)malloc(size);
    map->size = 0;
}

void append(int_map* map, const int key, const int value) {
    ++(map->size);
    map->pairs[map->size].key = key;
    map->pairs[map->size].value = value;
}

int get(int_map* map, const int key) {
    for(int i = 0; i < map->size; ++i) {
        if(map->pairs[i].key == key) {
            return map->pairs[i].value;
        }
    }
    return -1;
}

void dtor(int_map* map) { free(map->pairs); }

int main() {
   int_map* map = (int_map*)malloc(sizeof(int_map)); 
   init_int_map(map, 3);
   append(map, 1, 2);
   append(map, 2, 3);
   printf("Key: %d value: %d\n", 1, get(map, 1));
   dtor(map);
}
