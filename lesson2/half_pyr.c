#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    if(argc < 2) {
        printf("Missing parameter! \n");
        return -1;
    }
    
    int height = atoi(argv[1]);
    int i;
    int j;
    for(i = 1; i <= height; ++i) {
        for(j = 1; j <= i; ++j) {
            printf("# ");
        }
        printf("\n");
    }
}
