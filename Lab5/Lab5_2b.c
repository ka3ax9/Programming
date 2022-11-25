#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, imax = 0, y = 0;
    const int M = 5;


    printf("Enter the number of elements in the array:\n ");
    scanf_s("%d", &n);

    const int Low = -100, High = 100;
    srand(time(0));

    int a['n'];
    printf("Generated array elements:\n");
    for (int i = 0; i < n; i++) {
        a[i] = Low + rand() % High;
        printf("\na[%d] = %d\n", i, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > M)
            y++;
    }
    printf("\nThe number of elements is greater than five: %d\n", y);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[imax]) imax = i;
        printf(" a[%d] \n", i);
    }

    for (int i = imax + 1; i < n; i++)
    {
        sum += a[i];
    }
    printf("\nLocal sum = %d", sum);

    return 0;
}