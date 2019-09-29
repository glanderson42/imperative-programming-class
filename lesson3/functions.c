#include <stdio.h>

void change_number(int number, int n) {
    number = n;
}

void change_number_by_addr(int* number, int n) {
    *number = n;
}

int main() {
    int number = 10;
    change_number(number, 20);
    printf("Number: %d\n", number);
    change_number_by_addr(&number, 20);
    printf("Number: %d\n", number);

    return 0;
}
