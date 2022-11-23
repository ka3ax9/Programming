#include <stdio.h>
#include <math.h>

int main() { // Друге завдання
	const int a = 15, b = -2, c = 3;
	float y;

	printf("Given: y = (((3 * a) - (4 * b) + (5 * c)) / ((a * b) + (2 * b * c) + (3 * a * c))) - (((a * b) - c) / 4)\n");
	printf("Constant values: a = 15, b = -2, c = 3 :\n");


	y = (((3 * a) - (4 * b) + (5 * c)) / ((a * b) + (2 * b * c) + (3 * a * c))) - (((a * b) - c) / 4);

	printf("Respond: = %.1f", y);



	return 0;

}
