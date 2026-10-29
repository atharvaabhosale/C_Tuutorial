
#include <stdio.h>

int main() {
    float side;
    float area;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("The area is = %.2f\n", area);

    return 0;
}
