#include <stdio.h>


int main() {
    int i = 3, j = 4, max, sum = 0;
    int arr['i']['j'] = {
    {3, -2, 4, 9},
    {0, 3, 10, 3},
    {5, -4, -6, 0}
    };

    for (i = 0; i < 3; i++) {
        max = arr[0][j];
        for (j = 0; j < 4; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
        sum += max;
        printf("\nMax element in the array = %d  ", max);
    }
    printf("\n");
    printf("\nSum of max elements = %d", sum);
    return 0;
}