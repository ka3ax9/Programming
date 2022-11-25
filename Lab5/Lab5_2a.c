#include <stdio.h>
#include <math.h>


int main() {

    int n, imax = 0, y = 0;
    const int M = 5;


    printf("Enter the number of elements in the array: ");
    printf("\nn = ");
    scanf_s("%d", &n);

    int a['n'];
    printf("Enter real numbers for the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%d", &a[i]);
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