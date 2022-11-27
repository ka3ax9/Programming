#include <stdio.h>
int main() {
    int i, n, x;
    float j, s = 0, p = 0;

    printf("Enter n = ");
    scanf_s("%d", &n);
    printf("Enter x = ");
    scanf_s("%d", &x);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++)
            p += (j / x);
        s += p;
    }
    
    printf("Result = %.2f\n", s);

}
