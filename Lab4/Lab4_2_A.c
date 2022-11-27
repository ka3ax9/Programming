#include <stdio.h>
#include <math.h>

int main() {


	int sum = 0, low=1, high=25, cube;

	for (int i = low; i < high; i++)
	{
		if (i % 5 == 0)
			sum += i;
	}


	cube = pow(sum, 3);

	printf("Result:");
	printf("\n%d", cube);


	return 0;
}