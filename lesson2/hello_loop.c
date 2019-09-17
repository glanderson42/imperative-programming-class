#include <stdio.h>
#include <string.h>

int main() {
    char buffer[100];
    while(1) {
        scanf("%99s", buffer);
        if(strcmp(buffer, "quit") == 0) {
            break;
        }

        printf("Hello, %s\n", buffer);
    }

    return 0;
}
