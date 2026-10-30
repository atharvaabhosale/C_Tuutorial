// Changes to parameters in function don't change the values in calling function.
// Because a copy of argument is passed to the function

#include<stdio.h>

void calculatePrice(float value);

int main() {
    float value = 100;
    calculatePrice(value);
    
    printf("The Actual price = %f", value);
    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("The value after GST is = %f\n", value);
}