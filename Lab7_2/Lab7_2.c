#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int setn() {
    int n;
    printf("Enter the number of rows of the array: ");
    printf("\nn = ");
    scanf_s("%d", &n);
    return n;
}

void rar(int n, int* a)
{

    system("cls");
    srand(time(NULL));

    printf("Sformurovanui massuv: \n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 - 50;
        printf("%d ", a[i]);
    }
}

void minimal(int n, int* a) {
    int min = abs(a[0]), imin = 1;
    for (int i = 0; i < n; i++) {
        if (min > abs(a[i])) {
            min = abs(a[i]);
            imin = i + 1;
        }
    }
    printf("\nThe number of the minimum array element behind the module: %d (%d)\n", imin, min);
}

void sum(int n, int* a) {
   int s = 0, d = 0, p1, p2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            d = d + 1;
            if (d == 1)
                p1 = i;
            if (d == 2)
                p2 = i;
        }
    }

    printf("\n");
    

    for (int i = 0; i < n; i++)
    {
        if ((i > p1) && (i < p2))
            s +=a[i];
    }

    printf("Sum = %d", s);
}



    
int main() {
    int p1, p2;
    int n = setn();
    int a['n'];
    int* pa = a;
    pa = (int*)malloc(n * sizeof(int));

    rar(n, pa);

    minimal(n, pa);

    sum(n, pa);

    free(pa);
    return 0;
}