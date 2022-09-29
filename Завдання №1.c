#include <stdio.h>
#include <math.h>

int main() { //Перше завдання

	int a, b;
	int remainder, difference, product;

	printf("Enter a and b:\n");
	scanf_s("%d, %d", &a, &b);

	remainder = a % b;

	printf("remainder = %d\n", remainder);


	difference = b - a;


	printf("difference = %d\n", difference);

	product = b * a;

	printf("product = %d\n", product);


	return 0;
}