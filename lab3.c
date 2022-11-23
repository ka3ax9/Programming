#include <stdio.h>
#include <math.h>



/*int main() { //Перше завдання А)

	int a, b, c;


	printf("Enter b, c:\n");
		scanf_s("%d, %d", &b, &c);

		if (b == 1)
		{
			a = 4 * b - 5 * c;
			printf("a = %d\n", a);
		}

		if (b == 2)
		{
			a = sqrt(4 - b * c);
			printf("a = %d\n", a);
		}

		if (b == 3)
		{
			a = b / pow(c, 2);
			printf("a = %d\n", a);
		}


		else
		{
			printf("it is not possible to evaluate the value of the expression");
		}



	return 0;
}*/

/*int main() { //Перше завдання Б)

	int a, b, c;


	printf("Enter b, c:\n");
	scanf_s("%d, %d", &b, &c);

	if (b == 1)
	{
		a = 4 * b - 5 * c;
		printf("a = %d\n", a);
	}

	else if (b == 2)
	{
		a = sqrt(4 - b * c);
		printf("a = %d\n", a);
	}

	else if (b == 3)
	{
		a = b / pow(c, 2);
		printf("a = %d\n", a);
	}


	else
	{
		printf("it is not possible to evaluate the value of the expression");
	}



	return 0;
}*/



/*int main() { //Друге завдання, частина 1

	int d1, d2, d3, d4, x;

	printf("Enter: d1, d2, d3, d4\n");
	scanf_s("%d, %d, %d, %d", &d1, &d2, &d3, &d4);

	if (d1 <= d2 && d2 <= d3 && d3 <= d4)
	{
		x = (d1 + d2 + d3 + d4) / 4;
		printf("arithmetic mean = %d\n", x);
	}

	else
	{
		x = pow(sqrt(d1 * d2 * d3 * d4), 4);
		printf("Geometric mean = %d\n", x);
	}

	return 0;
}*/

/*int main() { //Друге завдання, частина 2

	int num;

	printf("choose a number: 1, 2, 3, 4, 5, 6, 7\n");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1: printf("red"); break;
	case 2: printf("orange"); break;
	case 3: printf("yellow"); break;
	case 4: printf("green"); break;
	case 5: printf("blue"); break;
	case 6: printf("dark blue"); break;
	case 7: printf("purple"); break;
	default: printf("good bye \n");
	}




	return 0;
}*/



int main() { // Третє завдання

	int x, z, y;

	printf("Enter x and z:\n");
	scanf_s("%d, %d", &x, &z);


	y = (sqrt(x) + 2 * sqrt(x * z)) / (sqrt(x) - 2 * sqrt(x * z));
	if (0 >= x && z > 0) {
		printf("For the Given Values of y and z, the root of the negative number is found in the calculation process/n");
	}
	else
	{
		printf("%d\n", y);
	}

	return 0;
}