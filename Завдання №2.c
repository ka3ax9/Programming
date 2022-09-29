#include <stdio.h>
#include <math.h>

int main() { // Друге завдання

	float a, b, c;
	printf_s("Enter a:\n");
	scanf_s("%f", &a);
	printf_s("Enter b:\n");
	scanf_s("%f", &b);
	printf_s("Enter c:\n");
	scanf_s("%f", &c);
	float y;

	y = (((3 * a) - (4 * b) + (5 * c)) / ((a * b) + (2 * b * c) + (3 * a * c))) - (((a * b) - c) / 4);

	printf_s("Respond: = %.1f", y);








	return 0;

}