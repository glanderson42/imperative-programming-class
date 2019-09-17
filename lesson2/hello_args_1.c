#include <stdio.h>

int main(int argc, char** argv) {
    if(argc >= 2) {
        printf("Hello, %s\n", argv[1]);
    } else {
        printf("Missing parameter! \n");
    }

    return 0;
}
