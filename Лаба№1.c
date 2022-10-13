#include <stdio.h>
#include <math.h>


int main() {


	float x1 = 0, x2 = 0, x3 = 4, y1 = 0, y2 = 3, y3 = 0;


	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	float c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

	printf("given a = %.2f,\ngiven b = %.2f,\ngiven c = %.2f\n", a, b, c);

	float S, P, p;

	P = a + b + c;

	p = P / 2;

	S = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("S = %.2f\n", S);
	printf("P = %.2f\n", P);



	return 0;
}