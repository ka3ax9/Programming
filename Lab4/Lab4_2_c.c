#include <stdio.h>
#include <math.h>

int main() {


	int sum = 0, low = 1, high = 25, cube, i = 1;

	 do{
		{
			if (i % 5 == 0)
				sum += i;
		}
		i++;
	 } while (i < high);

	cube = pow(sum, 3);

	printf("Result:");
	printf("\n%d", cube);


	return 0;
}