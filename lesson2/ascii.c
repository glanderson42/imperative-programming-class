#include <stdio.h>
#include <string.h>

int main() {
    char* lower = "abcdefghijklmnopqrstuvwxyz";
    char* upper = "ABCDEFgHIJKLMNOPQRSTUVWXYZ";
    
    int i;
    int size = strlen(lower);
    for(i = 0; i < size; ++i) {
        printf("Character: %c ASCII: %d Upper: %c ASCII: %d\n", lower[i], lower[i], upper[i], upper[i]);
    }

    return 0;
}
