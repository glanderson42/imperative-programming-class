#include <stdio.h>

int main(int argc, char** argv) {
    if(argc > 2) {
        for(int i = 1; i < argc; ++i) {
            printf("Hello, %s!\n", argv[i]);
        }
    } else {
        printf("Missing parameter(s)\n");
    }

    return 0;
}
