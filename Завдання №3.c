#include <stdio.h>
#include <math.h>

int main() { //Третє завдання

	int a, y, z, x;
	printf_s("Enter a:\n");
	scanf_s("%d", &a);
	printf_s("Enter y:\n");
	scanf_s("%d", &y);
	printf_s("Enter z:\n");
	scanf_s("%d", &z);

	x = a * sqrt(pow(y, 2) - (2 * a)) + pow(cos(z), 2);

	printf("Respond: x = %d\n", x);


	return 0;
}