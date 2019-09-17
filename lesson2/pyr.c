#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Missing parameter!\n");
        return -1;
    }

    int height = atoi(argv[1]);
    int space = 2 * height;

    int i, j;
    for (i = 0; i < height; ++i) {
        for (j = 0; j < space; ++j) {
            printf(" ");
        }
        for (j = 0; j <= i; ++j) {
            printf("* ");
        }

        printf("\n");
        space--;
    }
    return 0;
}

