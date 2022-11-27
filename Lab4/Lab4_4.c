#include <stdio.h>
#include <math.h>


int main() {
    float dx, y, x, b;

    while (1) {
        printf("Enter the lower limit of the interval:");
        printf("\nx = ");
        scanf_s("%f", &x);
        printf("Enter the upper limit of the interval:");
        printf("\nb = ");
        scanf_s("%f", &b);
        printf("Enter the interval step:");
        printf("\ndx = ");
        scanf_s("%f", &dx);

        if (x + dx < b) {
            printf("\n\n***The results***\n");

            printf("Lower limit: ");
            printf("%.2f\n", x);

            printf("Upper limit: ");
            printf("%.2f\n", b);

            printf("Step: ");
            printf("%.2f\n", dx);


            printf("_________________________________\n");
            printf("|\t x  \t|\ty=f(x)\t|\n");
            printf("|_______________|_______________|\n");

            while (x <= b) {
                y = pow(4, -cos(x));

                printf("|\t%.2f\t|\t%.2f\t|\n",
                    x, y);
                x += dx;
                printf("|_______________|_______________|\n");
            }
            break;
        }
        else {

            printf("\nIncorrect lower and upper limit values entered\n");

            printf("Try again...\n\n");
            continue;
        }
    }

    return 0;
}