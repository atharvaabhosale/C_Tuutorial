//Call by Value vs Call by Referance

// See the value does not change even after passing through the function, its becoz of the value is copied!
#include<stdio.h>
void calculate(int value);
void calculation(int* n);

int main() {
	int n = 100;
	int value = 100;
	calculate(value);
	printf("%d \n", value);

	calculation(&n);
	printf("%d", n);
	return 0;
}
// See the value does not change even after passing through the function, its becoz of the value is copied!
void calculate(int value) {
	value = value + 50;
}

// Now let's do it by refrence method
void calculation(int* n) {
	*n = (*n) + 50;
}