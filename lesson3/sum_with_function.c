#include <stdio.h>

int sum(int nums[], int size) {
    int i;
    int sum = 0;
    for(i = 0; i < size; ++i) {
        sum += nums[i];
    }

    return sum;
}

int main() { 
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int size = sizeof(nums) / sizeof(nums[0]);
    int s = sum(nums, size); 

    printf("Sum: %d\n", s);
    return 0;
}
