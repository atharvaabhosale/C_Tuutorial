#include<stdio.h>

int main() {

	// For loop
	printf("\n=========== For Loop : ===========\n");
	for (int i = 1; i <= 10; i++) {
		printf("%d\n",i);
	}

	// While loop
	printf("\n=========== While Loop ===========\n");
	int j = 1;
	while (j <= 5) {
		printf("*");
		j++;
	}

	// Do - While loop
	printf("\n=========== Do-While Loop : ===========\n");

	int k = 1;
	do {
		printf("\nChippi Chippi chapa chapa!!");
		k++;
	} while (k <= 2);

	// Print sum of first n natural Numbers
	printf("\n=========== Sum of first N numbers ===========\n");
	int num;
	int sum = 0;

	printf("Enter Your Number = ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		sum = sum + i;
	}

	printf("Sum = %d \n", sum);

	// print numbers in reverse
	for (int i = num; i >= 0; i--) {
		printf("%d", i);
	}

	// Print the Table of Number entered by the user

	printf("\n=========== The Table of a Numberr ===========\n");

	int number;
	int table = 0;

	printf("Enter the number = ");
	scanf("%d", &number);
	for (int i = 1; i <= 10; i++) {
		table = number * i;
		printf("%d \n",table);
	}

	// Break statement
	printf("\n=========== Break statement  ===========\n");

	for (int i = 0; i <= 10; i++) {
		printf("%d \n",i);
		if (i == 5) {
			break;
		}
	}
	printf("break has raised!");

}