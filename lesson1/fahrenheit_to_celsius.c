#include <stdio.h>

int main() {
    float celsius;
    float fahreinheit;

    printf("Enter the temeperature in Fahrenheit: ");
    scanf("%f", &fahreinheit);
    celsius = (fahreinheit - 32) * 5 / 9;
    
    printf("\n %.2f Fahrenheit = %.2f Celsius\n", fahreinheit, celsius);

    return 0;
}
