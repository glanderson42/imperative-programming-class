#include <stdio.h>

void add_one(int n) { n += 1; }
void add_two(int* n) { *n += 2; }

int main() {
    int number = 10;
    add_one(number);
    add_two(&number);
    printf("%d\n", number);
    
    return 0;
}
