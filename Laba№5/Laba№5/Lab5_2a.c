#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {
    setlocale(LC_CTYPE, "ukr");

    int n, imax = 0, y = 0;
    const int M = 5;


    printf("Введiть кiлькiсть елементiв в масивi: ");
    printf("\nn = ");
    scanf_s("%d", &n);

    int a['n'];
    printf("Ввести дiйснi числа для масиву:\n");
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
    printf("\nКількість елементів більших за п'ять: %d\n", y);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[imax]) imax = i;
        printf(" a[%d] \n", i);
    }

    for (int i = imax + 1; i < n; i++)
        sum += a[i];
    printf("\nLocal sum = %d", sum);

    return 0;
}