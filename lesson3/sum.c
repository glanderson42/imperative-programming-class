#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int size_of_nums = sizeof(nums) / sizeof(nums[0]);

    int i;
    int sum = 0;
    for(i = 0; i < size_of_nums; ++i) {
        sum += nums[i];
    }

    printf("Sum of the array: %d\n", sum);
}
