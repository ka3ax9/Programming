#include <stdio.h>
#include <math.h>

int main() {
    float z, y;

    printf("Enter number y = ");
    scanf_s("%f", &y);
    printf("Enter number z = ");
    scanf_s("%f", &z);

    while ((z - 2 * y) <= 0)
    {
        printf("Wrong y , enter again  number y = ");
        scanf_s("%f", &y);
    }

    float t = sqrt(3 * (y / (z - 2 * y))) - y * z;

    printf("Result t = %.2f\n", t);

}